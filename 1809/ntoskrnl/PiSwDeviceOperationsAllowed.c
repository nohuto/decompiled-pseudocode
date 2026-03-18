/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x1406D7C04
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x1406D779C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x14071D234 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140753E44 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FCC (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x1407594B8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x14076195C (PiSwIrpGetLifetime.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwDeviceOperationsAllowed(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
