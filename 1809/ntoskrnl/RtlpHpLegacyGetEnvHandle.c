/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x14013B0C0
 * Callers:
 *     RtlCreateHeap @ 0x14070AF20 (RtlCreateHeap.c)
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
