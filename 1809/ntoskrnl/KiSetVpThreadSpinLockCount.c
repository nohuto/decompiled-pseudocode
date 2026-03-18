/*
 * XREFs of KiSetVpThreadSpinLockCount @ 0x1400BC7C0
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F538 (KiAbThreadUnboostCpuPriority.c)
 *     KeUpdateThreadCpuSets @ 0x14018C82C (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1401C40C0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
