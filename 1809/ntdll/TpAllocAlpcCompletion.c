/*
 * XREFs of TpAllocAlpcCompletion @ 0x180088B20
 * Callers:
 *     <none>
 * Callees:
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 */

__int64 __fastcall TpAllocAlpcCompletion(_PEB_LDR_DATA *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  return TppAllocAlpcCompletion(a1, a2, a3, a4, a5, 0);
}
