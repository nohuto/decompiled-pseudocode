/*
 * XREFs of VfAvlInitializeTreeEx @ 0x140960554
 * Callers:
 *     VfAvlInitializeTree @ 0x1403292B8 (VfAvlInitializeTree.c)
 *     VfInitBootDriversLoaded @ 0x1409EF070 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VfAvlInitializeTreeEx(
        _QWORD *TableContext,
        __int64 a2,
        int a3,
        char a4,
        PRTL_AVL_FREE_ROUTINE FreeRoutine)
{
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rcx
  PVOID PoolWithTag; // rax
  unsigned __int64 v11; // rbp
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *v12)(_RTL_AVL_TABLE *, PVOID, PVOID); // rsi
  __int64 v13; // rdi
  unsigned int MaximumProcessorCount; // eax

  TableContext[1] = 0LL;
  *TableContext = a2;
  *((_BYTE *)TableContext + 28) = a4;
  if ( a3 )
  {
    v7 = 0;
  }
  else
  {
    if ( a4 )
      v7 = 0;
    else
      v7 = ViAvlInitialized;
    a3 = a4 != 0 ? 24 : 16;
  }
  if ( v7 )
    v8 = 1;
  else
    v8 = a3 + 32;
  *((_DWORD *)TableContext + 8) = v8;
  if ( a2 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    v9 = 64LL;
    if ( MaximumProcessorCount >= 0x40 || (v9 = 32LL, MaximumProcessorCount >= 0x20) )
    {
      *((_DWORD *)TableContext + 6) = v9;
    }
    else
    {
      *((_DWORD *)TableContext + 6) = 16;
      v9 = 16LL;
    }
  }
  else
  {
    *((_DWORD *)TableContext + 6) = 1;
    v9 = 1LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 192 * v9, 0x54416656u);
  TableContext[2] = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v11 = 0LL;
  if ( *((_DWORD *)TableContext + 6) )
  {
    v12 = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))ViAvlCompareNodeUseSessionId;
    if ( !a4 )
      v12 = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))ViAvlCompareNode;
    v13 = 0LL;
    do
    {
      *(_QWORD *)(TableContext[2] + v13 + 104) = 0LL;
      *(_DWORD *)(TableContext[2] + v13 + 128) = 0;
      *(_QWORD *)(TableContext[2] + v13 + 112) = 0LL;
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(v13 + TableContext[2]),
        v12,
        (PRTL_AVL_ALLOCATE_ROUTINE)ViAvlAllocateNode,
        FreeRoutine,
        TableContext);
      ++v11;
      v13 += 192LL;
    }
    while ( v11 < *((unsigned int *)TableContext + 6) );
  }
  return 0LL;
}
