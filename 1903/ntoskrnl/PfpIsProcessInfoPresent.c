/*
 * XREFs of PfpIsProcessInfoPresent @ 0x140098154
 * Callers:
 *     PfpCopyEvent @ 0x14065B1E0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x14065B420 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 744) && *(_QWORD *)(a1 + 784);
}
