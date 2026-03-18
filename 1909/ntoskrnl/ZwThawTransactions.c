/*
 * XREFs of ZwThawTransactions @ 0x1401C43D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwThawTransactions(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
