/*
 * XREFs of ExpIsIumEncryptionKeyAvailable @ 0x1408CCCA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406CC040 (ExGetFirmwareEnvironmentVariable.c)
 */

bool ExpIsIumEncryptionKeyAvailable()
{
  int v1; // [rsp+30h] [rbp-40h] BYREF
  int v2; // [rsp+34h] [rbp-3Ch] BYREF
  int v3; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v5[4]; // [rsp+50h] [rbp-20h] BYREF

  v5[0] = 2012912317;
  v5[1] = 1295123289;
  v5[2] = -198680387;
  v5[3] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"VsmLKeyProvisioningResult");
  v2 = -1;
  v1 = 4;
  return (int)ExGetFirmwareEnvironmentVariable(
                (__int64)&DestinationString,
                (__int64)v5,
                (__int64)&v2,
                (__int64)&v1,
                (__int64)&v3) >= 0
      && v1 == 4
      && v3 == 6
      && v2 >= 0;
}
