/*
 * XREFs of ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019F650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroupLayerClip::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 43 )
    return (unsigned int)(a2 - 125) <= 1;
  return v2;
}
