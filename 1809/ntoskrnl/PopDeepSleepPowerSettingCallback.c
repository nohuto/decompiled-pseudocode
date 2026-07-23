/*
 * XREFs of PopDeepSleepPowerSettingCallback @ 0x140763C20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 */

__int64 __fastcall PopDeepSleepPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9

  v4 = -1073741811;
  v5 = *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_DEEP_SLEEP_ENABLED.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock();
    PopDeepSleepIsEnabled = *a2 != 0;
    PopCheckResiliencyScenarios();
    PopReleasePolicyLock();
    return 0;
  }
  return v4;
}
