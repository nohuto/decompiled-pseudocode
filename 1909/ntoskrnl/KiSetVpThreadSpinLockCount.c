/*
 * XREFs of KiSetVpThreadSpinLockCount @ 0x14003BAA0
 * Callers:
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KiAbApplyWakeupBoost @ 0x1400C678C (KiAbApplyWakeupBoost.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140122E1C (KiAbThreadUnboostCpuPriority.c)
 *     KeUpdateThreadCpuSets @ 0x140196CA4 (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1401CB4E0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiSetVpThreadSpinLockCount(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 25016);
  if ( v2 && *(_BYTE *)(a1 + 32) <= 1u )
  {
    v4 = *(_DWORD *)(v2 + 20);
    v5 = v4 - 1;
    v6 = v4 + 1;
    if ( !a2 )
      v6 = v5;
    *(_DWORD *)(v2 + 20) = v6;
    if ( !v6 )
      KiRemoveSystemWorkPriorityKick(a1);
  }
}
