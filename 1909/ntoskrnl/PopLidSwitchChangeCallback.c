/*
 * XREFs of PopLidSwitchChangeCallback @ 0x1408A4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x14075F71C (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopLidSwitchChangeCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v5 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - a1[1];
  if ( v5 || a3 != 4 || !a2 )
    return 3221225485LL;
  if ( PopPlatformAoAc
    && !*a2
    && !PopConsoleDisplayState
    && (GUID *)PopWdiCurrentScenario == &GUID_SPM_LOW_POWER_CS
    && !_InterlockedCompareExchange(&PopLidClosedSleepStudyWorkItemQueued, 1, 0) )
  {
    ExQueueWorkItem(&PopLidClosedSleepStudyWorkItem, DelayedWorkQueue);
  }
  v6 = *(_OWORD *)a1;
  v9 = *a2;
  v8 = v6;
  PopBroadcastSessionInfo(0, 20, (__int64)&v8);
  PopQueueWorkItem((__int64)&PopRecordLidStateWorkItem, DelayedWorkQueue);
  return 0LL;
}
