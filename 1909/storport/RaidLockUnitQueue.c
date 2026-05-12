/*
 * XREFs of RaidLockUnitQueue @ 0x1C003919C
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C007519C (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 693) = 1;
}
