/*
 * XREFs of ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800822EC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bf22b92f2cb2d42308eb733f93f10539__void__MIT_INPUT_INTEROP_MESSAGE_const_____ptr64_::_Do_call @ 0x180085CB0 (std--_Func_impl_no_alloc__lambda_bf22b92f2cb2d42308eb733f93f10539__void__MIT_INPUT__ea_180085CB0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180083E6C (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessInteropCallback(
        Win32kInterop *this,
        const struct _MIT_INPUT_INTEROP_MESSAGE *a2,
        __int64 a3,
        const char *a4)
{
  _BYTE v6[48]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xED,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        a4);
      JUMPOUT(0x1800823A5LL);
    }
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, L"MIT_INPUT_INTEROP_HOVER", 0LL);
    Win32kInterop::s_pfnMTCallback(a2, 0LL);
  }
  else
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, L"MIT_INPUT_INTEROP_MTCALLBACK", 0LL);
    Win32kInterop::DoConvergedMTCallback(this, a2);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v6);
}
