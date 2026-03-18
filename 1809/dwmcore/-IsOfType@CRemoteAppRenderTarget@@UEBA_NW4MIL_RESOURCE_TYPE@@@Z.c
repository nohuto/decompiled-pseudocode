/*
 * XREFs of ?IsOfType@CRemoteAppRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18015F8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteAppRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 102;
  result = 0;
  if ( v2 <= 0x17 )
  {
    v3 = 10485761;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
