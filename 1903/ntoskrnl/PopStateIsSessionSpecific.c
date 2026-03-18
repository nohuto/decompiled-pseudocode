/*
 * XREFs of PopStateIsSessionSpecific @ 0x1406A1878
 * Callers:
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1406A0760 (PopGetSettingNotificationName.c)
 *     PopSetNewPolicyValue @ 0x1406A10C8 (PopSetNewPolicyValue.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1406A177C (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x1406A1804 (PopGetListHead.c)
 * Callees:
 *     <none>
 */

char __fastcall PopStateIsSessionSpecific(_QWORD *a1)
{
  char v1; // dl
  GUID **v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // r8

  v1 = 0;
  v2 = PopSessionSpecificGuids;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)&(*v2)->Data1 - *a1;
    if ( !v4 )
      v4 = *(_QWORD *)(*v2)->Data4 - a1[1];
    if ( !v4 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 2 )
      return v1;
  }
  return 1;
}
