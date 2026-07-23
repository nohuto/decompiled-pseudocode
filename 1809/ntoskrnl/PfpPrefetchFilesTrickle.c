/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x140663144
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1400DE720 (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x1400DF388 (PfpReadSupportInitialize.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PfpFileBuildReadSupport @ 0x140660480 (PfpFileBuildReadSupport.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406634BC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406635C0 (PfpGetPageListCount.c)
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 *     PfpReadSupportCleanup @ 0x140663BCC (PfpReadSupportCleanup.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v5; // r12d
  __int64 v6; // rcx
  unsigned int v7; // r15d
  int *v8; // r15
  int v9; // eax
  char v10; // bp
  int v11; // edx
  int v12; // ecx
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r13d
  unsigned int v18; // r10d
  unsigned int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // [rsp+30h] [rbp-B8h]
  unsigned int v24; // [rsp+34h] [rbp-B4h]
  __int64 v25; // [rsp+38h] [rbp-B0h]
  __int64 v26; // [rsp+40h] [rbp-A8h]
  __int64 v27; // [rsp+48h] [rbp-A0h]
  __int64 v28; // [rsp+50h] [rbp-98h] BYREF
  __int64 v29; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v30[17]; // [rsp+60h] [rbp-88h] BYREF
  char v31; // [rsp+F0h] [rbp+8h]
  int v32; // [rsp+F8h] [rbp+10h]
  unsigned int v33; // [rsp+100h] [rbp+18h]
  __int16 v34; // [rsp+108h] [rbp+20h]

  v1 = *a1;
  v2 = 0;
  v31 = 0;
  v3 = 0;
  v33 = 0;
  v5 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v34 = *(_WORD *)(*a1 + 30LL);
  while ( v3 < *(_DWORD *)(v1 + 8) )
  {
    if ( (*(_QWORD *)(((unsigned __int64)v3 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      goto LABEL_14;
    v6 = *(_QWORD *)(v1 + 32);
    v27 = 5LL * v3;
    v7 = 0;
    v24 = 0;
    v26 = v6;
    if ( (*(_DWORD *)(v6 + 40LL * v3 + 12) & 0xFFFFFFFE) == 0 )
      goto LABEL_14;
    do
    {
      v8 = (int *)(*(_QWORD *)(v6 + 8 * v27 + 16) + 48LL * v7);
      v9 = *v8;
      if ( (*v8 & 2) != 0 || !v8[4] )
        goto LABEL_13;
      v10 = 0;
      while ( !v10 )
      {
        if ( (v9 & 1) == 0 )
          goto LABEL_17;
LABEL_9:
        LOBYTE(v11) = v9;
LABEL_10:
        ++v10;
        LOBYTE(v12) = v11;
        if ( (unsigned __int8)v10 > 1u )
          goto LABEL_11;
      }
      if ( (v9 & 1) == 0 )
        goto LABEL_9;
LABEL_17:
      PfpReadSupportInitialize((char *)v30);
      if ( (int)PfpFileBuildReadSupport(a1, v8, v3, v10, (__int64)v30) >= 0 )
      {
        v16 = v30[0];
        v25 = v30[0];
        v17 = 0;
        v29 = v30[0];
        *(_QWORD *)v30[0] = v30[2];
        v23 = *(_DWORD *)(v16 + 8);
        v32 = 0;
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v15, &v28);
        if ( v23 )
        {
          while ( !PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) >= 0x80 )
          {
            if ( v17 + 16 > v18 )
              v19 = v18 - v17;
            else
              v19 = 16;
            *(_DWORD *)(v25 + 8) = v19;
            memmove((void *)(v25 + 16), (const void *)(v25 + 16 + 8LL * v17), 8LL * v19);
            *(_QWORD *)(v25 + 16) |= (8 * (v34 & 7u)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            v20 = MmPrefetchPagesEx(1LL, &v29);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v25 + 8));
            v21 = v32;
            if ( v20 >= 0 )
            {
              v22 = *(_DWORD *)(v25 + 8);
              v21 = v22 + v32;
              v17 += v22;
              v32 += v22;
              if ( v17 < v23 )
                continue;
            }
            v3 = v33;
            goto LABEL_26;
          }
          v3 = v33;
          v21 = v32;
          v31 = 1;
        }
        else
        {
          v21 = 0;
        }
LABEL_26:
        if ( v10 )
          *(_DWORD *)(v1 + 100) += v21;
        else
          *(_DWORD *)(v1 + 96) += v21;
      }
      PfpReadSupportCleanup(a1[5], v30);
      if ( v31 || PfpCheckPrefetchAbort(a1) )
      {
        v2 = -1073741248;
        goto LABEL_15;
      }
      v9 = *v8;
      v11 = *v8;
      v12 = *v8;
      if ( (*v8 & 8) == 0 )
        goto LABEL_10;
LABEL_11:
      v13 = (v12 & 8) == 0;
      v6 = v26;
      if ( v13 )
        ++*(_DWORD *)(v1 + 84);
LABEL_13:
      v7 = v24 + 1;
      v24 = v7;
    }
    while ( v7 < *(_DWORD *)(v6 + 8 * v27 + 12) >> 1 );
LABEL_14:
    v33 = ++v3;
  }
LABEL_15:
  result = v2;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v5;
  return result;
}
