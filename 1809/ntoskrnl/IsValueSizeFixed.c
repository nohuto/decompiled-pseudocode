/*
 * XREFs of IsValueSizeFixed @ 0x1408A9E00
 * Callers:
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A9E2C (LocalGetConditionForString.c)
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
