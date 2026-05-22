/*
 * XREFs of ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800AAA78
 * Callers:
 *     ?EmitShellButtonFromConsoleFunctionMap@WGIController@@AEAAXPEAE@Z @ 0x1800350C4 (-EmitShellButtonFromConsoleFunctionMap@WGIController@@AEAAXPEAE@Z.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x1800AA2A0 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 *     ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x1800AAF80 (-OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatu.c)
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800AB210 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800A868C (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??_GInputReportEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8CAC (--_GInputReportEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WGIController::NotifyInputReport(WGIController *this, struct InputInfo *a2)
{
  unsigned int v4; // edi
  void **v5; // rax
  __int64 v6; // r8
  const char *v7; // r9
  __int64 *v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a2 )
  {
    v5 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = (__int64 *)v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(v5 + 2, (int *)a2, v6, v7);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v8, (__int64 *)this + 12);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v8 + 1, (__int64 *)this + 14);
      *((_DWORD *)v8 + 6) = *((_DWORD *)this + 43);
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(WGIController::InputReportEventArgs *), __int64 *, __int64))(**((_QWORD **)this + 13) + 136LL))(
             *((_QWORD *)this + 13),
             WGIController::NotifyInputReportCallback,
             v8,
             4LL);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1221LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      return 0;
    }
    else
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
  }
  return v4;
}
