/*
 * XREFs of _RmpClientWnfDestroySubscription@4 @ 0x10007170
 * Callers:
 *     _HamDisconnectFromServer@4 @ 0x10006F70 (_HamDisconnectFromServer@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _HamConnectToServerEx@12 @ 0x10008300 (_HamConnectToServerEx@12.c)
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 *     _HamConnectForExtendedExecution@8 @ 0x1000B2B0 (_HamConnectForExtendedExecution@8.c)
 *     _HamConnectForSessionState@4 @ 0x1000BF00 (_HamConnectForSessionState@4.c)
 *     _HamConnectForDebugging@8 @ 0x1000BF50 (_HamConnectForDebugging@8.c)
 *     _HamConnectForServicing@4 @ 0x1000BFC0 (_HamConnectForServicing@4.c)
 *     _HamConnectForStateChangeNotifications@16 @ 0x1000C010 (_HamConnectForStateChangeNotifications@16.c)
 *     ?Init@ResourceManagerClientProxy@@IAEJXZ @ 0x1000C309 (-Init@ResourceManagerClientProxy@@IAEJXZ.c)
 *     _HamConnectForFullTrust@8 @ 0x10012220 (_HamConnectForFullTrust@8.c)
 *     _HamDisconnectForFullTrust@4 @ 0x100125C0 (_HamDisconnectForFullTrust@4.c)
 *     ??1ResourceManagerClientProxy@@MAE@XZ @ 0x10013B2A (--1ResourceManagerClientProxy@@MAE@XZ.c)
 * Callees:
 *     _CempListRemoveHeadAndClear@4 @ 0x100135CD (_CempListRemoveHeadAndClear@4.c)
 */

int __thiscall RmpClientWnfDestroySubscription(_DWORD *P)
{
  _DWORD *v2; // edx
  void *v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+Ch] [ebp-4h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*P);
  RtlAcquireSRWLockExclusive(P + 4);
  P[9] |= 4u;
  v2 = (_DWORD *)P[2];
  if ( v2 == P + 2 )
  {
    v6 = &v5;
    v5 = &v5;
  }
  else
  {
    v6 = (_DWORD *)P[3];
    v5 = v2;
    v2[1] = &v5;
    *v6 = &v5;
    P[3] = P + 2;
    P[2] = P + 2;
  }
  RtlReleaseSRWLockExclusive(P + 4);
  while ( v5 != &v5 )
  {
    v4 = (void *)CempListRemoveHeadAndClear(&v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  TpWaitForWork(P[8], 0);
  TpReleaseWork(P[8]);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0;
}
