/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x14065DCA4
 * Callers:
 *     PfSnPrefetchMetadata @ 0x14065FE9C (PfSnPrefetchMetadata.c)
 *     PfSnGetSectionObject @ 0x140660E58 (PfSnGetSectionObject.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtWaitForSingleObject @ 0x1405EAAA0 (NtWaitForSingleObject.c)
 *     NtResetEvent @ 0x14065DC00 (NtResetEvent.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE EventHandle)
{
  unsigned int Status; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // rsi
  unsigned int v14; // r15d
  void *v15; // r9
  int v16; // r13d
  int v17; // ebx
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-60h]
  __int64 Length; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  struct _IO_STATUS_BLOCK v21; // [rsp+60h] [rbp-38h] BYREF

  Status = 0;
  if ( a5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 <= a4 || v10 - a4 < a5 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 96) & 7 | (8 * (*(_DWORD *)(a1 + 100) & 7 | 8));
      if ( a4 || a5 > 0x300 )
      {
        v13 = *(_QWORD *)(a1 + 80);
        v14 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)v13 = 3;
        *(_QWORD *)(v13 + 8) = v11;
        v15 = (void *)(v13 + 16);
        do
        {
          v16 = 768;
          if ( a5 - v14 < 0x300 )
            v16 = a5 - v14;
          *(_DWORD *)(v13 + 4) = v16;
          memmove(v15, (const void *)(a3 + 16 + 8LL * (v14 + a4)), (unsigned int)(8 * v16));
          v17 = 8 * *(_DWORD *)(v13 + 4) + 16;
          NtResetEvent(EventHandle, 0LL);
          LOBYTE(v20) = 0;
          LODWORD(Length) = 0;
          LODWORD(NumberOfBytes) = v17;
          Status = IopXxxControlFile(
                     a2,
                     EventHandle,
                     0LL,
                     0LL,
                     &v21,
                     590112,
                     (char *)v13,
                     NumberOfBytes,
                     0LL,
                     Length,
                     v20);
          if ( Status == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            Status = v21.Status;
          }
          if ( (Status & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v16;
          v15 = (void *)(v13 + 16);
        }
        while ( v14 < a5 );
      }
      else
      {
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = a5;
        NtResetEvent(EventHandle, 0LL);
        Status = IopXxxControlFile(
                   a2,
                   EventHandle,
                   0LL,
                   0LL,
                   &v21,
                   590112,
                   (char *)a3,
                   8 * a5 + 16,
                   0LL,
                   a4 & (unsigned int)Length,
                   a4);
        if ( Status == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          Status = v21.Status;
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return Status;
}
