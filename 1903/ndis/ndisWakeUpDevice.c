/*
 * XREFs of ndisWakeUpDevice @ 0x1C00774C0
 * Callers:
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPreReleaseHardware @ 0x1C0119350 (ndisWdfPreReleaseHardware.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 */

__int64 __fastcall ndisWakeUpDevice(__int64 a1)
{
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 3868) == 1 )
    return 0LL;
  v3 = ndisRequestDevicePowerD0(a1, 0xBu);
  if ( v3 == 259 )
  {
    v3 = 0;
    KeWaitForSingleObject((PVOID)(a1 + 4216), Executive, 0, 0, 0LL);
  }
  return v3;
}
