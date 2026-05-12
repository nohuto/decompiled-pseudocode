/*
 * XREFs of RaidLockUnitQueue @ 0x1C003BEDC
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C0074CAC (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 693) = 1;
}
