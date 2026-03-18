/*
 * XREFs of ?IsOfType@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0168890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x36 )
  {
    v2 = 0x42000000000020LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
