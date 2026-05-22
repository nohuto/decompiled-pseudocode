/*
 * XREFs of ?IsMPCDevice@MPCProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1800F5CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCProcessor::IsMPCDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 9) & 1;
}
