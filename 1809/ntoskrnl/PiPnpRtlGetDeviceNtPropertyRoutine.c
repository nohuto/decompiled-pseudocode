/*
 * XREFs of PiPnpRtlGetDeviceNtPropertyRoutine @ 0x1406C7040
 * Callers:
 *     <none>
 * Callees:
 *     PlugPlayGetDeviceProperty @ 0x1406C7080 (PlugPlayGetDeviceProperty.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceNtPropertyRoutine(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  return PlugPlayGetDeviceProperty(a2, a3, a4, a5, a6, a7);
}
