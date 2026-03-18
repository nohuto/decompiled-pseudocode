/*
 * XREFs of MiObtainPagefileHashes @ 0x14016574C
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14016524C (MiValidatePagefilePageHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiObtainPagefileHashes(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v8 = *(_QWORD *)(a1 + 216) + 4 * v4;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      if ( (*(_BYTE *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
        v10 = *(_DWORD *)v8;
      else
        v10 = 0;
      *a4 = v10;
      v8 += 4LL;
      ++a4;
      --v9;
    }
    while ( v9 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
