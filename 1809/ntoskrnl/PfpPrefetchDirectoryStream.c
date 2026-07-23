/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x14065E58C
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x14065E1C4 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1400DE720 (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     PfpOpenHandleCreate @ 0x140661528 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406634BC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406635C0 (PfpGetPageListCount.c)
 */

__int64 __fastcall PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  __int64 Src; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // r9
  __int16 v13; // dx
  __int64 v14; // r8
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r9
  unsigned int v18; // esi
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r10
  int v25; // r10d
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-80h]
  __int64 Length; // [rsp+48h] [rbp-70h]
  __int64 v29; // [rsp+50h] [rbp-68h]
  struct _IO_STATUS_BLOCK v30; // [rsp+60h] [rbp-58h] BYREF
  HANDLE Handle[4]; // [rsp+70h] [rbp-48h] BYREF

  v6 = a1[5];
  memset(Handle, 0, sizeof(Handle));
  Src = a1[3];
  v11 = 0LL;
  Handle[3] = (HANDLE)0x200000000LL;
  v12 = *(_QWORD *)(a5 + 8);
  v13 = *(_WORD *)(*a1 + 30LL);
  v14 = *(_QWORD *)(a5 + 16);
  *(_DWORD *)Src = 4;
  v15 = a6;
  *(_QWORD *)(Src + 8) = (8 * (v13 & 7u)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  v16 = PfpOpenHandleCreate((unsigned int)Handle, v6, v14, v12, 1048577, v15, 0, a2);
  if ( v16 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v17, &a5);
    v18 = 0;
    while ( v18 < *(_DWORD *)(a3 + 16) )
    {
      *(_DWORD *)(Src + 4) = 0;
      if ( v18 >= *(_DWORD *)(a3 + 16) )
        break;
      v19 = *((_DWORD *)a1 + 8);
      v20 = 0;
      do
      {
        v21 = *(_QWORD *)(a3 + 24);
        v22 = *(_QWORD *)(v21 + 16LL * v18);
        v23 = v11;
        v24 = v22 + *(unsigned int *)(v21 + 16LL * v18 + 8);
        if ( v22 >= v11 )
          v23 = *(_QWORD *)(v21 + 16LL * v18);
        while ( v23 < v24 )
        {
          *(_QWORD *)(Src + 8LL * *(unsigned int *)(Src + 4) + 16) = v23;
          v23 += 4096LL;
          v20 = *(_DWORD *)(Src + 4) + 1;
          *(_DWORD *)(Src + 4) = v20;
          v19 = *((_DWORD *)a1 + 8);
          if ( v20 >= v19 )
          {
            v11 = v23;
            break;
          }
        }
        if ( v20 >= v19 )
          break;
        ++v18;
      }
      while ( v18 < *(_DWORD *)(a3 + 16) );
      if ( !v20 )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
      {
        v16 = -1073741248;
        goto LABEL_24;
      }
      LOBYTE(v29) = 0;
      LODWORD(Length) = 0;
      LODWORD(NumberOfBytes) = 8 * v25 + 16;
      v16 = IopXxxControlFile(Handle[0], 0LL, 0LL, 0LL, &v30, 590112, (char *)Src, NumberOfBytes, 0LL, Length, v29);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(Src + 4));
      if ( v16 < 0 )
      {
        if ( v16 == -1073741807 )
          break;
        goto LABEL_24;
      }
      if ( v16 == 259 )
        KeBugCheckEx(0x191u, 0x14B4uLL, 0LL, 0LL, 0LL);
    }
    v16 = 0;
  }
LABEL_24:
  if ( ((unsigned __int64)Handle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(Handle, v6);
  return (unsigned int)v16;
}
