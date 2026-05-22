/*
 * XREFs of ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003031C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180030728 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030ADC (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180032D9C (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x180034170 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x1800341D0 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800370EC (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180034500 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800346C0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180034944 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180034B5C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 */

void __fastcall ControllerProcessor::UpdateNavigationState(__int64 a1, int a2, struct tagRECT *a3, struct tagPOINT *a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int updated; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_DWORD *)(a1 + 1720);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        if ( a2 )
        {
          if ( a2 == 3 )
            *(_DWORD *)(a1 + 1720) = 2;
          return;
        }
        v8 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x360,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v8);
          __debugbreak();
        }
LABEL_36:
        *(_DWORD *)(a1 + 1720) = 1;
        return;
      }
      if ( a2 )
      {
        if ( a2 != 1 )
          return;
LABEL_13:
        *(_DWORD *)(a1 + 1720) = 3;
        return;
      }
      v9 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x34C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      *(_DWORD *)(a1 + 1720) = 0;
      v10 = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x34E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
    else if ( a2 )
    {
      v11 = a2 - 2;
      if ( !v11 )
      {
        *(_DWORD *)(a1 + 1776) = 0;
        *(_QWORD *)(a1 + 1856) = 0LL;
        *(_DWORD *)(a1 + 1852) = 0;
        *(_QWORD *)(a1 + 1788) = 0LL;
        *(_BYTE *)(a1 + 1844) = 0;
        goto LABEL_13;
      }
      if ( v11 == 1 )
      {
        if ( a3 && a4 )
        {
          *(_BYTE *)(a1 + 1824) = 1;
          *(struct tagRECT *)(a1 + 1808) = *a3;
          v12 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, (struct tagRECT *)(a1 + 1760), a4);
          if ( v12 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x337,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)v12);
            __debugbreak();
          }
        }
        else
        {
          *(_BYTE *)(a1 + 1824) = 0;
        }
        v13 = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x33E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        *(_DWORD *)(a1 + 1720) = 0;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationParameters((ControllerProcessor *)a1, a3);
      if ( updated < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x327,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)updated);
        __debugbreak();
      }
    }
  }
  else if ( a2 )
  {
    v15 = a2 - 1;
    if ( !v15 )
    {
      v17 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x312,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v17);
        JUMPOUT(0x1800344F6LL);
      }
      goto LABEL_36;
    }
    if ( v15 == 1 )
    {
      v16 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x318,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      *(_DWORD *)(a1 + 1720) = 2;
      *(_DWORD *)(a1 + 1776) = 0;
      *(_QWORD *)(a1 + 1856) = 0LL;
      *(_DWORD *)(a1 + 1852) = 0;
      *(_QWORD *)(a1 + 1788) = 0LL;
      *(_BYTE *)(a1 + 1844) = 0;
    }
  }
  else
  {
    v18 = ControllerProcessor::UpdateNavigationParameters((ControllerProcessor *)a1, a3);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x30D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
  }
}
