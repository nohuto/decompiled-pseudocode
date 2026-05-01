/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18003D6FC
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18003DFD4 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003F398 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18003BAD4 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180040A08 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180040A40 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x180041548 (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800824D4 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x180082588 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180197E90 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
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
  int v24; // [rsp+20h] [rbp-69h]
  int v25; // [rsp+20h] [rbp-69h]
  bool v26; // [rsp+44h] [rbp-45h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v28[4]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v30; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v31; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v32; // [rsp+90h] [rbp+7h] BYREF
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
                           &v31,
                           &v30,
                           &v29,
                           (enum EDGEUI_TRAYSTUCKPLACE *)v28,
                           &v26);
    v14 = MonitorInformation;
    if ( MonitorInformation >= 0 )
    {
      v32 = v30;
      if ( v28[0] )
      {
        if ( v28[0] == 1 )
        {
          if ( v29.bottom > v30.top )
            v32.top = v29.bottom;
        }
        else if ( v28[0] == 2 )
        {
          if ( v29.left < v30.right )
            v32.right = v29.left;
        }
        else if ( v28[0] == 3 && v29.top < v30.bottom )
        {
          v32.bottom = v29.top;
        }
      }
      else
      {
        left = v32.left;
        if ( v29.right > v30.left )
          left = v29.right;
        v32.left = left;
      }
      Point.x = v32.left;
      Point.y = v32.top;
      if ( a2 )
      {
        x = v32.left - a2->left;
        y = v32.top - a2->top;
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
      OffsetRect(&v32, x - v32.left, y - v32.top);
      LOBYTE(v18) = *((_BYTE *)this + 240);
      LOBYTE(v19) = v11;
      BorderFlagFromStuckEdge = (unsigned int)CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                                this,
                                                v28[0],
                                                v19,
                                                v18);
      *(float *)&v29.left = (float)v32.left;
      v21 = *((_QWORD *)this + 21);
      *(float *)&v29.top = (float)v32.top;
      *(float *)&v29.right = (float)(v32.right - v32.left);
      v22 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v21 + 136LL);
      *(float *)&v29.bottom = (float)(v32.bottom - v32.top);
      v22(v21, BorderFlagFromStuckEdge, 1LL, 0x1000000LL, &v29);
      goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBAA,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v25);
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA3,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL,
      v24);
    return 2147549183LL;
  }
}
