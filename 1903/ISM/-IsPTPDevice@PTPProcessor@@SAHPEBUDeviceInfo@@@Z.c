/*
 * XREFs of ?IsPTPDevice@PTPProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1801415C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::IsPTPDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 5) & 1;
}
