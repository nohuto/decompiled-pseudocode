/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x140137A38
 * Callers:
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall RtlpHpLegacyGetEnvHandle(_OWORD *a1)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = RtlpHpLegacyEnvHandle;
  return result;
}
