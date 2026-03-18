/*
 * XREFs of ?IsOfType@COverlayRenderTargetEngine@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A3220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall COverlayRenderTargetEngine::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 109) > 1 )
    return a2 == 143;
  return v2;
}
