/*
 * XREFs of ?IsOfType@CPropertySetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0069DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPropertySetMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 115) > 1 )
    return a2 == 102;
  return v2;
}
