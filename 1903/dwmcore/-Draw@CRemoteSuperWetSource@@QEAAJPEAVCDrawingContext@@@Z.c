/*
 * XREFs of ?Draw@CRemoteSuperWetSource@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801B29C0
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013C40 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180251FD4 (-TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA.c)
 */

__int64 __fastcall CRemoteSuperWetSource::Draw(CRemoteSuperWetSource *this, struct CDrawingContext *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = CWetInkManager::TryRegisterSuperWetForDraw(
         *(CWetInkManager **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 104LL),
         this,
         a2,
         0,
         &v6);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\remotesuperwetsource.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
