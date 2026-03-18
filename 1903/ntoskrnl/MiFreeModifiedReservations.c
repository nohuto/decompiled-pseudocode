/*
 * XREFs of MiFreeModifiedReservations @ 0x1402CE4C0
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x14015B09C (MiCheckFreeModifiedReservations.c)
 *     MiPageFileNoFreeSpace @ 0x1402CE9A4 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int16 v2; // r8
  __int64 result; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int8 v10; // al
  unsigned __int8 v11; // bp
  struct _KPRCB *v12; // rcx
  unsigned __int64 v13; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_WORD *)(a1 + 204);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v2 & 0x40) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 256);
    v6 = 0LL;
    v7 = a2 == 0 ? 0x10000 : 0;
    v8 = 5LL * (v2 & 0xF);
    while ( 1 )
    {
      v15 = *(_QWORD *)(v5 + 8 * v8 + 2768);
      result = 0xFFFFFFFFFLL;
      if ( v15 == 0xFFFFFFFFFLL )
        break;
      v9 = 48 * v15 - 0x58000000000LL;
      v10 = MiLockPageInline(v9);
      LockHandle.LockQueue.Next = 0LL;
      v11 = v10;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 8480);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 8480));
      if ( v15 == *(_QWORD *)(v5 + 8 * v8 + 2768) )
      {
        MiUnlinkPageFromList(48 * v15 - 0x58000000000LL, 1);
        v13 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 16) = v13 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(v9, 0x88u);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo(v5, v13, 1);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        result = v11;
        __writecr8(v11);
        ++v6;
        if ( !a2 && v6 >= v7 )
          return result;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          v12 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
        __writecr8(v11);
      }
    }
  }
  return result;
}
