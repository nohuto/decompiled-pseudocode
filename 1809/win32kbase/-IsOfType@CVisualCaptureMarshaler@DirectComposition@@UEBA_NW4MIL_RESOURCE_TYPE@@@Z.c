/*
 * XREFs of ?IsOfType@CVisualCaptureMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0003E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualCaptureMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  bool result; // al
  __int64 v4; // rcx

  v2 = a2 - 102;
  result = 0;
  if ( v2 <= 0x38 )
  {
    v4 = 0x100000000002001LL;
    if ( _bittest64(&v4, v2) )
      return 1;
  }
  return result;
}
