/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x1406A9428
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406A9098 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140005F90 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1400A214C (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     PfpFileSetupObjectAttributes @ 0x140627568 (PfpFileSetupObjectAttributes.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14066D4C4 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14066D5D8 (PfpGetPageListCount.c)
 *     PfpPrefetchDirectoryStream @ 0x1406A97DC (PfpPrefetchDirectoryStream.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 Src; // r14
  __int64 v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  _DWORD *v17; // rbx
  NTSTATUS v18; // ebx
  __int64 result; // rax
  int v20; // r9d
  int v21; // eax
  unsigned __int64 v22; // rbx
  unsigned int v23; // r12d
  unsigned int v24; // r8d
  unsigned int v25; // r10d
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rcx
  int v31; // r10d
  unsigned int v32; // r8d
  int v33; // r10d
  __int64 v34; // r11
  size_t Size; // [rsp+38h] [rbp-81h]
  __int64 v36; // [rsp+48h] [rbp-71h]
  __int64 v37; // [rsp+50h] [rbp-69h]
  __int64 v38; // [rsp+60h] [rbp-59h]
  __int64 v39; // [rsp+68h] [rbp-51h]
  int v40; // [rsp+70h] [rbp-49h]
  ULONG_PTR v41[2]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v42[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v43[120]; // [rsp+98h] [rbp-21h] BYREF
  unsigned int v44; // [rsp+120h] [rbp+67h]
  int v46; // [rsp+130h] [rbp+77h] BYREF
  __int64 v47; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  memset(v43, 0, 0x30uLL);
  v38 = v2;
  v41[0] = 0LL;
  v5 = 5 * v2;
  v41[1] = 0LL;
  v42[0] = 0LL;
  v6 = 0LL;
  v42[1] = 0LL;
  Src = a1[3];
  v8 = *(_QWORD *)(*a1 + 32LL);
  v39 = v8;
  v40 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v9 = *(unsigned __int16 *)(*a1 + 30LL);
  *(_DWORD *)Src = 3;
  v44 = v9;
  *(_QWORD *)(Src + 8) = (8 * (v9 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v4, &v47);
  v10 = 0LL;
  if ( (*(_DWORD *)(v8 + 8 * v5 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      *(_DWORD *)(Src + 4) = 0;
      if ( (unsigned int)v10 >= *(_DWORD *)(v8 + 8 * v5 + 12) >> 1 )
        break;
      do
      {
        v11 = *(unsigned int *)(Src + 4);
        v12 = 48 * v10;
        v10 = (unsigned int)(v10 + 1);
        v13 = *(_QWORD *)(v8 + 8 * v5 + 16) + v12;
        v14 = *(_QWORD *)(v13 + 8);
        v15 = v13;
        if ( (*(_DWORD *)v13 & 0x10) == 0 )
          v15 = v6;
        v6 = v15;
        if ( v14 )
        {
          *(_QWORD *)(Src + 8 * v11 + 16) = v14;
          LODWORD(v11) = *(_DWORD *)(Src + 4) + 1;
          *(_DWORD *)(Src + 4) = v11;
          if ( (unsigned int)v11 >= *((_DWORD *)a1 + 8) )
            break;
        }
      }
      while ( (unsigned int)v10 < *(_DWORD *)(v8 + 8 * v5 + 12) >> 1 );
      if ( !(_DWORD)v11 )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v32)) < 0x80 )
      {
LABEL_52:
        v18 = -1073741248;
        goto LABEL_15;
      }
      LOBYTE(v37) = 0;
      LODWORD(v36) = 0;
      LODWORD(Size) = 8 * v33 + 16;
      v18 = IopXxxControlFile(
              *(void **)((v34 << 6) + a1[2]),
              0LL,
              0LL,
              0LL,
              (unsigned __int64)v41,
              0x90120u,
              (char *)Src,
              Size,
              0LL,
              v36,
              v37);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, *(unsigned int *)(Src + 4));
      if ( v18 < 0 )
        goto LABEL_15;
      if ( v18 == 259 )
        KeBugCheckEx(0x191u, 0x15F2uLL, 0LL, 0LL, 0LL);
      v8 = v39;
    }
    while ( (unsigned int)v10 < *(_DWORD *)(v39 + 8 * v5 + 12) >> 1 );
    if ( v6 )
    {
      v22 = 0LL;
      v23 = 0;
      ++*(_DWORD *)(*a1 + 88LL);
      if ( *(_DWORD *)(v6 + 16) )
      {
        while ( 1 )
        {
          *(_DWORD *)(Src + 4) = 0;
          if ( v23 >= *(_DWORD *)(v6 + 16) )
            break;
          v24 = *((_DWORD *)a1 + 8);
          v25 = 0;
          do
          {
            v26 = *(_QWORD *)(v6 + 24);
            v27 = v22;
            v28 = *(_QWORD *)(v26 + 16LL * v23);
            v29 = v28 + *(unsigned int *)(v26 + 16LL * v23 + 8);
            if ( v28 >= v22 )
              v27 = *(_QWORD *)(v26 + 16LL * v23);
            while ( v27 < v29 )
            {
              v30 = v27 >> 10;
              v27 += 4096LL;
              *(_QWORD *)(Src + 8LL * *(unsigned int *)(Src + 4) + 16) = v30;
              v25 = *(_DWORD *)(Src + 4) + 1;
              *(_DWORD *)(Src + 4) = v25;
              v24 = *((_DWORD *)a1 + 8);
              if ( v25 >= v24 )
              {
                v22 = v27;
                break;
              }
            }
            if ( v25 >= v24 )
              break;
            ++v23;
          }
          while ( v23 < *(_DWORD *)(v6 + 16) );
          v47 = v22;
          if ( !v25 )
            break;
          if ( PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v44)) < 0x80 )
          {
            goto LABEL_52;
          }
          LOBYTE(v37) = 0;
          LODWORD(v36) = 0;
          LODWORD(Size) = 8 * v31 + 16;
          v18 = IopXxxControlFile(
                  *(void **)((v38 << 6) + a1[2]),
                  0LL,
                  0LL,
                  0LL,
                  (unsigned __int64)v41,
                  0x90120u,
                  (char *)Src,
                  Size,
                  0LL,
                  v36,
                  v37);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, *(unsigned int *)(Src + 4));
          if ( v18 < 0 )
            goto LABEL_15;
          if ( v18 == 259 )
            KeBugCheckEx(0x191u, 0x1657uLL, 0LL, 0LL, 0LL);
          if ( v23 >= *(_DWORD *)(v6 + 16) )
            break;
          v22 = v47;
        }
      }
    }
  }
  v16 = 0LL;
  if ( (*(_DWORD *)(v39 + 8 * v5 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v17 = (_DWORD *)(*(_QWORD *)(v39 + 8 * v5 + 16) + 48 * v16);
      if ( (*v17 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((__int64)a1, (__int64)v17, a2, (__int64)v42, (__int64)v43, &v46);
        v21 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v38 << 6),
                (_DWORD)v17,
                v20,
                (__int64)v43,
                v46);
        v18 = v21;
        if ( v21 < 0 )
        {
          if ( v21 == -1073741248 )
            goto LABEL_15;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < *(_DWORD *)(v39 + 8 * v5 + 12) >> 1 );
  }
  v18 = 0;
LABEL_15:
  result = (unsigned int)v18;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                            - v40;
  return result;
}
