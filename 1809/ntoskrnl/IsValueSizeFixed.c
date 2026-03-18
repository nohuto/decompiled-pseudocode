/*
 * XREFs of IsValueSizeFixed @ 0x1408A8BC0
 * Callers:
 *     GetOperandValue @ 0x1408A7858 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A8BEC (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValueSizeFixed(unsigned __int8 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return a1 <= 4u;
  return result;
}
