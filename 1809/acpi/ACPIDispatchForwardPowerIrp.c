/*
 * XREFs of ACPIDispatchForwardPowerIrp @ 0x1C000CC90
 * Callers:
 *     ACPIDeviceIrpForwardRequest @ 0x1C000CD00 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpSetPower @ 0x1C002C6B0 (ACPIFilterIrpSetPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0053990 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005CA70 (ACPIRootIrpQueryPower.c)
 *     ACPIRootIrpSetPower @ 0x1C005CE30 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 728) || (*(_BYTE *)(DeviceExtension + 8) & 0x20) != 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  }
  return 259LL;
}
