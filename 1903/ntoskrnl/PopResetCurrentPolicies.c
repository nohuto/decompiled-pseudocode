/*
 * XREFs of PopResetCurrentPolicies @ 0x140749ADC
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopChangeCapability @ 0x14074968C (PopChangeCapability.c)
 *     PdcPoReportButton @ 0x14074A1B0 (PdcPoReportButton.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     PopThermalZoneAdd @ 0x14075A950 (PopThermalZoneAdd.c)
 *     PopBatteryAdd @ 0x1408A9820 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408AA030 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1408AA2A8 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140182514 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopApplyPolicy @ 0x140749BB8 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x140788B3C (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
