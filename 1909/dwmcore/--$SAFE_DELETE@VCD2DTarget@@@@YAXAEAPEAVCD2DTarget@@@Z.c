/*
 * XREFs of ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x18002CA34
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x18002C060 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18002C700 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18002CB1C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18002CA5C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 */

void *__fastcall SAFE_DELETE<CD2DTarget>(CD2DTarget **a1, unsigned int a2)
{
  CD2DTarget *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
  {
    result = CD2DTarget::`scalar deleting destructor'(v3, a2);
    *a1 = 0LL;
  }
  return result;
}
