/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x1402D26AC
 * Callers:
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeLargePages @ 0x1402C57BC (MiFreeLargePages.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402CADA8 (MiReturnCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CC2E0 (MiReturnCrossPartitionCombineCharges.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiReturnCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r12
  __int64 v6; // rsi
  struct _KEVENT *v9; // rbp
  KIRQL v10; // al
  KIRQL v11; // r14
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rdx
  __int64 i; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  LONG result; // eax

  v4 = (volatile LONG *)(a1 + 1280);
  v6 = 32LL * a2;
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  *(_QWORD *)(v6 + a1 + 1832) -= a4;
  v11 = v10;
  v12 = *(_QWORD *)(v6 + a1 + 1832);
  if ( (a3 & 1) != 0 )
    *(_QWORD *)(v6 + a1 + 1864) -= a4;
  if ( !v12 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v13 = 0;
    v14 = (_QWORD *)(a1 + 1832);
    for ( i = 0LL; i < 7; ++i )
    {
      if ( *v14 )
        break;
      ++v13;
      v14 += 4;
    }
    if ( v13 == 7 )
      v9 = *(struct _KEVENT **)(a1 + 2056);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v11;
  __writecr8(v11);
  if ( v9 )
    return KeSetEvent(v9, 1, 0);
  return result;
}
