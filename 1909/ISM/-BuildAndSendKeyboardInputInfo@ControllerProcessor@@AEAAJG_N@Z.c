/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180075378
 * Callers:
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800764C0 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180076644 (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@@Z @ 0x180076D94 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GamepadButtons@Input@Gaming@Windo.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180077B30 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180077BE4 (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007628C (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1800762B8 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ @ 0x180077A20 (-ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(ControllerProcessor *this, __int16 a2, char a3)
{
  DWORD TickCount; // ebx
  ControllerProcessor *v7; // rcx
  int v8; // eax
  int v9; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v13; // [rsp+40h] [rbp-C0h]
  int v14; // [rsp+48h] [rbp-B8h]
  __int16 v15; // [rsp+54h] [rbp-ACh]
  __int16 v16; // [rsp+76h] [rbp-8Ah]
  __int64 v17; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v12, 0, 0x160uLL);
  v13 = PerformanceCount;
  v17 = *((_QWORD *)this + 275);
  v16 = 64;
  v14 = 352;
  v12[0] = 4;
  v12[2] = TickCount;
  v15 = a2;
  if ( !a3 )
    v16 = 65;
  if ( ControllerProcessor::ShouldInjectViaSynthesize(v7) )
  {
    v8 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 9488), (struct InputInfo *)v12);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2026LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
  }
  else
  {
    v9 = InjectionDevice::Inject((ControllerProcessor *)((char *)this + 4736), (struct InputInfo *)v12);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2030LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
  return 0LL;
}
