/*
 * XREFs of ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x18007F224
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800403B8 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x18007F1AC (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003EB00 (-MemoryFree@@YAXPEAX@Z.c)
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
