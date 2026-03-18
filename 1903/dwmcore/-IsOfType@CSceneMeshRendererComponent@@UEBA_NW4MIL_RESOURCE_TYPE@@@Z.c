/*
 * XREFs of ?IsOfType@CSceneMeshRendererComponent@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F7450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneMeshRendererComponent::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 151;
  result = 0;
  if ( v2 <= 0xA )
  {
    v3 = 1297;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
