/*
 * XREFs of RaUnitCreateIrp @ 0x1C00107AC
 * Callers:
 *     RaDriverCloseIrp @ 0x1C006A740 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C006A7F0 (RaDriverCreateIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C00107C4 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
