/*
 * XREFs of PopResetCurrentPolicies @ 0x1407475EC
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140740E10 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x140745810 (PopThermalZoneAdd.c)
 *     PopEnableHiberFile @ 0x140745F7C (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x140746710 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x140746C10 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x1407471A4 (PopChangeCapability.c)
 *     PopThermalZoneRemove @ 0x14086C640 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x14086CCC0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14086D4E0 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14086D758 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140178B30 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PopApplyPolicy @ 0x1407476B4 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x140761B9C (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-130h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-128h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-118h] BYREF

  memset(KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           &ResultLength);
    if ( v1 < 0 )
    {
      PopDefaultPolicy(&KeyValueInformation[12]);
      v2 = 232LL;
    }
    else
    {
      v2 = ResultLength - 12;
    }
    ResultLength = v2;
    PopApplyPolicy(0LL, 0LL, &KeyValueInformation[12], v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
