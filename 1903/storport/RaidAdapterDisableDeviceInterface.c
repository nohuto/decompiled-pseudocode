/*
 * XREFs of RaidAdapterDisableDeviceInterface @ 0x1C003367C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00733FC (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorDeleteScsiSymbolicLink @ 0x1C004367C (StorDeleteScsiSymbolicLink.c)
 *     PortMapDeleteAdapterEntry @ 0x1C00510C4 (PortMapDeleteAdapterEntry.c)
 */

NTSTATUS __fastcall RaidAdapterDisableDeviceInterface(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  HANDLE *v4; // rsi
  NTSTATUS result; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 2064) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2056), 0);
  v3 = *(unsigned __int8 *)(a1 + 376);
  if ( *(_BYTE *)(a1 + 376) )
  {
    v4 = (HANDLE *)(a1 + 2160);
    do
    {
      if ( v1 >= 0xFF )
        break;
      ZwClose(*v4);
      ++v1;
      ++v4;
    }
    while ( v1 < v3 );
  }
  result = PortMapDeleteAdapterEntry(*(unsigned int *)(a1 + 56));
  if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 104) &= 0xF9u;
  }
  if ( *(_DWORD *)(a1 + 56) != -1 )
  {
    result = StorDeleteScsiSymbolicLink();
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}
