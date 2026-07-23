/*
 * XREFs of MiFreeModifiedReservations @ 0x1402B8358
 * Callers:
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x1402B8800 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int16 v2; // r8
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int8 v10; // bp
  __int64 v11; // r8
  struct _KPRCB *v12; // rcx
  unsigned __int64 v13; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // rbx
  volatile signed __int64 *v16[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_WORD *)(a1 + 204);
  if ( (v2 & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    v5 = 0LL;
    v6 = a2 == 0 ? 0x10000 : 0;
    v7 = 5LL * (v2 & 0xF);
    while ( 1 )
    {
      v15 = *(_QWORD *)(v4 + 8 * v7 + 2768);
      if ( v15 == 0xFFFFFFFFFLL )
        break;
      v8 = 48 * v15 - 0x58000000000LL;
      v9 = MiLockPageInline(v8);
      v16[0] = 0LL;
      v10 = v9;
      v16[1] = (volatile signed __int64 *)(v4 + 7712);
      KxAcquireQueuedSpinLock((__int64)v16, (volatile __int64 *)(v4 + 7712), v11);
      if ( v15 == *(_QWORD *)(v4 + 8 * v7 + 2768) )
      {
        MiUnlinkPageFromList(48 * v15 - 0x58000000000LL, 1);
        v13 = *(_QWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 16) = v13 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(v8, 136);
        KxReleaseQueuedSpinLock(v16);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo((struct _KEVENT *)v4, v13, 1);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v10);
        ++v5;
        if ( !a2 && v5 >= v6 )
          return;
      }
      else
      {
        KxReleaseQueuedSpinLock(v16);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          v12 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
        __writecr8(v10);
      }
    }
  }
}
