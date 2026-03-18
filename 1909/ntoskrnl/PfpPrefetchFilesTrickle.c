/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x140647054
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406AADFC (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140006020 (MmQueryMemoryListInformation.c)
 *     PfpReadSupportInitialize @ 0x14009023C (PfpReadSupportInitialize.c)
 *     PfpCheckPrefetchAbort @ 0x1400918DC (PfpCheckPrefetchAbort.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PfpFileBuildReadSupport @ 0x14062B454 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140646AAC (PfpReadSupportCleanup.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140646F24 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x140647038 (PfpGetPageListCount.c)
 *     MmPrefetchPagesEx @ 0x140647408 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // r12d
  __int64 v6; // rcx
  unsigned int v7; // r15d
  int *v8; // r15
  int v9; // eax
  char v10; // bp
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int v13; // r13d
  unsigned int v14; // r10d
  unsigned int v15; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  bool v21; // zf
  __int64 result; // rax
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
  unsigned int i; // [rsp+108h] [rbp+20h]

  memset(v30, 0, 0x38uLL);
  v2 = *a1;
  v3 = 0;
  v31 = 0;
  v4 = 0;
  v33 = 0;
  v5 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  for ( i = *(unsigned __int16 *)(*a1 + 30LL); v4 < *(_DWORD *)(v2 + 8); v33 = ++v4 )
  {
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      continue;
    v6 = *(_QWORD *)(v2 + 32);
    v27 = 5LL * v4;
    v7 = 0;
    v24 = 0;
    v26 = v6;
    if ( (*(_DWORD *)(v6 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      continue;
    do
    {
      v8 = (int *)(*(_QWORD *)(v6 + 8 * v27 + 16) + 48LL * v7);
      v9 = *v8;
      if ( (*v8 & 2) != 0 || !v8[4] )
        goto LABEL_25;
      v10 = 0;
      while ( v10 )
      {
        if ( (v9 & 1) != 0 )
          goto LABEL_9;
LABEL_29:
        LOBYTE(v19) = v9;
LABEL_22:
        ++v10;
        LOBYTE(v20) = v19;
        if ( (unsigned __int8)v10 > 1u )
          goto LABEL_23;
      }
      if ( (v9 & 1) != 0 )
        goto LABEL_29;
LABEL_9:
      PfpReadSupportInitialize((char *)v30);
      if ( (int)PfpFileBuildReadSupport(a1, v8, v4, v10, (__int64)v30) >= 0 )
      {
        v12 = v30[0];
        v25 = v30[0];
        *(_QWORD *)v30[0] = v30[2];
        v13 = 0;
        v23 = *(_DWORD *)(v12 + 8);
        v29 = v12;
        v32 = 0;
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v11, &v28);
        if ( v23 )
        {
          while ( !PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, i)) >= 0x80 )
          {
            if ( v13 + 16 > v14 )
              v15 = v14 - v13;
            else
              v15 = 16;
            *(_DWORD *)(v12 + 8) = v15;
            memmove((void *)(v12 + 16), (const void *)(v25 + 16 + 8LL * v13), 8LL * v15);
            *(_QWORD *)(v12 + 16) |= (8 * (i & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            v16 = MmPrefetchPagesEx(1LL, &v29);
            PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, *(unsigned int *)(v25 + 8));
            v17 = v32;
            if ( v16 >= 0 )
            {
              v12 = v25;
              v18 = *(_DWORD *)(v25 + 8);
              v17 = v18 + v32;
              v13 += v18;
              v32 += v18;
              if ( v13 < v23 )
                continue;
            }
            goto LABEL_17;
          }
          v17 = v32;
          v31 = 1;
        }
        else
        {
          v17 = 0;
        }
LABEL_17:
        v4 = v33;
        if ( v10 )
          *(_DWORD *)(v2 + 100) += v17;
        else
          *(_DWORD *)(v2 + 96) += v17;
      }
      PfpReadSupportCleanup(a1[5], (__int64)v30);
      if ( v31 || PfpCheckPrefetchAbort(a1) )
      {
        v3 = -1073741248;
        goto LABEL_27;
      }
      v9 = *v8;
      v19 = *v8;
      v20 = *v8;
      if ( (*v8 & 8) == 0 )
        goto LABEL_22;
LABEL_23:
      v21 = (v20 & 8) == 0;
      v6 = v26;
      if ( v21 )
        ++*(_DWORD *)(v2 + 84);
LABEL_25:
      v7 = v24 + 1;
      v24 = v7;
    }
    while ( v7 < *(_DWORD *)(v6 + 8 * v27 + 12) >> 1 );
  }
LABEL_27:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v5;
  return result;
}
