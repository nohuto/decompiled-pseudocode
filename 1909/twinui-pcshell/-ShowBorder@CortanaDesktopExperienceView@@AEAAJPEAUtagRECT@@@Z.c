/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18007A7E0
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180041304 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800426C8 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180024F98 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180043D70 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x18004487C (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x18007AA10 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18007AA94 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801B6DC0 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowBorder(CortanaDesktopExperienceView *this, struct tagRECT *a2)
{
  CortanaFlightingHelpers *v4; // rcx
  char v5; // si
  bool v6; // al
  unsigned int v7; // ecx
  int v8; // edx
  LANGID ThreadUILanguage; // ax
  bool v11; // r15
  HMONITOR v12; // rax
  int MonitorInformation; // eax
  unsigned int v14; // edi
  HWND Hwnd; // rax
  int y; // r8d
  int x; // edx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 BorderFlagFromStuckEdge; // rdx
  __int64 v21; // rcx
  void (__fastcall *v22)(__int64, __int64, __int64, __int64, struct tagRECT *); // rax
  LONG left; // ecx
  bool v24; // [rsp+44h] [rbp-45h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v26[4]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v28; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v29; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v30; // [rsp+90h] [rbp+7h] BYREF
  RECT rc; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v5 = 1;
  v6 = !IsSearchAndCortanaSplitEnabled()
    && (CortanaFlightingHelpers::IsWideQFDeltaEnabled(v4) || *((_BYTE *)this + 259));
  v7 = *((_DWORD *)this + 36);
  if ( v7 > 9 || (v8 = 582, !_bittest(&v8, v7)) || *((_BYTE *)this + 257) || v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 128LL))(
      *((_QWORD *)this + 21),
      0LL,
      0LL);
    v5 = 0;
LABEL_6:
    *((_BYTE *)this + 241) = v5;
    return 0LL;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v11 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
  CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
  v12 = MonitorFromRect(&rc, 0);
  if ( v12 )
  {
    MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                           this,
                           v12,
                           &v29,
                           &v28,
                           &v27,
                           (enum EDGEUI_TRAYSTUCKPLACE *)v26,
                           &v24);
    v14 = MonitorInformation;
    if ( MonitorInformation >= 0 )
    {
      v30 = v28;
      if ( v26[0] )
      {
        if ( v26[0] == 1 )
        {
          if ( v27.bottom > v28.top )
            v30.top = v27.bottom;
        }
        else if ( v26[0] == 2 )
        {
          if ( v27.left < v28.right )
            v30.right = v27.left;
        }
        else if ( v26[0] == 3 && v27.top < v28.bottom )
        {
          v30.bottom = v27.top;
        }
      }
      else
      {
        left = v30.left;
        if ( v27.right > v28.left )
          left = v27.right;
        v30.left = left;
      }
      Point.x = v30.left;
      Point.y = v30.top;
      if ( a2 )
      {
        x = v30.left - a2->left;
        y = v30.top - a2->top;
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
      OffsetRect(&v30, x - v30.left, y - v30.top);
      LOBYTE(v18) = *((_BYTE *)this + 240);
      LOBYTE(v19) = v11;
      BorderFlagFromStuckEdge = (unsigned int)CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                                this,
                                                v26[0],
                                                v19,
                                                v18);
      *(float *)&v27.left = (float)v30.left;
      v21 = *((_QWORD *)this + 21);
      *(float *)&v27.top = (float)v30.top;
      *(float *)&v27.right = (float)(v30.right - v30.left);
      v22 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v21 + 136LL);
      *(float *)&v27.bottom = (float)(v30.bottom - v30.top);
      v22(v21, BorderFlagFromStuckEdge, 1LL, 0x1000000LL, &v27);
      goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB96,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
