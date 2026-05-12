/*
 * XREFs of RaidIsUnitQueueLocked @ 0x1C0010088
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidIsUnitQueueLocked(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 437);
}
