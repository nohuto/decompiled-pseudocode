/*
 * XREFs of IsValueSizeFixed @ 0x1408E5770
 * Callers:
 *     GetOperandValue @ 0x1408E44C0 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408E579C (LocalGetConditionForString.c)
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
