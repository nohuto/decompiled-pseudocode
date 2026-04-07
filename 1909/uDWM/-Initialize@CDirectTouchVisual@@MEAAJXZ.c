/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180045D80
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180045954 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000D424 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800255C0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800369B0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800390E4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800466A0 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int v6; // eax
  struct CVisual **v7; // rsi
  struct tagSIZE v8; // rcx
  int v9; // eax
  int inserted; // eax
  int BitmapFromAtlas; // eax
  void *v13; // [rsp+28h] [rbp-10h]

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x26u, v13);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    v5 = (struct CBitmapSource **)&this[52];
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 324LL) )
    {
      BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, v5);
      v3 = BitmapFromAtlas;
      if ( BitmapFromAtlas < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapFromAtlas, 0x2Cu, v13);
        return v3;
      }
    }
    else
    {
      v6 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x30u, v13);
        return v3;
      }
    }
    v7 = (struct CVisual **)&this[51];
    v8 = *(struct tagSIZE *)(*(_QWORD *)&this[52] + 24LL);
    this[43].cx = 0;
    this[40] = v8;
    LOBYTE(this[50].cx) = 0;
    this[43].cy = 1065353216;
    this[44].cx = 1065353216;
    this[44].cy = 1068708659;
    this[45].cx = 1067030938;
    this[42].cy = 1033476506;
    this[45].cy = 1028443341;
    this[41].cx = 1040522936;
    this[41].cy = 1061481551;
    this[42].cx = 1047285445;
    v9 = CImage::Create((struct CImage **)&this[51]);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x44u, v13);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)&this[4], *v7, 0LL, 0, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x45u, v13);
      }
      else
      {
        CVisual::SetSize(*v7, this + 40);
        this[47] = 0LL;
        this[48] = 0LL;
        this[49] = 0LL;
        LOBYTE(this[35].cx) = 0;
      }
    }
  }
  return v3;
}
