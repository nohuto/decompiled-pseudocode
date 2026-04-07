/*
 * XREFs of ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180016998
 * Callers:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180013E80 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18008FC44 (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushPr.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180013FF0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 */

char __fastcall CDesktopManager::AdjustDesktopWindowSize(HWND a1, struct tagRECT *a2)
{
  char v4; // bl
  struct CWindowData *WindowDataByHwnd; // rax
  struct _RTL_GENERIC_TABLE *v6; // rcx
  _QWORD *v7; // rax
  HWND v8; // rax
  HMONITOR v10; // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v12; // [rsp+30h] [rbp-88h]
  __int128 v13; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+60h] [rbp-58h]
  char v16; // [rsp+68h] [rbp-50h]
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-38h] BYREF

  v4 = 0;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                       a1);
  if ( !WindowDataByHwnd )
    goto LABEL_5;
  v15 = -1LL;
  Buffer[1] = 0LL;
  v12 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 8LL);
  Buffer[0] = *((_QWORD *)WindowDataByHwnd + 15);
  v16 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v7 = RtlLookupElementGenericTable(v6, Buffer);
  v8 = v7 ? (HWND)v7[8] : 0LL;
  if ( a1 == v8 )
  {
    v10 = MonitorFromWindow(0LL, 1u);
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v10, &mi) )
    {
      v4 = 1;
      *a2 = mi.rcMonitor;
    }
  }
  else
  {
LABEL_5:
    *(_QWORD *)&a2->left = 0LL;
  }
  return v4;
}
