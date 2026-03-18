/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x14017ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400B0564 (PopFxCompleteDevicePowerRequired.c)
 *     PoFxIdleComponent @ 0x1400B1570 (PoFxIdleComponent.c)
 *     ExReleaseSpinLockExclusive @ 0x14010A2A0 (ExReleaseSpinLockExclusive.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017AE3C (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x14017B274 (PopPepDeviceDState.c)
 *     PopFxGetDeviceDStateReason @ 0x14017B568 (PopFxGetDeviceDStateReason.c)
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402F2F64 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopSystemIrpCompletion @ 0x14059C460 (PopSystemIrpCompletion.c)
 */

char __fastcall PoFxReportDevicePoweredOn(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rsi
  unsigned int DeviceDStateReason; // eax
  __int64 v4; // r8
  volatile LONG *v5; // r14
  KIRQL v6; // al
  __int64 v7; // rbp
  int v8; // edi
  KIRQL v9; // r15
  int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rbp
  unsigned int i; // esi
  signed __int32 v15; // eax
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  signed __int32 v18; // ett

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
  {
    DeviceDStateReason = PopFxGetDeviceDStateReason();
    LOBYTE(v4) = 1;
    PopPepDeviceDState(*(_QWORD *)(BugCheckParameter2 + 56), 1LL, v4, DeviceDStateReason);
    PopDiagTraceFxDevicePowerState(v1, 1LL);
  }
  v5 = (volatile LONG *)(v1 + 88);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
  v7 = 0LL;
  v8 = _InterlockedExchange((volatile __int32 *)(v1 + 124), 0);
  v9 = v6;
  if ( v8 > 0 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v8 > v10 )
      PopFxBugCheck(0x602uLL, v1, v8, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFF7FE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v10 - v8;
    v11 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( (*(_DWORD *)(v11 + 296) & 4) != 0 )
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 820);
      v13 = (unsigned int)v8;
      do
      {
        for ( i = 0; i < v12; ++i )
        {
          PoFxIdleComponent(BugCheckParameter2, i);
          v12 = *(_DWORD *)(BugCheckParameter2 + 820);
        }
        --v13;
      }
      while ( v13 );
      v11 = *(_QWORD *)(BugCheckParameter2 + 48);
    }
    v7 = *(_QWORD *)(v11 + 264);
  }
  ExReleaseSpinLockExclusive(v5, v9);
  if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg
    || (v15 = *(_DWORD *)(BugCheckParameter2 + 816), (v15 & 0x80u) != 0) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v15 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v18 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v15, v15);
    }
    while ( v18 != v15 );
    if ( (v15 & 0x400) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFBFF);
      LOBYTE(v15) = PopSystemIrpCompletion(0LL, v7, *(_QWORD *)(v7 + 72LL * *(char *)(v7 + 66) + 200));
    }
  }
  if ( !v8 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v16 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v16, v16);
    }
    while ( v17 != v16 );
    if ( (v16 & 0x2000) != 0 )
      LOBYTE(v15) = PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter2);
    else
      LOBYTE(v15) = PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
  }
  return v15;
}
