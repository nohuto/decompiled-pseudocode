/*
 * XREFs of ?NotifyDeviceAttachCallback@WGIController@@CAJPEAX@Z @ 0x1800AA770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??_GDeviceAttachEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8BAC (--_GDeviceAttachEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceAttachCallback(unsigned int **this)
{
  __int64 v2; // rdx
  unsigned int *v3; // rcx
  unsigned int v4; // edi
  int v5; // eax
  unsigned int *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !this )
  {
    v2 = 1142LL;
LABEL_7:
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
    v2 = 1143LL;
    goto LABEL_7;
  }
  if ( !this[1] )
  {
    v2 = 1144LL;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(*(_QWORD *)v3 + 40LL))(v3, this[4]);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1148LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = this[2];
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, unsigned int *))(*(_QWORD *)v6 + 24LL))(
           v6,
           *this[4],
           this[3]);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1154LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  v4 = 0;
LABEL_14:
  if ( this )
    WGIController::DeviceAttachEventArgs::`scalar deleting destructor'((WGIController::DeviceAttachEventArgs *)this);
  return v4;
}
