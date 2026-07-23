/*
 * XREFs of MiZeroLargePages @ 0x14018526C
 * Callers:
 *     MiZeroLargePageThread @ 0x140185180 (MiZeroLargePageThread.c)
 * Callees:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiGetPagesToZero @ 0x1401853A0 (MiGetPagesToZero.c)
 *     MiOkToZeroNextLargePage @ 0x1401854DC (MiOkToZeroNextLargePage.c)
 *     MiReassessZeroThreads @ 0x140185858 (MiReassessZeroThreads.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiZeroLargePages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  unsigned int v3; // edi
  int v4; // r14d
  unsigned int v6; // r15d
  int v7; // esi
  unsigned __int64 v8; // r12
  int v9; // ecx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = a1;
  v2 = a2[28];
  v3 = 0;
  v4 = 0;
  v6 = 0;
LABEL_2:
  v7 = 0;
  _InterlockedOr(v13, 0);
  v8 = __rdtsc();
  while ( 1 )
  {
    LODWORD(v15) = 0;
    if ( !(unsigned int)MiOkToZeroNextLargePage(a2, &v15) )
      break;
    if ( (_DWORD)v15 == 1 )
    {
      v7 = 0;
      v8 = __rdtsc();
      _InterlockedOr(v13, 0);
    }
    if ( (unsigned int)MiGetPagesToZero(&MiSystemPartition, a2, v3) )
    {
      MiZeroPage(a2, (__int64)&MiSystemPartition);
      ++v6;
      if ( (++v7 & 7) == 0 )
      {
        _InterlockedOr(v13, 0);
        MiReassessZeroThreads(a2, __rdtsc() - v8);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v3 == 1 )
      {
        v4 = 1;
        break;
      }
      ++v3;
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  ++*(_DWORD *)(v2 + 128);
  v9 = *(_DWORD *)(v2 + 124);
  if ( v9 + *(_DWORD *)(v2 + 128) == *(_DWORD *)(v2 + 120) && v9 )
  {
    if ( v4 == 1 )
      *(_DWORD *)(v2 + 88) = 4;
    KeSetEvent((PRKEVENT)(v2 + 64), 0, 0);
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
  return v6;
}
