/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x14082D78C
 * Callers:
 *     PiDevCfgResetDeviceKeyCallback @ 0x14082FF40 (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, void *a2, __int64 a3, unsigned int a4, int a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, a2, a3, a4, a5, 0LL, a6);
}
