/*
 * XREFs of RaUnitCreateIrp @ 0x1C000F688
 * Callers:
 *     RaDriverCreateIrp @ 0x1C006B690 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C006B740 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C000F6A0 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
