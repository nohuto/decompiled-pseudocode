/*
 * XREFs of PfpIsProcessInfoPresent @ 0x1400E26DC
 * Callers:
 *     PfpCopyEvent @ 0x14066ADE0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x14066B030 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 736) && *(_QWORD *)(a1 + 776);
}
