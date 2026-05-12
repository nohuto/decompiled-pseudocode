/*
 * XREFs of RaidHandleCreateCloseIrp @ 0x1C00107C4
 * Callers:
 *     RaUnitCreateIrp @ 0x1C00107AC (RaUnitCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C006A740 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C006A7F0 (RaDriverCreateIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidHandleCreateCloseIrp(int a1, IRP *a2)
{
  unsigned int v2; // r8d

  if ( (unsigned int)(a1 - 6) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v2 = -1073741738;
  }
  else
  {
    v2 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v2);
}
