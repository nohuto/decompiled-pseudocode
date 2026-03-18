/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1401C3130
 * Callers:
 *     sub_14091E24C @ 0x14091E24C (sub_14091E24C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
