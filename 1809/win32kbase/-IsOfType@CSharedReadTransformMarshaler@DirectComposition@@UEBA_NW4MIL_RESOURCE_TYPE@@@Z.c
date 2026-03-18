/*
 * XREFs of ?IsOfType@CSharedReadTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0087930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedReadTransformMarshaler::IsOfType(__int64 a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = 0;
  switch ( a2 )
  {
    case 149:
      return 1;
    case 49:
      return 1;
    case 148:
      v3 = *(_DWORD *)(a1 + 48);
      if ( v3 == 97 || v3 == 94 )
        return 1;
      break;
  }
  return result;
}
