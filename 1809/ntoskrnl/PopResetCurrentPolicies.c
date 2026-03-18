/*
 * XREFs of PopResetCurrentPolicies @ 0x14074760C
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140740E30 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x140745830 (PopThermalZoneAdd.c)
 *     PopEnableHiberFile @ 0x140745F9C (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x140746C30 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x1407471C4 (PopChangeCapability.c)
 *     PopThermalZoneRemove @ 0x14086C660 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x14086CCE0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14086D500 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14086D778 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140178B10 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B8450 (ZwQueryValueKey.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopApplyPolicy @ 0x1407476D4 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x140761BBC (PopDefaultPolicy.c)
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
