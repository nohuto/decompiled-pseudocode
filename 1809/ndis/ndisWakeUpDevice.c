/*
 * XREFs of ndisWakeUpDevice @ 0x1C00E8E08
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00F52B0 (ndisWdfPreReleaseHardware.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 */

__int64 __fastcall ndisWakeUpDevice(__int64 a1)
{
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 3900) == 1 )
    return 0LL;
  v3 = ndisRequestDevicePowerD0(a1, 0xBu);
  if ( v3 == 259 )
  {
    v3 = 0;
    KeWaitForSingleObject((PVOID)(a1 + 4256), Executive, 0, 0, 0LL);
  }
  return v3;
}
