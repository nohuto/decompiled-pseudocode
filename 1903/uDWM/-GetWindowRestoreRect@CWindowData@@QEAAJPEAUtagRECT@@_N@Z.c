/*
 * XREFs of ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18009109C
 * Callers:
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180081D60 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008D460 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18009374C (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180023A24 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FD7A (floor_0.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 */

__int64 __fastcall CWindowData::GetWindowRestoreRect(CWindowData *this, struct tagRECT *a2, char a3)
{
  unsigned int v3; // edi
  CWindowList *v7; // rcx
  signed int LastError; // eax
  float v9; // xmm2_4
  int v10; // eax
  LONG bottom; // ebx
  double v12; // xmm0_8
  int v13; // ebx
  int v14; // eax
  double v15; // xmm0_8
  HMONITOR v16; // rbx
  RECT rcWork; // xmm0
  __int64 v18; // rcx
  HMONITOR v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-49h]
  int v22; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+34h] [rbp-35h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+38h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp-1h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) == 0 )
  {
    *a2 = *((struct tagRECT *)this + 3);
    return v3;
  }
  wndpl.length = 44;
  memset_0(&wndpl.flags, 0, 0x28uLL);
  SetLastError(0);
  if ( GetWindowPlacement(*((HWND *)this + 5), &wndpl) )
  {
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 76) - 1.0)) & _xmm);
    if ( v9 >= 0.0000011920929 )
    {
      CWindowList::GetPhysicalPtFromLogical(v7, this, &wndpl.rcNormalPosition, &v22, &v23);
      v10 = 0;
      bottom = wndpl.rcNormalPosition.bottom;
      if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left >= 0 )
        v10 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
      v12 = floor_0((float)((float)v10 * *((float *)this + 76)) + 0.5);
      v13 = bottom - wndpl.rcNormalPosition.top;
      wndpl.rcNormalPosition.left = v22 + (int)v12;
      v14 = 0;
      if ( v13 >= 0 )
        v14 = v13;
      v15 = floor_0((float)((float)v14 * *((float *)this + 76)) + 0.5);
      wndpl.rcNormalPosition.right = v23 + (int)v15;
    }
    SetLastError(0);
    v16 = MonitorFromRect(&wndpl.rcNormalPosition, 1u);
    if ( v16 )
    {
      if ( (wndpl.flags & 2) != 0 )
      {
        mi.cbSize = 40;
        SetLastError(0);
        if ( !GetMonitorInfoW(v16, &mi) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v21 = 8283;
          goto LABEL_7;
        }
        rcWork = mi.rcWork;
      }
      else
      {
        *a2 = wndpl.rcNormalPosition;
        if ( !a3 )
          return v3;
        v18 = *((_QWORD *)this + 54);
        if ( !v18 )
          return v3;
        v19 = MonitorFromRect((LPCRECT)(*(_QWORD *)(v18 + 32) + 48LL), 0);
        if ( !v19 || v19 != v16 )
          return v3;
        rcWork = *(RECT *)(*(_QWORD *)(*((_QWORD *)this + 54) + 32LL) + 48LL);
      }
      *a2 = rcWork;
      return v3;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v21 = 8277;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v21 = 8250;
  }
LABEL_7:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v3 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, v21);
  return v3;
}
