/*
 * XREFs of MiReferencePfBackedSection @ 0x1401304F0
 * Callers:
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x1401577DC (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 v1; // rbp
  __int64 *v2; // r14
  _QWORD *v3; // r12
  KIRQL v5; // al
  _QWORD *v6; // rcx
  KIRQL v7; // di
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 *v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx
  __int64 v18; // [rsp+58h] [rbp+10h]

  v1 = v18;
  v2 = 0LL;
  v3 = 0LL;
LABEL_2:
  v5 = ExAcquireSpinLockShared(&dword_140439E38);
  v6 = (_QWORD *)qword_140439E30;
  v7 = v5;
  while ( 1 )
  {
    v10 = 0LL;
    if ( !v6 )
      break;
    v8 = v6[3] & 7LL;
    if ( v8 > 4 )
    {
      v9 = 0LL;
    }
    else if ( (_DWORD)v8 )
    {
      switch ( (_DWORD)v8 )
      {
        case 1:
          v9 = *(v6 - 6);
          v1 = *((unsigned int *)v6 - 3);
          break;
        case 2:
          v11 = *(v6 - 7) + 128LL;
          v1 = 0LL;
          v9 = *(_QWORD *)(*(v6 - 7) + 136LL);
          do
          {
            v12 = *(unsigned int *)(v11 + 44);
            v11 = *(_QWORD *)(v11 + 16);
            v1 += v12;
          }
          while ( v11 );
          break;
        case 3:
          v9 = v6[6];
          v1 = v6[4];
          break;
        default:
          v9 = v6[4];
          v1 = v6[5];
          break;
      }
    }
    else
    {
      v9 = *(v6 - 13);
      v1 = *((unsigned int *)v6 - 17);
    }
    if ( a1 < v9 )
    {
      v6 = (_QWORD *)*v6;
    }
    else
    {
      if ( a1 < v9 + 8 * v1 )
      {
        v10 = 0LL;
        if ( v8 != 1 )
          break;
        v13 = v6 - 7;
        v10 = *(v6 - 7);
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v10 + 72)) )
        {
          if ( (*(_DWORD *)(v10 + 56) & 3) == 0 )
          {
            v14 = MiBuildWakeList(v10, 4);
            ++*(_DWORD *)(v10 + 76);
            v2 = v14;
            MiRemoveUnusedSegment(v10);
            v3 = v13;
          }
          break;
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140439E38);
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140439E38);
  if ( v10 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
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
