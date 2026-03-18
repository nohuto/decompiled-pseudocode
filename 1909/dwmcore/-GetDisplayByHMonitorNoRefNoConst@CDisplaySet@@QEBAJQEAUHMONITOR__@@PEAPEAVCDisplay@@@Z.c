/*
 * XREFs of ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800DDA88
 * Callers:
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x18002B368 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800990E0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A64B8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayByHMonitorNoRefNoConst(CDisplaySet *this, HMONITOR a2, struct CDisplay **a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  __int64 v6; // r11

  *a3 = 0LL;
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18);
  v5 = -2147024809;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 6);
    while ( 1 )
    {
      this = *(CDisplaySet **)(v6 + 8 * v3);
      if ( *((HMONITOR *)this + 2) == a2 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        goto LABEL_7;
    }
    v5 = 0;
    *a3 = this;
  }
  else
  {
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x3BCu, 0LL);
  }
  return v5;
}
