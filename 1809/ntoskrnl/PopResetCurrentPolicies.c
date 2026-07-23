/*
 * XREFs of PopResetCurrentPolicies @ 0x1407487DC
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140742000 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x140746A00 (PopThermalZoneAdd.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x140747E00 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x140748394 (PopChangeCapability.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x14086DF20 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14086E740 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14086E9B8 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140178C30 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x140762D8C (PopDefaultPolicy.c)
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
