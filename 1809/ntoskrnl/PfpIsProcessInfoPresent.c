/*
 * XREFs of PfpIsProcessInfoPresent @ 0x1400E265C
 * Callers:
 *     PfpCopyEvent @ 0x140669C20 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140669E70 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 736) && *(_QWORD *)(a1 + 776);
}
