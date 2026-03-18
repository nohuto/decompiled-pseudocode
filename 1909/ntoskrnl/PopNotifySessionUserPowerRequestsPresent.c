/*
 * XREFs of PopNotifySessionUserPowerRequestsPresent @ 0x1408A2274
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1408BD3CC (TtmNotifySessionPowerRequestPresent.c)
 */

void PopNotifySessionUserPowerRequestsPresent()
{
  __int64 i; // rbx
  int v1; // r8d

  PopAcquirePowerRequestPushLock(0);
  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 88);
    if ( v1 )
      TtmNotifySessionPowerRequestPresent(
        *(_DWORD *)(i + 16),
        *(_DWORD *)(i + 28),
        v1,
        *(_QWORD *)(i + 96),
        *(_QWORD *)(i + 104),
        *(_DWORD *)(i + 32),
        0);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
