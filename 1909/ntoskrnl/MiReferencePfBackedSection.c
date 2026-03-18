/*
 * XREFs of MiReferencePfBackedSection @ 0x14012F47C
 * Callers:
 *     MiTrimSharedPage @ 0x14012F104 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x14016340C (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x14007463C (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = ExAcquireSpinLockShared(&dword_140464440);
  v6 = (_QWORD *)qword_140464438;
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
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140464440);
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140464440);
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
