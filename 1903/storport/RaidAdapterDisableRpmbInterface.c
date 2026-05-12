/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C00337B8
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00733FC (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5568) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5560), 0);
  return result;
}
