/*
 * XREFs of ?NotifyDeviceRemoval@WGIController@@AEAAJXZ @ 0x1800AA9A0
 * Callers:
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x1800AAF68 (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceRemoval(WGIController *this)
{
  __int64 *v2; // rax
  __int64 *v3; // rdi
  unsigned int v4; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v4 = 0;
  if ( v2 )
  {
    v2[2] = 0LL;
    *v2 = 0LL;
    v2[1] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v3, (__int64 *)this + 12);
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v3 + 1, (__int64 *)this + 14);
    v3[2] = *((_QWORD *)this + 23);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(WGIController::DeviceRemovalEventArgs *), __int64 *, __int64))(**((_QWORD **)this + 13) + 136LL))(
           *((_QWORD *)this + 13),
           WGIController::NotifyDeviceRemovalCallback,
           v3,
           4LL);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1172LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
  }
  else
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x8007000ELL);
  }
  return v4;
}
