/*
 * XREFs of RaUnitStopDeviceIrp @ 0x1C007519C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidLockUnitQueue @ 0x1C003919C (RaidLockUnitQueue.c)
 */

__int64 __fastcall RaUnitStopDeviceIrp(__int64 a1)
{
  PIRP v1; // rax

  *(_DWORD *)(a1 + 48) = 2;
  RaidLockUnitQueue(a1);
  return RaidCompleteRequestEx(v1, 0, 0);
}
