/*
 * XREFs of RtlpNtSetValueKey @ 0x180089570
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlpNtSetValueKey(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  _WORD v5[12]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  return ZwSetValueKey(a1, v5, 0LL, a2, a3, a4);
}
