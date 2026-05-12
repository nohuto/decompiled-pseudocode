/*
 * XREFs of RaUnitQueryRemoveDeviceIrp @ 0x1C0074128
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryRemoveDeviceIrp(_DWORD *a1, IRP *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1[171] || a1[173] || a1[172] )
    v2 = -2147483631;
  else
    a1[12] = 4;
  return RaidCompleteRequestEx(a2, 0, v2);
}
