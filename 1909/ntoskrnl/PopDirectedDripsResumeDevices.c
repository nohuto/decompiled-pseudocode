/*
 * XREFs of PopDirectedDripsResumeDevices @ 0x1408A43B4
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408A3974 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x1408A42D0 (PopDirectedDripsRefreshDeviceState.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x1408A4300 (PopDirectedDripsRefreshDisengageState.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402F2554 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x1408A383C (PopDirectedDripsDestroyBroadcast.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408A4384 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopDiagTraceDirectedDripsNotifyDevices @ 0x1408AE724 (PopDiagTraceDirectedDripsNotifyDevices.c)
 */

__int64 __fastcall PopDirectedDripsResumeDevices(unsigned __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v6; // rbp
  unsigned __int32 v7; // eax
  __int64 v8; // r8
  unsigned __int32 v9; // ett
  __int16 v10; // di
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v4 = a2;
  v6 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v7 = *a1;
  do
  {
    v8 = v7;
    v9 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v7, v7);
  }
  while ( v9 != v7 );
  v10 = v7;
  if ( (v7 & 0x10) != 0 )
  {
    *((_BYTE *)a1 + 109) = 1;
    PoBroadcastSystemState((__int64)(a1 + 21), a2, v8, a4);
    _InterlockedOr((volatile signed __int32 *)a1, 0x20u);
  }
  if ( (v10 & 0x80u) != 0 )
    PopDirectedDripsDestroyBroadcast();
  if ( !v4 && (v10 & 0x200) == 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v11 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v11, v11);
    }
    while ( v12 != v11 );
    if ( !v11 )
      PopFxClearDirectedDripsCandidateDeviceList();
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF6F);
  if ( !v4 )
    PopDirectedDripsReleaseTransitionLock(a1);
  return PopDiagTraceDirectedDripsNotifyDevices(0LL, 0LL, (MEMORY[0xFFFFF78000000008] - v6) / 0x989680uLL);
}
