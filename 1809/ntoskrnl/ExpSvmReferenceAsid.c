/*
 * XREFs of ExpSvmReferenceAsid @ 0x14031E770
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSvmReferenceAsid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  ULONG_PTR *v3; // rdx
  ULONG_PTR v4; // rsi
  __int64 v5; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)BugCheckParameter1;
  KeAcquireInStackQueuedSpinLock(&qword_140407F38, &LockHandle);
  v2 = 0LL;
  v3 = (ULONG_PTR *)((char *)qword_140407F30 + 16 * (unsigned int)v1);
  if ( (unsigned int)v1 >= (unsigned int)dword_140407F24 )
  {
    BugCheckParameter4 = 0LL;
LABEL_12:
    if ( (unsigned int)v1 < (unsigned int)dword_140407F24 )
      v2 = *v3;
    KeBugCheckEx(0x158u, v1, (unsigned int)dword_140407F24, v2, BugCheckParameter4);
  }
  v4 = *v3;
  if ( !*v3 || (v5 = v3[1], v5 < 0) )
  {
    BugCheckParameter4 = v3[1];
    goto LABEL_12;
  }
  v3[1] = v5 + 1;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return *(_QWORD *)(v4 + 1752);
}
