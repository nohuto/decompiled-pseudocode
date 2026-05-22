/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076750
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x1800754B4 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180075E24 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007628C (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1800762B8 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077034 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077290 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ @ 0x180077A20 (-ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180078B74 (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
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
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v14; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 275) = *((_QWORD *)a2 + 4);
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    v14 = 0;
    v4 = ControllerProcessor::HandleTaskSwitcherChordedKey(this, a2, &v14);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        637LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    if ( !v14 )
    {
      if ( *((_DWORD *)this + 544) )
      {
        v5 = ControllerProcessor::SendGamepadAsVirtualKeys(this, a2);
        if ( v5 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            648LL,
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
            658LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v6);
          __debugbreak();
        }
        v7 = ControllerProcessor::BuildAndSendMouseInputInfo(this, *((_DWORD *)this + 54), *((_DWORD *)a2 + 18));
        if ( v7 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1180LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v7);
          __debugbreak();
        }
        if ( *((_DWORD *)this + 558) )
        {
          updated = ControllerProcessor::UpdatePointerTimer(this, a2);
          if ( updated < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              671LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)updated);
            __debugbreak();
          }
        }
      }
    }
    memcpy_0((char *)this + 144, a2, 0x7F0uLL);
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    if ( ControllerProcessor::ShouldInjectViaSynthesize(this) )
    {
      v10 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 9488), a2);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          689LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
    else
    {
      v11 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 4736), a2);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          693LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
    }
  }
  else if ( *(char *)a2 < 0 )
  {
    v12 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 3152), a2);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        702LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x180076920LL);
    }
  }
  return 0LL;
}
