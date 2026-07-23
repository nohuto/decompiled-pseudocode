/*
 * XREFs of PopPowerSourceChangeCallback @ 0x14017DE40
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x14072AA4C (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopPowerSourceChangeCallback(_QWORD *a1, int *a2, int a3)
{
  int v3; // ebx
  __int64 v4; // r9
  GUID v5; // xmm0
  GUID v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

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
  v8 = *a2;
  v7 = v5;
  PopBroadcastSessionInfo(0LL, 20LL, &v7);
  if ( v3 )
  {
    if ( !_InterlockedCompareExchange(&PopDisplayBurstSuppressWorkItemQueued, 1, 0) )
      ExQueueWorkItem(&PopDisplayBurstSuppressWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
