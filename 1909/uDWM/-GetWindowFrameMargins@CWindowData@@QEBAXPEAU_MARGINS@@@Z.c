/*
 * XREFs of ?GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x180090CCC
 * Callers:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18008CCB4 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?RoundToNearestInt@@YAHN@Z @ 0x18008DC10 (-RoundToNearestInt@@YAHN@Z.c)
 */

void __fastcall CWindowData::GetWindowFrameMargins(CWindowData *this, struct _MARGINS *a2, __int64 a3)
{
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rcx
  int SystemMetricsForDpi; // edi
  int v8; // eax

  if ( (*((_BYTE *)this + 102) & 0xC0) == 0xC0 )
  {
    v4 = *((unsigned int *)this + 81);
    v5 = *((_BYTE *)this + 104) >= 0;
    v6 = 51LL;
    if ( v5 )
      v6 = 4LL;
    SystemMetricsForDpi = GetSystemMetricsForDpi(v6, v4, a3);
    a2->cyTopHeight = SystemMetricsForDpi;
  }
  else
  {
    SystemMetricsForDpi = a2->cyTopHeight;
  }
  v8 = RoundToNearestInt(*((double *)CDesktopManager::s_pDesktopManagerInstance + 60));
  a2->cyBottomHeight = v8;
  a2->cxLeftWidth = v8;
  a2->cxRightWidth = v8;
  a2->cyTopHeight = SystemMetricsForDpi + v8;
}
