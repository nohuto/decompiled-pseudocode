/*
 * XREFs of ?IsHeadMPCDevice@MPCHeadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18013F110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadProcessor::IsHeadMPCDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 17) & 1;
}
