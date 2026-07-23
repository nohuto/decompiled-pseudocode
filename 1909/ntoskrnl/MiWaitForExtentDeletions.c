/*
 * XREFs of MiWaitForExtentDeletions @ 0x1402CD278
 * Callers:
 *     MiDeleteExtentPfns @ 0x1402CB520 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForExtentDeletions(PKLOCK_QUEUE_HANDLE LockHandle)
{
  PRTL_BALANCED_NODE v2; // rax
  _KLOCK_ENTRY *v3; // rbx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  ULONG_PTR v7; // [rsp+20h] [rbp-20h] BYREF
  __int16 v8; // [rsp+28h] [rbp-18h] BYREF
  char v9; // [rsp+2Ah] [rbp-16h]
  char v10; // [rsp+2Bh] [rbp-15h]
  int v11; // [rsp+2Ch] [rbp-14h]
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF

  v10 = 0;
  v2 = KeAbPreAcquire((ULONG_PTR)&qword_140464410, 0LL, 0);
  v3 = (_KLOCK_ENTRY *)v2;
  if ( v2 )
    KeAbPreWait((__int64)v2);
  v11 = 0;
  v12[1] = v12;
  v8 = 263;
  v12[0] = v12;
  v7 = qword_140464410;
  qword_140464410 = (ULONG_PTR)&v7;
  v9 = 6;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = KeWaitForGate((__int64)&v8, 18);
  if ( v3 )
  {
    KeAbPreAcquire((ULONG_PTR)&qword_140464410, &v3->TreeNode, 0);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140464410, v3);
  }
  return result;
}
