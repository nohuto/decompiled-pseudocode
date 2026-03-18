/*
 * XREFs of AcpiFanEjectInterface @ 0x1C000AD24
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall AcpiFanEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v4 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v4 + 8) = DeviceExtension;
  *(_QWORD *)(v4 + 16) = PciConfigPinToLine;
  *(_QWORD *)(v4 + 24) = PciConfigPinToLine;
  result = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_DWORD *)v4 = 65592;
  *(_QWORD *)(v4 + 40) = ACPIFanControl;
  return result;
}
