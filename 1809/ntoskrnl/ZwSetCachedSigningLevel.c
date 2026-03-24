/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1401BB1D0
 * Callers:
 *     sub_1408E1128 @ 0x1408E1128 (sub_1408E1128.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
