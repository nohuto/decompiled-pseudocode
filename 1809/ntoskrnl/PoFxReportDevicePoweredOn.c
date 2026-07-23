/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x140170D80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxIdleComponent @ 0x1400FED8C (PopFxIdleComponent.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1401001E8 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401717BC (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x140172084 (PopPepDeviceDState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 */

char __fastcall PoFxReportDevicePoweredOn(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rsi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile LONG *v8; // r15
  KIRQL v9; // al
  __int64 v10; // rbp
  int v11; // edi
  KIRQL v12; // r14
  int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned int i; // esi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v19; // eax
  signed __int32 v20; // ett

  v5 = *(_QWORD *)(BugCheckParameter2 + 48);
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v6 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v6, v6);
    }
    while ( v7 != v6 );
    LOBYTE(a4) = v6 & 1;
    LOBYTE(a3) = 1;
    PopPepDeviceDState(*(_QWORD *)(BugCheckParameter2 + 56), 1LL, a3, a4);
    PopDiagTraceFxDevicePowerState(v5, 1LL);
  }
  v8 = (volatile LONG *)(v5 + 88);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v10 = 0LL;
  v11 = _InterlockedExchange((volatile __int32 *)(v5 + 124), 0);
  v12 = v9;
  if ( v11 > 0 )
  {
    v13 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v11 > v13 )
      PopFxBugCheck(0x602uLL, v5, v11, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFF7FE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v13 - v11;
    v14 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( (*(_DWORD *)(v14 + 296) & 4) != 0 )
    {
      v15 = *(_DWORD *)(BugCheckParameter2 + 812);
      v16 = (unsigned int)v11;
      do
      {
        for ( i = 0; i < v15; ++i )
        {
          PopFxIdleComponent(BugCheckParameter2, i, 2);
          v15 = *(_DWORD *)(BugCheckParameter2 + 812);
        }
        --v16;
      }
      while ( v16 );
      v14 = *(_QWORD *)(BugCheckParameter2 + 48);
    }
    v10 = *(_QWORD *)(v14 + 264);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v12);
  if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg
    || (v19 = *(_DWORD *)(BugCheckParameter2 + 808), (v19 & 0x80u) != 0) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v19 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v19, v19);
    }
    while ( v20 != v19 );
    if ( (v19 & 0x400) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFBFF);
      LOBYTE(v19) = PopSystemIrpCompletion(0LL, v10, *(_QWORD *)(v10 + 72LL * *(char *)(v10 + 66) + 200));
    }
  }
  if ( !v11 )
    LOBYTE(v19) = PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
  return v19;
}
