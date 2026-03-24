/*
 * XREFs of IsValueSizeFixed @ 0x1408A8BA0
 * Callers:
 *     GetOperandValue @ 0x1408A7838 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A8BCC (LocalGetConditionForString.c)
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
