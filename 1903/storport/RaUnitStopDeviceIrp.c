/*
 * XREFs of RaUnitStopDeviceIrp @ 0x1C00742CC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidLockUnitQueue @ 0x1C0037DAC (RaidLockUnitQueue.c)
 */

__int64 __fastcall RaUnitStopDeviceIrp(__int64 a1)
{
  PIRP v1; // rax

  *(_DWORD *)(a1 + 48) = 2;
  RaidLockUnitQueue(a1);
  return RaidCompleteRequestEx(v1, 0, 0);
}
