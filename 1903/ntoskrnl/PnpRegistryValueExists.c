/*
 * XREFs of PnpRegistryValueExists @ 0x14015C9D0
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x1406FC2A0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408680E4 (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 */

bool __fastcall PnpRegistryValueExists(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS v2; // eax
  ULONG v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  v5[0] = 0LL;
  v5[1] = 0LL;
  v2 = ZwQueryValueKey(a1, a2, KeyValueBasicInformation, v5, 0x10u, &v4);
  return (int)(v2 + 0x80000000) < 0 || v2 == -2147483643;
}
