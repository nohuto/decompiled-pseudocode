/*
 * XREFs of PdcPoLowPower @ 0x14019B770
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLowPower(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  PopAcquirePolicyLock(a1, a2);
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH);
  PopReleasePolicyLock(v3, v2);
  return 0LL;
}
