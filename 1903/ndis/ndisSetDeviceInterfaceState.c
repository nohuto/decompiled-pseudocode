/*
 * XREFs of ndisSetDeviceInterfaceState @ 0x1C00FF708
 * Callers:
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ndisWdfNotifyDevicePower @ 0x1C00A6F44 (ndisWdfNotifyDevicePower.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetDeviceInterfaceState(__int64 a1, BOOLEAN a2)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 368) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), a2);
  if ( *(_QWORD *)(a1 + 4160) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4152), a2);
  if ( *(_QWORD *)(a1 + 4832) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4824), a2);
  return result;
}
