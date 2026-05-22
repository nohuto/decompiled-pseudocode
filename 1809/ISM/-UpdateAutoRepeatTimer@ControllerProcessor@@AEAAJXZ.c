/*
 * XREFs of ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180036EF4
 * Callers:
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180033860 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180034B5C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036630 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x1800369BC (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::UpdateAutoRepeatTimer(ControllerProcessor *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 216) + 24LL))(*((_QWORD *)this + 216), &v7);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x180036FC5LL);
  }
  if ( *((_QWORD *)this + 9) )
  {
    if ( !v7 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 216) + 80LL))(
             *((_QWORD *)this + 216),
             6640000LL,
             830000LL);
      if ( v3 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xA28,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v3);
        __debugbreak();
      }
    }
  }
  else if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 216) + 96LL))(*((_QWORD *)this + 216));
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA2D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
  }
  return 0LL;
}
