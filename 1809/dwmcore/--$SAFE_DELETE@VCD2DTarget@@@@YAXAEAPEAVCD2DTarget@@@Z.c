/*
 * XREFs of ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180022828
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800230D0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1800E91A0 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800E95E0 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800227C0 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 */

CD2DTarget *__fastcall SAFE_DELETE<CD2DTarget>(CD2DTarget **a1)
{
  CD2DTarget *v2; // rcx
  CD2DTarget *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CD2DTarget::`scalar deleting destructor'(v2);
    *a1 = 0LL;
  }
  return result;
}
