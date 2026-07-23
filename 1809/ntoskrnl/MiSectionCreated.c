/*
 * XREFs of MiSectionCreated @ 0x140092660
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x14002CA8C (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // r12
  KIRQL v7; // bp
  __int64 *v8; // rsi
  __int64 v9; // rsi
  volatile LONG *v10; // r14
  __int64 v11; // r13
  __int64 *v12; // rsi
  _QWORD *i; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  unsigned __int8 v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v3 = (volatile LONG *)(a2 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x200u;
  v8 = *(__int64 **)(a1 + 40);
  if ( a3 )
  {
    v9 = v8[2];
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v11 = 0LL;
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v9 + 80);
  }
  else
  {
    v9 = *v8;
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v11 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140439C80);
  v12 = *(__int64 **)(a1 + 40);
  if ( a3 )
  {
    v12[2] = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    if ( !MiControlAreaUsingExtents(a2) )
    {
      for ( i = *(_QWORD **)(a2 + 136); ; MmAccessFault(2uLL, (signed __int64)i, 0LL, 0LL) )
      {
        v17 = MiLockProtoPoolPage((unsigned __int64)i, &v20);
        if ( v17 )
          break;
      }
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21, v15, v16);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      MiInitializeTransitionPfn((a3 + 0x58000000000LL) / 48, i);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v17, v20);
      if ( (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
        MiReferenceControlAreaPfn(a2, 0LL, 1u);
    }
  }
  else
  {
    *v12 = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    *(_DWORD *)(a2 + 56) &= ~2u;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(v7);
    KeAbPostRelease((ULONG_PTR)v12);
  }
  return v11;
}
