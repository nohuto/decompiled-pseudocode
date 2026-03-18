/*
 * XREFs of PopPowerSourceChangeCallback @ 0x14018BA10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     TtmIsEnabled @ 0x1406A3134 (TtmIsEnabled.c)
 *     PopGetSessionId @ 0x1406A39C0 (PopGetSessionId.c)
 *     PopBroadcastSessionInfo @ 0x14075AE8C (PopBroadcastSessionInfo.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408BD79C (TtmNotifySessionDisplayBurst.c)
 */

__int64 __fastcall PopPowerSourceChangeCallback(_QWORD *a1, int *a2, int a3)
{
  int v3; // ebx
  __int64 v4; // r9
  GUID v5; // xmm0
  __int64 v6; // rcx
  unsigned int SessionId; // eax
  GUID v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v4 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  if ( v4 || a3 != 4 || !a2 )
    return 3221225485LL;
  if ( PopPlatformAoAc && PopDisableDisplayBurstOnPowerSourceChange )
    v3 = 1;
  if ( !PopLidOpened && !PopConsoleExternalDisplayConnected )
    v3 = 1;
  if ( v3 )
    v5 = GUID_ACDC_DISPLAY_BURST_SUPPRESS;
  else
    v5 = *(GUID *)a1;
  v10 = *a2;
  v9 = v5;
  PopBroadcastSessionInfo(0LL, 20LL, &v9);
  if ( v3 )
  {
    if ( !_InterlockedCompareExchange(&PopDisplayBurstSuppressWorkItemQueued, 1, 0) )
      ExQueueWorkItem(&PopDisplayBurstSuppressWorkItem, DelayedWorkQueue);
  }
  else if ( (unsigned __int8)TtmIsEnabled(v6) )
  {
    SessionId = PopGetSessionId();
    TtmNotifySessionDisplayBurst(SessionId, 5LL);
  }
  return 0LL;
}
