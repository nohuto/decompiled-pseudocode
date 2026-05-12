/*
 * XREFs of RaUnitCreateIrp @ 0x1C000F958
 * Callers:
 *     RaDriverCreateIrp @ 0x1C006A790 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C006A840 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C000F970 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
