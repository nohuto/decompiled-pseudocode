/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180033F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180033C10 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x180034DF4 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036210 (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036630 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x1800369BC (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::OnInputReport(ControllerProcessor *this, struct InputInfo *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int updated; // eax
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v13; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 218) = *((_QWORD *)a2 + 61);
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    v13 = 0;
    v4 = ControllerProcessor::HandleTaskSwitcherChordedKey(this, a2, &v13);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    if ( !v13 )
    {
      if ( *((_DWORD *)this + 430) )
      {
        v5 = ControllerProcessor::SendGamepadAsVirtualKeys(this, a2);
        if ( v5 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x278,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v5);
          __debugbreak();
        }
      }
      else
      {
        v6 = ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(this, a2);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x282,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v6);
          __debugbreak();
        }
        v7 = ControllerProcessor::BuildAndSendMouseInputInfo(
               this,
               *((unsigned int *)this + 162),
               *((unsigned int *)a2 + 132));
        if ( v7 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x487,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v7);
          __debugbreak();
        }
        if ( *((_DWORD *)this + 444) )
        {
          updated = ControllerProcessor::UpdatePointerTimer(this, a2);
          if ( updated < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x28F,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)updated);
            __debugbreak();
          }
        }
      }
    }
    memcpy_0((char *)this + 120, a2, 0x640uLL);
  }
  else
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      if ( *((_BYTE *)this + 4680) )
      {
        *((_DWORD *)a2 + 1) = *((_DWORD *)this + 924);
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 461) + 24LL))(*((_QWORD *)this + 461));
        if ( v10 >= 0 )
          return 0LL;
      }
      else
      {
        v10 = -2147418113;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x180034166LL);
    }
    if ( *(char *)a2 < 0 )
    {
      if ( *((_BYTE *)this + 3680) )
      {
        *((_DWORD *)a2 + 1) = *((_DWORD *)this + 674);
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 336) + 24LL))(*((_QWORD *)this + 336));
        if ( v11 >= 0 )
          return 0LL;
      }
      else
      {
        v11 = -2147418113;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  return 0LL;
}
