/*
 * XREFs of ViTargetIncrementCounter @ 0x14097467C
 * Callers:
 *     VfCheckImageCompliance @ 0x1409656C0 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409659BC (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140965A64 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140970B70 (VerifierKeAcquireQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool @ 0x140972260 (VerifierExAllocatePool.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140977A54 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140977B2C (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140977C14 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140977D14 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140977DD0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140978360 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140978B10 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140978B90 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140978C20 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140978EE0 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140978F70 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140979000 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140979310 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409797E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViFaultsInjectionNotification @ 0x14097A540 (ViFaultsInjectionNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x140966648 (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x14097493C (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int updated; // eax
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  v10[0] = 0LL;
  v10[1] = 0LL;
  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    updated = VfDriverIsKernelImageAddress(v4);
    if ( !updated )
    {
      VfAvlInitializeLockContext((__int64)v10, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v10, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      LOBYTE(updated) = VfAvlCleanupLockContext((__int64)v10);
    }
  }
  return updated;
}
