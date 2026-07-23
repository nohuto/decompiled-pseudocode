/*
 * XREFs of MiApplyCommitDelay @ 0x1402C0240
 * Callers:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiApplyCommitDelay(__int64 a1, char a2, __int64 a3)
{
  volatile LONG *v4; // rsi
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // bp
  int v8; // ecx
  void *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v11; // al
  KIRQL v12; // bl
  struct _KPRCB *v13; // rcx
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+20h] BYREF

  if ( (a2 & 4) == 0
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
    && KeGetCurrentIrql() < 2u
    && a3 != *(_QWORD *)(a1 + 6408)
    && *(_DWORD *)(a1 + 1804) )
  {
    v4 = (volatile LONG *)(a1 + 1280);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
    v6 = *(_DWORD *)(a1 + 1800);
    v7 = v5;
    if ( v6 )
    {
      v8 = v6 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 1808) = 0;
      *(_DWORD *)(a1 + 1812) = 0;
      *(_BYTE *)(a1 + 1810) = 6;
      *(_QWORD *)(a1 + 1824) = a1 + 1816;
      *(_QWORD *)(a1 + 1816) = a1 + 1816;
      v8 = 1;
    }
    *(_DWORD *)(a1 + 1800) = v8;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    v9 = (void *)(a1 + 1808);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v9 = (void *)(a1 + 1808);
    }
    __writecr8(v7);
    Timeout = Mi10Milliseconds;
    KeWaitForSingleObject(v9, Executive, 0, 0, &Timeout);
    v11 = ExAcquireSpinLockExclusive(v4);
    --*(_DWORD *)(a1 + 1800);
    v12 = v11;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
    __writecr8(v12);
  }
}
