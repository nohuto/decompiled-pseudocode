/*
 * XREFs of ?Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180098510
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x180091374 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013998 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047098 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTouchDragVisual::Initialize(CTouchDragVisual *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *Theme; // rax
  int v6; // edx
  int BitmapFromAtlas; // eax

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v6, 0LL, (struct CBitmapSource **)this + 48);
    v4 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
      *(_OWORD *)((char *)this + 392) = *(_OWORD *)(*((_QWORD *)this + 48) + 80LL);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x45u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x42u);
  }
  return v4;
}
