/*
 * XREFs of ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x18014189C
 * Callers:
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUPointerInputInfo@@@Z @ 0x1800BCC04 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUPointerInputInfo@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@_N@Z @ 0x1800BD3C4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardModifierState::GetCurrentKeyboardModifierState(
        KeyboardModifierState *this,
        unsigned int *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *((_DWORD *)this + 20);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboar"
               "dmodifierstate.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
