/*
 * XREFs of RaUnitQueryStopDeviceIrp @ 0x1C0074174
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 3;
  return RaidCompleteRequestEx(a2, 0, *(_DWORD *)(a1 + 684) != 0 ? 0x80000011 : 0);
}
