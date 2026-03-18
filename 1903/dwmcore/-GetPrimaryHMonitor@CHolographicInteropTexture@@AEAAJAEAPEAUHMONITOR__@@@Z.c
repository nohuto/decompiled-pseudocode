/*
 * XREFs of ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x18024722C
 * Callers:
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x180247AD8 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18002E32C (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::GetPrimaryHMonitor(CHolographicInteropTexture *this, HMONITOR *a2)
{
  signed int CurrentDisplaySet; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int PrimaryDisplay; // eax
  __int64 v7; // rcx
  unsigned int v8; // edx
  struct CDisplay *v10; // [rsp+40h] [rbp+8h] BYREF
  CDisplaySet *v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CurrentDisplaySet, 0x11Cu, 0LL);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v11, &v10);
    v5 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, PrimaryDisplay, 0x11Du, 0LL);
    else
      *a2 = *(HMONITOR *)(*((_QWORD *)v10 + 19) + 16LL);
  }
  ReleaseInterface<CD3DSurface>((__int64 *)&v10);
  ReleaseInterface<CDisplaySet const>(&v11, v8);
  return v5;
}
