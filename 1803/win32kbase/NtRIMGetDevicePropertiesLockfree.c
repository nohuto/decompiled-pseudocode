/*
 * XREFs of NtRIMGetDevicePropertiesLockfree @ 0x1C00DF670
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePropertiesLockfree @ 0x1C00E2200 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePropertiesLockfree(__int64 a1, __int64 a2)
{
  return RIMGetDevicePropertiesLockfree(a1, a2, 1LL);
}
