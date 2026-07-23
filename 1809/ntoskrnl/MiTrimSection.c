/*
 * XREFs of MiTrimSection @ 0x1400EAC24
 * Callers:
 *     MmTrimSection @ 0x1400E9770 (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 * Callees:
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     MiReferenceSubsection @ 0x1400770D4 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsection @ 0x1400E7798 (MiDecrementSubsection.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x1400EABD4 (MiUnlockControlAreaFileObjectShared.c)
 *     MiViewMayContainPage @ 0x1400EAE80 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTrimSection(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rcx
  ULONG_PTR v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v10; // r12
  KIRQL v11; // al
  __int64 v12; // rdi
  KIRQL v13; // bp
  __int64 v14; // rax
  int v15; // ebp
  _QWORD *v16; // rdi
  _QWORD *i; // rdi
  _QWORD *v18; // rax
  _QWORD *v20; // r15
  _QWORD *MayContainPage; // rax
  KIRQL v22; // di
  struct _KPRCB *v23; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v25; // rcx
  ULONG_PTR v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  _QWORD *v32; // [rsp+A8h] [rbp+20h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v29 = v4;
  v6 = *(_QWORD *)(v3 + 24);
  v26 = v6;
  v7 = *(_QWORD *)v6;
  if ( (a3 & 1) != 0 && (!*(_QWORD *)(v7 + 64) || (*(_DWORD *)(v7 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v28 = MiStartingOffset((__int64 *)v6, v4, 0xFFFFFFFF);
  v8 = MiStartingOffset(*(__int64 **)(v3 + 32), *(_QWORD *)(v3 + 16), 0xFFFFFFFF);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v27 = v8 + 4096;
  v32 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v7 + 104, 0LL);
  v11 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
  v12 = *(_QWORD *)(v7 + 40);
  v13 = v11;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( v12 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v13);
    if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 && *(_QWORD *)(v7 + 64) )
    {
      v14 = *(_QWORD *)(v3 + 32);
      while ( 1 )
      {
        v15 = 1;
        if ( v6 == *(_QWORD *)(v3 + 24) || v6 == v14 )
          goto LABEL_8;
        v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
        if ( *(_DWORD *)(v6 + 104) && (int)MiReferenceSubsection(v6) > 1 )
          v15 = 2;
        else
          v15 = 0;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
        {
          v25 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v25);
        }
        __writecr8(v22);
        if ( v15 )
        {
LABEL_8:
          v16 = *(_QWORD **)(v6 + 80);
          if ( v16 != (_QWORD *)(v6 + 80) )
          {
            v20 = v32;
            do
            {
              MayContainPage = (_QWORD *)MiViewMayContainPage(v7, a3, (_DWORD)v16, v28, v27);
              if ( MayContainPage )
              {
                *MayContainPage = v20;
                v20 = MayContainPage;
              }
              v16 = (_QWORD *)*v16;
            }
            while ( v16 != (_QWORD *)(v6 + 80) );
            v6 = v26;
            v32 = v20;
            v3 = a1;
          }
          if ( v15 == 2 )
            MiDecrementSubsection((__int64 *)v6);
        }
        v14 = *(_QWORD *)(v3 + 32);
        if ( v6 == v14 )
          break;
        v6 = *(_QWORD *)(v6 + 16);
        v26 = v6;
      }
      v10 = v32;
    }
    for ( i = *(_QWORD **)(v7 + 8); i != (_QWORD *)(v7 + 8); i = (_QWORD *)*i )
    {
      v18 = (_QWORD *)MiViewMayContainPage(v7, a3, (_DWORD)i, v28, v27);
      if ( v18 )
      {
        *v18 = v10;
        v10 = v18;
      }
    }
    MiUnlockControlAreaFileObjectShared(v7);
    return MiTrimSharedPageFromViews((_DWORD)v10, a2, a3, v7, v29);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23);
    }
    __writecr8(v13);
    MiUnlockControlAreaFileObjectShared(v7);
    return 0LL;
  }
}
