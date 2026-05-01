/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180014C40
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800259FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180016558 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180016A9C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x180188C1C (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180188E2C (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowBorder(CortanaDesktopExperienceView *this, struct tagRECT *a2)
{
  char v4; // si
  bool v5; // al
  unsigned int v6; // ecx
  int v7; // edx
  LANGID ThreadUILanguage; // ax
  int v10; // eax
  float v11; // xmm0_4
  float v12; // xmm1_4
  bool v13; // zf
  LONG v14; // eax
  bool v15; // r15
  float v16; // xmm0_4
  LONG v17; // eax
  float v18; // xmm1_4
  HMONITOR v19; // rax
  int MonitorInformation; // eax
  unsigned int v21; // edi
  LONG left; // ecx
  int x; // edx
  int y; // r8d
  HWND Hwnd; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 BorderFlagFromStuckEdge; // rdx
  __int64 v29; // rcx
  void (__fastcall *v30)(__int64, __int64, __int64, __int64, struct tagRECT *); // rax
  int v31; // [rsp+20h] [rbp-69h]
  int v32; // [rsp+20h] [rbp-69h]
  bool v33; // [rsp+44h] [rbp-45h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v35[4]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v36; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v37; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v38; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v39; // [rsp+90h] [rbp+7h] BYREF
  RECT rc; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = 1;
  v5 = CortanaFlightingHelpers::IsWideQFDeltaEnabled(this) || *((_BYTE *)this + 235);
  v6 = *((_DWORD *)this + 36);
  if ( v6 > 9 || (v7 = 582, !_bittest(&v7, v6)) || *((_BYTE *)this + 233) || v5 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 128LL))(
      *((_QWORD *)this + 21),
      0LL,
      0LL);
    v4 = 0;
LABEL_7:
    *((_BYTE *)this + 225) = v4;
    return 0LL;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v10 = IsBiDiLocale(ThreadUILanguage);
  v11 = *((float *)this + 49);
  v12 = *((float *)this + 50);
  v13 = v10 == 0;
  v14 = (int)v11;
  v15 = !v13;
  v16 = v11 + *((float *)this + 51);
  rc.left = v14;
  v17 = (int)v12;
  v18 = v12 + *((float *)this + 52);
  rc.top = v17;
  rc.right = (int)v16;
  rc.bottom = (int)v18;
  v19 = MonitorFromRect(&rc, 0);
  if ( !v19 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL,
      v31);
    return 2147549183LL;
  }
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         v19,
                         &v38,
                         &v37,
                         &v36,
                         (enum EDGEUI_TRAYSTUCKPLACE *)v35,
                         &v33);
  v21 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v39 = v37;
    if ( v35[0] )
    {
      if ( v35[0] == 1 )
      {
        if ( v36.bottom > v37.top )
          v39.top = v36.bottom;
      }
      else if ( v35[0] == 2 )
      {
        if ( v36.left < v37.right )
          v39.right = v36.left;
      }
      else if ( v35[0] == 3 && v36.top < v37.bottom )
      {
        v39.bottom = v36.top;
      }
    }
    else
    {
      left = v39.left;
      if ( v36.right > v37.left )
        left = v36.right;
      v39.left = left;
    }
    Point.x = v39.left;
    Point.y = v39.top;
    if ( a2 )
    {
      x = v39.left - a2->left;
      y = v39.top - a2->top;
      Point.y = y;
      Point.x = x;
    }
    else
    {
      Hwnd = CortanaDesktopExperienceView::GetHwnd(this);
      ScreenToClient(Hwnd, &Point);
      y = Point.y;
      x = Point.x;
    }
    OffsetRect(&v39, x - v39.left, y - v39.top);
    LOBYTE(v26) = *((_BYTE *)this + 224);
    LOBYTE(v27) = v15;
    BorderFlagFromStuckEdge = (unsigned int)CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                              this,
                                              v35[0],
                                              v27,
                                              v26);
    *(float *)&v36.left = (float)v39.left;
    v29 = *((_QWORD *)this + 21);
    *(float *)&v36.top = (float)v39.top;
    *(float *)&v36.right = (float)(v39.right - v39.left);
    v30 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v29 + 136LL);
    *(float *)&v36.bottom = (float)(v39.bottom - v39.top);
    v30(v29, BorderFlagFromStuckEdge, 1LL, 0x1000000LL, &v36);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA43,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)MonitorInformation,
    v32);
  return v21;
}
