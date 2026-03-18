/*
 * XREFs of ?IsCompositionLight@CSharedReadCompositionLightMarshaler@DirectComposition@@SA_NI@Z @ 0x1C0092218
 * Callers:
 *     CreateSharedReadCompositionLightMarshaler @ 0x1C0092120 (CreateSharedReadCompositionLightMarshaler.c)
 *     ?IsOfType@CSharedReadCompositionLightMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0092200 (-IsOfType@CSharedReadCompositionLightMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedReadCompositionLightMarshaler::IsCompositionLight(unsigned int a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a1 <= 0x26 )
  {
    v1 = a1;
    v2 = 0x4AA0000000LL;
    if ( _bittest64(&v2, v1) )
      return 1;
  }
  return result;
}
