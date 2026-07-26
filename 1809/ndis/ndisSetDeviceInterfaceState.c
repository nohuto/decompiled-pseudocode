/*
 * XREFs of ndisSetDeviceInterfaceState @ 0x1C00BD718
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetDeviceInterfaceState(__int64 a1, BOOLEAN a2)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 368) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), a2);
  if ( *(_QWORD *)(a1 + 4192) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4184), a2);
  if ( *(_QWORD *)(a1 + 4872) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4864), a2);
  return result;
}
