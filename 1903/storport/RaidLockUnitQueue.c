/*
 * XREFs of RaidLockUnitQueue @ 0x1C0037DAC
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C00742CC (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 1;
}
