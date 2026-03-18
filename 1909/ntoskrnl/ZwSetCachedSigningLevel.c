/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1401C3CB0
 * Callers:
 *     sub_14091DCAC @ 0x14091DCAC (sub_14091DCAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
