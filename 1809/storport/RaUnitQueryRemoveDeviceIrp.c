/*
 * XREFs of RaUnitQueryRemoveDeviceIrp @ 0x1C0074C28
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryRemoveDeviceIrp(_DWORD *a1, IRP *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1[229] || a1[231] || a1[230] )
    v2 = -2147483631;
  else
    a1[12] = 4;
  return RaidCompleteRequestEx(a2, 0, v2);
}
