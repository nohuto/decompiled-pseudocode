/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x18009F6B0
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x180095CB4 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000E9B8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036950 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180039B54 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180044C34 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180045544 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int BitmapFromAtlas; // eax
  int v7; // eax
  int v8; // eax
  struct CVisual **v9; // r15
  int v10; // eax
  struct CVisual **v11; // r14
  int v12; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      this[46].cy = 1067030938;
      this[47].cx = 1072064102;
      this[47].cy = 1065353216;
      this[48] = (struct tagSIZE)1067869798LL;
      this[49].cx = 0;
      this[49].cy = 150;
      this[45].cx = 1050253722;
      this[45].cy = 1059760811;
      this[46].cx = 1051372203;
      this[50] = 0LL;
      LOBYTE(this[35].cx) = 0;
      v7 = CDesktopManager::MonitorDpiFromPoint(0LL);
      v8 = MulDiv(50, v7, 96);
      v9 = (struct CVisual **)&this[43];
      this[42].cy = v8;
      this[41].cy = v8;
      this[42].cx = v8;
      this[41].cx = v8;
      v10 = CImage::Create((struct CImage **)&this[43]);
      v3 = v10;
      if ( v10 >= 0 )
      {
        v11 = (struct CVisual **)&this[44];
        v12 = CImage::Create((struct CImage **)&this[44]);
        v3 = v12;
        if ( v12 >= 0 )
        {
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v9, 0LL, 0, 1);
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v11, 0LL, 0, 1);
          CVisual::SetSize(*v9, this + 41);
          CVisual::SetSize(*v11, this + 42);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x44u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x43u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x25u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x22u);
  }
  return v3;
}
