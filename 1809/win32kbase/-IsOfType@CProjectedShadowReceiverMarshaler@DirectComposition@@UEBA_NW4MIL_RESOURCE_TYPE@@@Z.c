/*
 * XREFs of ?IsOfType@CProjectedShadowReceiverMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0173150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 102;
  result = 0;
  if ( v2 <= 0xD )
  {
    v3 = 10241;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
