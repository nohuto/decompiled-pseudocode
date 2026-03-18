/*
 * XREFs of MiReferencePfBackedSection @ 0x14012EB2C
 * Callers:
 *     MiTrimSharedPage @ 0x14012E7B4 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x1401639BC (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14007436C (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400743CC (MiBuildWakeList.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 v1; // rbp
  __int64 *v2; // r14
  _QWORD *v3; // r12
  KIRQL v5; // al
  _QWORD *v6; // rcx
  KIRQL v7; // di
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 *v12; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx
  __int64 v18; // [rsp+58h] [rbp+10h]

  v1 = v18;
  v2 = 0LL;
  v3 = 0LL;
LABEL_2:
  v5 = ExAcquireSpinLockShared(&dword_140464740);
  v6 = (_QWORD *)qword_140464738;
  v7 = v5;
  while ( 1 )
  {
    v8 = 0LL;
    if ( !v6 )
      break;
    v9 = v6[3] & 7LL;
    if ( v9 > 4 )
    {
      v10 = 0LL;
    }
    else if ( (_DWORD)v9 )
    {
      switch ( (_DWORD)v9 )
      {
        case 1:
          v10 = *(v6 - 6);
          v1 = *((unsigned int *)v6 - 3);
          break;
        case 2:
          v14 = *(v6 - 7) + 128LL;
          v1 = 0LL;
          v10 = *(_QWORD *)(*(v6 - 7) + 136LL);
          do
          {
            v15 = *(unsigned int *)(v14 + 44);
            v14 = *(_QWORD *)(v14 + 16);
            v1 += v15;
          }
          while ( v14 );
          break;
        case 3:
          v10 = v6[6];
          v1 = v6[4];
          break;
        default:
          v10 = v6[4];
          v1 = v6[5];
          break;
      }
    }
    else
    {
      v10 = *(v6 - 13);
      v1 = *((unsigned int *)v6 - 17);
    }
    if ( a1 < v10 )
    {
      v6 = (_QWORD *)*v6;
    }
    else
    {
      if ( a1 < v10 + 8 * v1 )
      {
        v8 = 0LL;
        if ( v9 != 1 )
          break;
        v11 = v6 - 7;
        v8 = *(v6 - 7);
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
        {
          if ( (*(_DWORD *)(v8 + 56) & 3) == 0 )
          {
            v12 = MiBuildWakeList(v8, 4);
            ++*(_DWORD *)(v8 + 76);
            v2 = v12;
            MiRemoveUnusedSegment(v8);
            v3 = v11;
          }
          break;
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140464740);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v7);
        goto LABEL_2;
      }
      v6 = (_QWORD *)v6[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140464740);
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(v7);
  if ( v2 )
    MiReleaseControlAreaWaiters(v2);
  return v3;
}
