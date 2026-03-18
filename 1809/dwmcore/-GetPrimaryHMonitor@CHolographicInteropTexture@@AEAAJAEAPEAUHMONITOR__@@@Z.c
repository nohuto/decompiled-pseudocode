/*
 * XREFs of ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x18020DF8C
 * Callers:
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x18020E860 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18008C5E4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::GetPrimaryHMonitor(CHolographicInteropTexture *this, HMONITOR *a2)
{
  int CurrentDisplaySet; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int PrimaryDisplay; // eax
  __int64 v7; // rcx
  struct CDisplay *v9; // [rsp+40h] [rbp+8h] BYREF
  CDisplaySet *v10; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v10);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CurrentDisplaySet, 0x127u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v10, &v9);
    v5 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, PrimaryDisplay, 0x128u);
    else
      *a2 = *(HMONITOR *)(*((_QWORD *)v9 + 19) + 16LL);
  }
  ReleaseInterface<CD3DSurface>((__int64 *)&v9);
  ReleaseInterface<CDisplaySet const>(&v10);
  return v5;
}
