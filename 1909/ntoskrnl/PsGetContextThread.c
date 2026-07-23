/*
 * XREFs of PsGetContextThread @ 0x1408C97F0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 */

int __fastcall PsGetContextThread(__int64 a1, __int64 a2, char a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, a3, 1);
}
