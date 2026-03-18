/*
 * XREFs of PopDirectedDripsSuspendDevices @ 0x1408A4498
 * Callers:
 *     PopDirectedDripsEngageDfx @ 0x1408A38C0 (PopDirectedDripsEngageDfx.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408A3974 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x1408A42D0 (PopDirectedDripsRefreshDeviceState.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x1408A4300 (PopDirectedDripsRefreshDisengageState.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     PopAcquireTransitionLock @ 0x1407491E0 (PopAcquireTransitionLock.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x1408A383C (PopDirectedDripsDestroyBroadcast.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408A3B54 (PopDirectedDripsInitializeBroadcast.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408A4384 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopDiagTraceDirectedDripsNotifyDevices @ 0x1408AE724 (PopDiagTraceDirectedDripsNotifyDevices.c)
 */

__int64 __fastcall PopDirectedDripsSuspendDevices(signed __int32 *a1)
{
  signed __int32 *v1; // rbx
  __int64 v2; // rbp
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int16 v5; // si
  int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  v1 = a1;
  v2 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v3 = *a1;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(a1, v3, v3);
  }
  while ( v4 != v3 );
  v5 = v3;
  if ( a1[38] || (v3 & 0x3000) == 0 || (v3 & 0x10) != 0 )
  {
    v6 = -1073741823;
LABEL_16:
    if ( v6 >= 0 )
      goto LABEL_22;
    goto LABEL_17;
  }
  if ( (v3 & 0x808) == 0x800 )
  {
    v6 = -1073741536;
    goto LABEL_17;
  }
  _m_prefetchw(a1);
  if ( (_InterlockedOr(a1, 0x40u) & 0x40) == 0 )
    PopAcquireTransitionLock(7);
  v1[27] = 0;
  v1[21] = 1;
  v1[22] = 5;
  v1[23] = 5;
  v1[26] = v1[20];
  v1[24] = 1;
  v1[25] = 2;
  v7 = PopDirectedDripsInitializeBroadcast((struct _KEVENT *)v1);
  v6 = v7;
  if ( v7 < 0 )
  {
    v1[36] = v7;
    goto LABEL_16;
  }
  _InterlockedOr(v1, 0x80u);
  if ( (v5 & 0x800) != 0 )
  {
    *((_BYTE *)v1 + 110) = 3;
    PoBroadcastSystemState((__int64)(v1 + 21), v8, v9, v10);
  }
  *((_BYTE *)v1 + 1040) = 0;
  *((_BYTE *)v1 + 110) = 2;
  v11 = PoBroadcastSystemState((__int64)(v1 + 21), v8, v9, v10);
  v1[36] = v11;
  v6 = v11;
  if ( v11 >= 0 )
  {
    _InterlockedOr(v1, 0x10u);
    _InterlockedAnd(v1, 0xFFFFFFDF);
    ++v1[37];
    v6 = 0;
    goto LABEL_22;
  }
LABEL_17:
  _m_prefetchw(v1);
  v12 = *v1;
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange(v1, v12, v12);
  }
  while ( v13 != v12 );
  if ( (v12 & 0x80u) != 0 )
  {
    PopDirectedDripsDestroyBroadcast();
    _InterlockedAnd(v1, 0xFFFFFF7F);
  }
  PopDirectedDripsReleaseTransitionLock(v1);
LABEL_22:
  LOBYTE(a1) = 1;
  PopDiagTraceDirectedDripsNotifyDevices(a1, (unsigned int)v6, (MEMORY[0xFFFFF78000000008] - v2) / 0x989680uLL);
  return (unsigned int)v6;
}
