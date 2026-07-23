/*
 * XREFs of PnpRegistryValueExists @ 0x14015D0CC
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F6E50 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgMigrateRootDevice @ 0x14082EABC (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

bool __fastcall PnpRegistryValueExists(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS v2; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = ZwQueryValueKey(a1, a2, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
  return (int)(v2 + 0x80000000) < 0 || v2 == -2147483643;
}
