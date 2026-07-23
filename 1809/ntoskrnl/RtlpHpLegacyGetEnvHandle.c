/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x14013B1C0
 * Callers:
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
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
