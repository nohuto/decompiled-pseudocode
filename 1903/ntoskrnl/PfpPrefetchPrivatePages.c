/*
 * XREFs of PfpPrefetchPrivatePages @ 0x1406F707C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406A9098 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140005F90 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1400A214C (PfpCheckPrefetchAbort.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14066D4C4 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14066D5D8 (PfpGetPageListCount.c)
 *     MmPrefetchVirtualMemory @ 0x1406A58F8 (MmPrefetchVirtualMemory.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F72D4 (PfpSourceGetPrefetchSupport.c)
 *     PfpSourceBuildVaArray @ 0x1406F7468 (PfpSourceBuildVaArray.c)
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
  __int64 *v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  __int64 result; // rax
  unsigned int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  PVOID P; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-18h]
  int v29; // [rsp+C8h] [rbp+50h]
  int v30; // [rsp+D0h] [rbp+58h]
  unsigned int v31; // [rsp+D8h] [rbp+60h]

  v1 = *a1;
  v24 = 0LL;
  v2 = a1;
  P = 0LL;
  v3 = 0;
  v31 = *(unsigned __int16 *)(*a1 + 30);
  v4 = *(_DWORD *)(*a1 + 28);
  v23 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  v6 = (8 * (v31 & 7)) | v4 & 7;
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
  v30 = v9;
  v29 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_26:
    v18 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v11 = 0LL;
    v26 = 0LL;
    BugCheckParameter1 = 0LL;
    if ( PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
    }
    else
    {
      v12 = *(_QWORD *)(v1 + 56) + 40 * v10;
      if ( (int)PfpSourceBuildVaArray(v12, &v24) >= 0 )
      {
        PrefetchSupport = PfpSourceGetPrefetchSupport(v12, &v26);
        v11 = (void *)BugCheckParameter1;
        if ( PrefetchSupport >= 0 )
        {
          if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
          {
            v20 = v24;
            *(_DWORD *)(v1 + 104) += v24;
            MmPrefetchVirtualMemory((ULONG_PTR)v11, v20, (__int64)P, v9);
LABEL_21:
            ++*(_DWORD *)(v1 + 92);
            goto LABEL_22;
          }
          v15 = v2 + 6;
          v16 = v24;
          v22 = (char *)P;
          MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)v2 + 3, 0xB0u, v14, &v21);
          if ( !v16 )
            goto LABEL_21;
          while ( !PfpCheckPrefetchAbort(v2)
               && (unsigned __int64)(*v15 + v15[1] + PfpGetPageListCount((__int64)(v15 + 5), 0, v31)) >= 0x80 )
          {
            v17 = v16;
            if ( v16 > 0x10 )
              v17 = 16;
            if ( MmPrefetchVirtualMemory((ULONG_PTR)v11, v17, (__int64)v22, v30) >= 0 )
              *(_DWORD *)(v1 + 104) += v17;
            PfpUpdateRepurposedByPrefetch(v15, v17);
            v22 += 16 * v17;
            v16 -= v17;
            v2 = a1;
            if ( !v16 )
            {
              LODWORD(v10) = v29;
              goto LABEL_21;
            }
          }
          LODWORD(v10) = v29;
          v3 = 1;
        }
      }
    }
LABEL_22:
    if ( v11 )
      NtClose(v11);
    if ( v3 )
      break;
    v9 = v30;
    v10 = (unsigned int)(v10 + 1);
    v29 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_26;
  }
  v18 = -1073741248;
LABEL_27:
  if ( P )
    ExFreePoolWithTag(P, 0);
  result = v18;
  *(_DWORD *)(*v2 + 120) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v23;
  return result;
}
