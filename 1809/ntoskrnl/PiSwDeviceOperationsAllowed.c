/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x1406D8E84
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x1406D8A1C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x14071E4B4 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140755014 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14075519C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x14075A688 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x140762B2C (PiSwIrpGetLifetime.c)
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
