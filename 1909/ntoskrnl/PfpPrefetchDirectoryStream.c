/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x1406AB540
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1406AB18C (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140006020 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1400918DC (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     PfpOpenHandleCreate @ 0x14062CAC4 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14062CC38 (PfpOpenHandleClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140646F24 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x140647038 (PfpGetPageListCount.c)
 */

__int64 __fastcall PfpPrefetchDirectoryStream(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rsi
  __int64 Src; // r15
  unsigned __int64 v10; // r12
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r9
  unsigned int v18; // esi
  unsigned int v19; // r8d
  unsigned int v20; // r10d
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r9
  int v25; // r10d
  size_t Size; // [rsp+38h] [rbp-51h]
  SIZE_T Length; // [rsp+48h] [rbp-41h]
  __int64 v29; // [rsp+50h] [rbp-39h]
  __int64 v30[2]; // [rsp+68h] [rbp-21h] BYREF
  int v31[2]; // [rsp+78h] [rbp-11h] BYREF
  __int128 v32; // [rsp+80h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp+7h]
  __int64 v34; // [rsp+E0h] [rbp+57h]
  unsigned int v35; // [rsp+F8h] [rbp+6Fh]

  v6 = a1[5];
  Src = a1[3];
  v30[0] = 0LL;
  v30[1] = 0LL;
  v33 = 0x200000000LL;
  v10 = 0LL;
  v34 = v6;
  v11 = *(unsigned __int16 *)(*a1 + 30);
  *(_DWORD *)Src = 4;
  v12 = *a1;
  v35 = v11;
  *(_QWORD *)v31 = 0LL;
  v32 = 0LL;
  v13 = *(_DWORD *)(v12 + 28);
  LOBYTE(v12) = v11;
  v14 = a5;
  v15 = (8 * (unsigned int)(v12 & 7)) | (unsigned __int64)(v13 & 7);
  LODWORD(v12) = a6;
  *(_QWORD *)(Src + 8) = v15;
  v16 = PfpOpenHandleCreate((__int64)v31, v6, *(_QWORD *)(v14 + 16), *(_QWORD *)(v14 + 8), 1048577, v12, 0, a2);
  if ( v16 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
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
        v23 = v10;
        v24 = v22 + *(unsigned int *)(v21 + 16LL * v18 + 8);
        if ( v22 >= v10 )
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
            v10 = v23;
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
        || (*(_DWORD *)(*a1 + 80) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v35)) < 0x80 )
      {
        v16 = -1073741248;
        goto LABEL_24;
      }
      LOBYTE(v29) = 0;
      LODWORD(Length) = 0;
      LODWORD(Size) = 8 * v25 + 16;
      v16 = IopXxxControlFile(
              *(void **)v31,
              0LL,
              0LL,
              0LL,
              (unsigned __int64)v30,
              0x90120u,
              (char *)Src,
              Size,
              0LL,
              Length,
              v29);
      if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, *(unsigned int *)(Src + 4));
      if ( v16 < 0 )
      {
        if ( v16 == -1073741807 )
          break;
        goto LABEL_24;
      }
      if ( v16 == 259 )
        KeBugCheckEx(0x191u, 0x14BAuLL, 0LL, 0LL, 0LL);
    }
    v16 = 0;
LABEL_24:
    v6 = v34;
  }
  if ( (v33 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v31, v6);
  return (unsigned int)v16;
}
