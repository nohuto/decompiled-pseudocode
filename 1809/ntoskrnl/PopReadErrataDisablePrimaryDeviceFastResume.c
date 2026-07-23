/*
 * XREFs of PopReadErrataDisablePrimaryDeviceFastResume @ 0x1409AC034
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x1405663B0 (EmClientQueryRuleState.c)
 */

__int64 PopReadErrataDisablePrimaryDeviceFastResume()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  PopErrataDisablePrimaryDeviceFastResume = 0;
  result = EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v1);
  if ( v1 == 2 )
    PopErrataDisablePrimaryDeviceFastResume = 1;
  return result;
}
