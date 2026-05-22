/*
 * XREFs of ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z @ 0x1800AA5DC
 * Callers:
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x1800A9B8C (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z @ 0x1800A8AB8 (--4-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z.c)
 *     ??_GDeviceAttachEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8BAC (--_GDeviceAttachEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIController::NotifyDeviceAttach(
        WGIController *this,
        struct IRawInputProvider *a2,
        struct GameInputDeviceInfo *a3)
{
  unsigned int v6; // esi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  struct GameInputDeviceInfo *v9; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a2 )
  {
    v7 = (__int64 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      v7[4] = 0LL;
      *v7 = 0LL;
      v7[1] = 0LL;
      v7[2] = 0LL;
      v7[3] = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v8, (__int64 *)this + 12);
      Microsoft::WRL::ComPtr<IRawInputProvider>::operator=(v8 + 1, (__int64)a2);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v8 + 2, (__int64 *)this + 14);
      v9 = (struct GameInputDeviceInfo *)v8[3];
      v8[3] = (__int64)a3;
      a3 = v9;
      v8[4] = *((_QWORD *)this + 23);
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(WGIController::DeviceAttachEventArgs *), __int64 *, __int64))(**((_QWORD **)this + 13) + 136LL))(
              *((_QWORD *)this + 13),
              WGIController::NotifyDeviceAttachCallback,
              v8,
              4LL);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1130LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      v6 = 0;
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
  }
  if ( a3 )
    operator delete(a3, (const struct std::nothrow_t *)0x158);
  return v6;
}
