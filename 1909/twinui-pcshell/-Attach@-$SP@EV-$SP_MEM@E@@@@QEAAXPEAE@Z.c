/*
 * XREFs of ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x1800D3BB4
 * Callers:
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800C7A1C (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 * Callees:
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800D3C98 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

__int64 __fastcall SP<unsigned char,SP_MEM<unsigned char>>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(a1);
  *a1 = a2;
  return result;
}
