/*
 * XREFs of PfpPrefetchPrivatePages @ 0x1408655EC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1400DE720 (PfpCheckPrefetchAbort.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406634BC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406635C0 (PfpGetPageListCount.c)
 *     MmPrefetchVirtualMemory @ 0x14066CF68 (MmPrefetchVirtualMemory.c)
 *     PfpSourceBuildVaArray @ 0x140865FE4 (PfpSourceBuildVaArray.c)
 *     PfpSourceGetPrefetchSupport @ 0x1408660C0 (PfpSourceGetPrefetchSupport.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r15
  int v3; // r13d
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r12d
  __int64 v10; // rsi
  void *v11; // rdi
  __int64 v12; // r14
  int PrefetchSupport; // eax
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 result; // rax
  __int64 *v18; // r14
  unsigned int v19; // r12d
  unsigned int v20; // r15d
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  char *v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+48h] [rbp-30h] BYREF
  PVOID P; // [rsp+50h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-18h]
  int v31; // [rsp+C8h] [rbp+50h]
  int v32; // [rsp+D0h] [rbp+58h]
  unsigned int v33; // [rsp+D8h] [rbp+60h]

  v1 = *a1;
  v26 = 0LL;
  v2 = a1;
  P = 0LL;
  v3 = 0;
  v33 = *(unsigned __int16 *)(*a1 + 30);
  v4 = *(_DWORD *)(*a1 + 28);
  v25 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  v6 = (8 * (v33 & 7)) | v4 & 7;
  v7 = v6 | 0x100;
  if ( (v5 & 0x10) != 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v5 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x800;
  if ( (v5 & 0x20) == 0 )
    v9 = v8;
  v10 = 0LL;
  v32 = v9;
  v31 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_19:
    v16 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v11 = 0LL;
    v28 = 0LL;
    BugCheckParameter1 = 0LL;
    if ( PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
      goto LABEL_15;
    }
    v12 = *(_QWORD *)(v1 + 56) + 40 * v10;
    if ( (int)PfpSourceBuildVaArray(v12, &v26) >= 0 )
    {
      PrefetchSupport = PfpSourceGetPrefetchSupport(v12, &v28);
      v11 = (void *)BugCheckParameter1;
      if ( PrefetchSupport >= 0 )
      {
        if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
        {
          v15 = v26;
          *(_DWORD *)(v1 + 104) += v26;
          MmPrefetchVirtualMemory((ULONG_PTR)v11, v15, (__int64)P, v9);
LABEL_14:
          ++*(_DWORD *)(v1 + 92);
          goto LABEL_15;
        }
        v18 = v2 + 6;
        v19 = v26;
        v24 = (char *)P;
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)v2 + 3, 0xB0u, v14, &v23);
        if ( !v19 )
          goto LABEL_14;
        while ( !PfpCheckPrefetchAbort(v2)
             && (unsigned __int64)(*v18 + v18[1] + PfpGetPageListCount((__int64)(v18 + 5), 0, v33)) >= 0x80 )
        {
          v20 = v19;
          if ( v19 > 0x10 )
            v20 = 16;
          if ( MmPrefetchVirtualMemory((ULONG_PTR)v11, v20, (__int64)v24, v32) >= 0 )
            *(_DWORD *)(v1 + 104) += v20;
          PfpUpdateRepurposedByPrefetch(v18, v20, v21, v22);
          v24 += 16 * v20;
          v19 -= v20;
          v2 = a1;
          if ( !v19 )
          {
            LODWORD(v10) = v31;
            goto LABEL_14;
          }
        }
        LODWORD(v10) = v31;
        v3 = 1;
      }
    }
LABEL_15:
    if ( v11 )
      NtClose(v11);
    if ( v3 )
      break;
    v9 = v32;
    v10 = (unsigned int)(v10 + 1);
    v31 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_19;
  }
  v16 = -1073741248;
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  result = v16;
  *(_DWORD *)(*v2 + 120) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v25;
  return result;
}
