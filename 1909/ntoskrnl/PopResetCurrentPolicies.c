/*
 * XREFs of PopResetCurrentPolicies @ 0x14075B17C
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x14075AA20 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x14075AD34 (PopChangeCapability.c)
 *     PopThermalZoneAdd @ 0x14075F1E0 (PopThermalZoneAdd.c)
 *     PopBatteryAdd @ 0x1408A9080 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408A9890 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1408A9B08 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140182C04 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopApplyPolicy @ 0x14075B258 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x14078AF9C (PopDefaultPolicy.c)
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
