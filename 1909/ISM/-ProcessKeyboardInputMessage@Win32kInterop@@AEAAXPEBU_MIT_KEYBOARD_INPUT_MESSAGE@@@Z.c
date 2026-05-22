/*
 * XREFs of ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BDCA4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800BEFE0 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_1800BEFE0.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x1800BB8F0 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BC86C (-DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?ReceiveKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BE65C (-ReceiveKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 */

void __fastcall Win32kInterop::ProcessKeyboardInputMessage(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2)
{
  int v4; // eax
  int v5[88]; // [rsp+20h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  memset_0(v5, 0, sizeof(v5));
  v5[0] = 4;
  v5[6] = 352;
  InputTraceLogging::ISM::ReceiveKeyboardInput(a2);
  if ( Win32kInterop::CreateKeyboardInputInfo(this, a2, (struct KeyboardInputInfo *)v5) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), v5);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        549LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v4);
      JUMPOUT(0x1800BDD66LL);
    }
  }
  else
  {
    InputTraceLogging::ISM::DropKeyboardInput(a2);
  }
}
