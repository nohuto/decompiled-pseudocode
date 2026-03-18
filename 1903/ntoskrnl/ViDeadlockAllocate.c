/*
 * XREFs of ViDeadlockAllocate @ 0x14097BE90
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x14097B080 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x14097B508 (VfDeadlockInitializeResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 */

PVOID __fastcall ViDeadlockAllocate(int a1)
{
  int v1; // ecx
  int v2; // ecx
  PVOID result; // rax
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return 0LL;
      v4 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = &ViDeadlockResourceLookaside;
  }
  result = ExAllocateFromNPagedLookasideList(v4);
  if ( !result )
  {
    ViDeadlockState |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)ViDeadlockGlobals + 8196);
  }
  return result;
}
