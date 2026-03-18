/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x140744450
 * Callers:
 *     PiSwIrpPropertySet @ 0x140744064 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14077A2D0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14077A424 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14077A8C4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140782434 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x14078AD00 (PiSwIrpGetLifetime.c)
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
