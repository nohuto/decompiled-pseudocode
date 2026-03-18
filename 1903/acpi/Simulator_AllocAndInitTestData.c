/*
 * XREFs of Simulator_AllocAndInitTestData @ 0x1C0063368
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C0063834 (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0063A8C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0063B84 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C0063C54 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C0063CF8 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C0558 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

PVOID Simulator_AllocAndInitTestData()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x44415341u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x50uLL);
  return v1;
}
