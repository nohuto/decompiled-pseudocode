/*
 * XREFs of PfpIsProcessInfoPresent @ 0x1400D48D0
 * Callers:
 *     PfpCopyEvent @ 0x14066DA70 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x14066DCC0 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 744) && *(_QWORD *)(a1 + 784);
}
