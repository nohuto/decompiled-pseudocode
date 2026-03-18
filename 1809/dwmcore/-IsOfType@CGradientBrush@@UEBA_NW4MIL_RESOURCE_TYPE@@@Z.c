/*
 * XREFs of ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001B4C8
 * Callers:
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001B4A0 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsOfType(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x3F )
  {
    v2 = 0x8000010000004000uLL;
    if ( _bittest64((const __int64 *)&v2, a2) )
      return 1;
  }
  return result;
}
