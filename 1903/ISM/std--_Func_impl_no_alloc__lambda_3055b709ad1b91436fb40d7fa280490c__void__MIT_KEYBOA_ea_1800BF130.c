/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800BF130
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180014CE4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800BA870 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BDDF4 (-ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE **a2)
{
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v3; // rbx
  _BYTE v4[48]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v4, L"MITEP_KEYBOARD_INPUT", 0LL);
  Win32kInterop::ProcessKeyboardInputMessage(*(Win32kInterop **)(a1 + 8), v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
