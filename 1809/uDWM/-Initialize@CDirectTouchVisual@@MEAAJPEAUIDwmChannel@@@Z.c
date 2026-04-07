/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180045D30
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800458F4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013998 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036220 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800387A4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047098 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(struct tagSIZE *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *Theme; // rax
  struct CBitmapSource **v7; // r9
  int v8; // eax
  struct CVisual **v9; // rsi
  struct tagSIZE v10; // rcx
  int v11; // eax
  int inserted; // eax
  int BitmapFromAtlas; // eax

  v4 = CVisual::Initialize((CVisual *)this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x26u);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    v7 = (struct CBitmapSource **)&this[52];
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 324LL) )
    {
      BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, v7);
      v5 = BitmapFromAtlas;
      if ( BitmapFromAtlas < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapFromAtlas, 0x2Cu);
        return v5;
      }
    }
    else
    {
      v8 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v7);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x30u);
        return v5;
      }
    }
    v9 = (struct CVisual **)&this[51];
    v10 = *(struct tagSIZE *)(*(_QWORD *)&this[52] + 24LL);
    this[43].cx = 0;
    this[40] = v10;
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
    v11 = CImage::Create(a2, (struct CImage **)&this[51]);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x44u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)&this[4], *v9, 0LL, 0, 1);
      v5 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x45u);
      }
      else
      {
        CVisual::SetSize(*v9, this + 40);
        this[47] = 0LL;
        this[48] = 0LL;
        this[49] = 0LL;
        LOBYTE(this[35].cx) = 0;
      }
    }
  }
  return v5;
}
