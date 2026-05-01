/*
 * XREFs of ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800D3C98
 * Callers:
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800C7A1C (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x1800D3BB4 (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D3C1C (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    MemoryFree(v2);
    *a1 = 0LL;
  }
}
