/*
 * XREFs of MiInsertNewCombineBlocks @ 0x140140944
 * Callers:
 *     MiAllocateCombineProto @ 0x14009B7E0 (MiAllocateCombineProto.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockPagedAddress @ 0x14013A3C8 (MiUnlockPagedAddress.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  int v6; // edi
  _QWORD *v7; // rcx
  _QWORD *i; // rax
  _QWORD *v9; // rdx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4 = 0LL;
  do
  {
    if ( !(unsigned int)MiLockPagedAddress((ULONG_PTR)a2 + v4) )
    {
      while ( v2 * 8 )
      {
        v2 -= 512;
        MiUnlockPagedAddress((unsigned __int64)&a2[v2]);
      }
      return 0LL;
    }
    v2 += 512;
    v4 = v2 * 8;
  }
  while ( v2 < 0x1F8uLL );
  memset(a2, 0, 0xFC0uLL);
  v6 = 62;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v7 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); ; i = v9 )
  {
    v9 = a2;
    if ( (_QWORD *)i[1] != v7 )
      __fastfail(3u);
    *a2 = i;
    a2[1] = v7;
    i[1] = a2;
    *v7 = a2;
    a2 += 8;
    if ( !--v6 )
      break;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return a2;
}
