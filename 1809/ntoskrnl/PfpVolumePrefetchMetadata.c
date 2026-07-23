/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x14065E1C4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1400DE720 (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     PfpPrefetchDirectoryStream @ 0x14065E58C (PfpPrefetchDirectoryStream.c)
 *     PfpFileSetupObjectAttributes @ 0x1406603E8 (PfpFileSetupObjectAttributes.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406634BC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406635C0 (PfpGetPageListCount.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 Src; // r14
  __int64 v6; // r9
  __int64 v7; // r13
  int v8; // ecx
  __int16 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  _DWORD *v17; // rbx
  int v18; // ebx
  __int64 result; // rax
  int v20; // r9d
  int v21; // eax
  unsigned __int64 v22; // rbx
  unsigned int v23; // r15d
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  __int64 v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rcx
  int v31; // r11d
  int v32; // r10d
  __int64 v33; // r11
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-D0h]
  __int64 v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  int v38; // [rsp+68h] [rbp-A0h]
  struct _IO_STATUS_BLOCK v39; // [rsp+70h] [rbp-98h] BYREF
  char v40; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v41[120]; // [rsp+90h] [rbp-78h] BYREF
  int v43; // [rsp+120h] [rbp+18h] BYREF
  __int64 v44; // [rsp+128h] [rbp+20h] BYREF

  v37 = a2;
  v3 = 0LL;
  v4 = 5LL * a2;
  Src = a1[3];
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = *(_QWORD *)(*a1 + 32LL);
  v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v9 = *(_WORD *)(*a1 + 30LL);
  *(_DWORD *)Src = 3;
  v38 = v8;
  *(_QWORD *)(Src + 8) = (8 * (v9 & 7u)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v6, &v44);
  v10 = 0LL;
  if ( (*(_DWORD *)(v7 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      *(_DWORD *)(Src + 4) = 0;
      if ( (unsigned int)v10 >= *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 )
        break;
      do
      {
        v11 = *(unsigned int *)(Src + 4);
        v12 = 3 * v10;
        v10 = (unsigned int)(v10 + 1);
        v13 = *(_QWORD *)(v7 + 8 * v4 + 16) + 16 * v12;
        v14 = *(_QWORD *)(v13 + 8);
        v15 = v13;
        if ( (*(_DWORD *)v13 & 0x10) == 0 )
          v15 = v3;
        v3 = v15;
        if ( v14 )
        {
          *(_QWORD *)(Src + 8 * v11 + 16) = v14;
          LODWORD(v11) = *(_DWORD *)(Src + 4) + 1;
          *(_DWORD *)(Src + 4) = v11;
          if ( (unsigned int)v11 >= *((_DWORD *)a1 + 8) )
            break;
        }
      }
      while ( (unsigned int)v10 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
      if ( !(_DWORD)v11 )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
      {
LABEL_52:
        v18 = -1073741248;
        goto LABEL_15;
      }
      LOBYTE(v36) = 0;
      LODWORD(v35) = 0;
      LODWORD(NumberOfBytes) = 8 * v32 + 16;
      v18 = IopXxxControlFile(
              *(HANDLE *)((v33 << 6) + a1[2]),
              0LL,
              0LL,
              0LL,
              &v39,
              590112,
              (char *)Src,
              NumberOfBytes,
              0LL,
              v35,
              v36);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(Src + 4));
      if ( v18 < 0 )
        goto LABEL_15;
      if ( v18 == 259 )
        KeBugCheckEx(0x191u, 0x15F3uLL, 0LL, 0LL, 0LL);
    }
    while ( (unsigned int)v10 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
    if ( v3 )
    {
      v22 = 0LL;
      v23 = 0;
      ++*(_DWORD *)(*a1 + 88LL);
      if ( *(_DWORD *)(v3 + 16) )
      {
        while ( 1 )
        {
          *(_DWORD *)(Src + 4) = 0;
          if ( v23 >= *(_DWORD *)(v3 + 16) )
            break;
          v24 = *((_DWORD *)a1 + 8);
          v25 = 0;
          do
          {
            v26 = *(_QWORD *)(v3 + 24);
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
          while ( v23 < *(_DWORD *)(v3 + 16) );
          v44 = v22;
          if ( !v25 )
            break;
          if ( PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
          {
            goto LABEL_52;
          }
          LOBYTE(v36) = 0;
          LODWORD(v35) = 0;
          LODWORD(NumberOfBytes) = 8 * v31 + 16;
          v18 = IopXxxControlFile(
                  *(HANDLE *)((v37 << 6) + a1[2]),
                  0LL,
                  0LL,
                  0LL,
                  &v39,
                  590112,
                  (char *)Src,
                  NumberOfBytes,
                  0LL,
                  v35,
                  v36);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(Src + 4));
          if ( v18 < 0 )
            goto LABEL_15;
          if ( v18 == 259 )
            KeBugCheckEx(0x191u, 0x1658uLL, 0LL, 0LL, 0LL);
          if ( v23 >= *(_DWORD *)(v3 + 16) )
            break;
          v22 = v44;
        }
      }
    }
  }
  v16 = 0LL;
  if ( (*(_DWORD *)(v7 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v17 = (_DWORD *)(*(_QWORD *)(v7 + 8 * v4 + 16) + 48 * v16);
      if ( (*v17 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((_DWORD)a1, (_DWORD)v17, a2, (unsigned int)&v40, (__int64)v41, (__int64)&v43);
        v21 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v37 << 6),
                (_DWORD)v17,
                v20,
                (__int64)v41,
                v43);
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
    while ( (unsigned int)v16 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
  }
  v18 = 0;
LABEL_15:
  result = (unsigned int)v18;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                            - v38;
  return result;
}
