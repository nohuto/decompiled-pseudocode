/*
 * XREFs of ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x180245B1C
 * Callers:
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1802463C8 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800AE8B0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::GetPrimaryHMonitor(CHolographicInteropTexture *this, HMONITOR *a2)
{
  signed int CurrentDisplaySet; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int PrimaryDisplay; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CurrentDisplaySet, 0x11Cu, 0LL);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v10, &v9);
    v5 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, PrimaryDisplay, 0x11Du, 0LL);
    else
      *a2 = *(HMONITOR *)(*((_QWORD *)v9 + 19) + 16LL);
  }
  ReleaseInterface<CD3DSurface>((__int64 *)&v9);
  ReleaseInterface<CDisplaySet const>(&v10);
  return v5;
}
