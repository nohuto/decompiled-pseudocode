/*
 * XREFs of ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BF4C
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001C48 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180003394 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x18000BBB0 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180016C10 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001F320 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180020D74 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z @ 0x180023864 (-SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x1800379B4 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x180093AB0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::SetDirtyFlags(CAtlasedImage *this, int a2, unsigned int a3)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 24) |= a2;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, a3);
}
