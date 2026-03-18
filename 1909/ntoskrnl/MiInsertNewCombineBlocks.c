/*
 * XREFs of MiInsertNewCombineBlocks @ 0x1401430E0
 * Callers:
 *     MiAllocateCombineProto @ 0x14013EFD0 (MiAllocateCombineProto.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiUnlockPagedAddress @ 0x1402C4898 (MiUnlockPagedAddress.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int i; // edi
  int v6; // edi
  _QWORD *v7; // rcx
  _QWORD *j; // rax
  _QWORD *v9; // rdx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < 0x1EFuLL; v2 = i * 8 )
  {
    if ( !(unsigned int)MiLockPagedAddress((ULONG_PTR)a2 + v2) )
    {
      while ( i * 8 )
      {
        i -= 512;
        MiUnlockPagedAddress(&a2[i]);
      }
      return 0LL;
    }
    i += 512;
  }
  memset(a2, 0, 0xF78uLL);
  v6 = 54;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v7 = (_QWORD *)(a1 + 72);
  for ( j = *(_QWORD **)(a1 + 72); ; j = v9 )
  {
    v9 = a2;
    if ( (_QWORD *)j[1] != v7 )
      __fastfail(3u);
    *a2 = j;
    a2[1] = v7;
    j[1] = a2;
    *v7 = a2;
    a2 += 9;
    if ( !--v6 )
      break;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
