/*
 * XREFs of ?NotifyDeviceRemovalCallback@WGIController@@CAJPEAX@Z @ 0x1800AA970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??_GDeviceRemovalEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8C44 (--_GDeviceRemovalEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceRemovalCallback(unsigned int **this)
{
  __int64 v2; // rdx
  unsigned int *v3; // rcx
  unsigned int v4; // edi
  int v5; // eax
  unsigned int *v6; // rcx
  int v7; // eax
  unsigned int *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !this )
  {
    v2 = 1184LL;
LABEL_5:
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_14;
  }
  v3 = *this;
  if ( !v3 )
  {
    v2 = 1185LL;
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, this[2]);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1187LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = this[1];
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, *this[2]);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1192LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  v8 = this[2];
  if ( v8 )
  {
    operator delete(v8, (const struct std::nothrow_t *)0x620);
    this[2] = 0LL;
  }
  v4 = 0;
LABEL_14:
  if ( this )
    WGIController::DeviceRemovalEventArgs::`scalar deleting destructor'((WGIController::DeviceRemovalEventArgs *)this);
  return v4;
}
