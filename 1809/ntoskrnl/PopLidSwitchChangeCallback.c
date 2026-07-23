/*
 * XREFs of PopLidSwitchChangeCallback @ 0x14086A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x14072AA4C (PopBroadcastSessionInfo.c)
 *     PopRecordLidState @ 0x1408671E8 (PopRecordLidState.c)
 */

__int64 __fastcall PopLidSwitchChangeCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v5; // r9
  int v6; // edi
  __int128 v7; // xmm0
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v5 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - a1[1];
  if ( v5 || a3 != 4 || !a2 )
    return 3221225485LL;
  v6 = *a2;
  if ( PopPlatformAoAc
    && !v6
    && !PopConsoleDisplayState
    && (GUID *)PopWdiCurrentScenario == &GUID_SPM_LOW_POWER_CS
    && !_InterlockedCompareExchange(&PopLidClosedSleepStudyWorkItemQueued, 1, 0) )
  {
    ExQueueWorkItem(&PopLidClosedSleepStudyWorkItem, DelayedWorkQueue);
  }
  v7 = *(_OWORD *)a1;
  v10 = *a2;
  v9 = v7;
  PopBroadcastSessionInfo(0, 20, (__int64)&v9);
  PopRecordLidState(v6);
  return 0LL;
}
