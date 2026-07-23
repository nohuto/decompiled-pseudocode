/*
 * XREFs of ExpSvmServicePageFault @ 0x14031E860
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // r14
  _KPROCESS *v7; // rbp
  __int64 v8; // r8
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  char v11; // di
  unsigned int v12; // ebx
  ULONG_PTR v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v16[48]; // [rsp+38h] [rbp-60h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140407F38, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_140407F30 + 2 * a3);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  v11 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0LL, (__int64)v16);
    v11 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v12 = -1073741819;
  }
  else
  {
    LOBYTE(v8) = 1;
    v13 = a1 & 2 | 0x10LL;
    if ( (a1 & 4) == 0 )
      v13 = a1 & 2;
    v12 = MmAccessFault(v13, a2, v8, 0LL);
  }
  if ( v11 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  return v12;
}
