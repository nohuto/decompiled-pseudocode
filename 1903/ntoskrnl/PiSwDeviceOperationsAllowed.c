/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x140742550
 * Callers:
 *     PiSwIrpPropertySet @ 0x140742164 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140776CF0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140776E44 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407772E4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpSetLifetime @ 0x14077FA14 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x1407888A0 (PiSwIrpGetLifetime.c)
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
