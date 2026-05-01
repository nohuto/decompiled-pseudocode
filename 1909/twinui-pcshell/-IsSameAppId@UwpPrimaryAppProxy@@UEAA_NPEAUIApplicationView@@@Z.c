/*
 * XREFs of ?IsSameAppId@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1803BCC50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall UwpPrimaryAppProxy::IsSameAppId(UwpPrimaryAppProxy *this, struct IApplicationView *a2)
{
  _QWORD *v3; // rdi
  char v4; // bl
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = (_QWORD *)((char *)this + 8);
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
    &v7);
  v4 = 0;
  if ( v7 )
  {
    v6 = 0;
    if ( v3[3] >= 8uLL )
      v3 = (_QWORD *)*v3;
    if ( (*(int (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)a2 + 152LL))(a2, v3, &v6) >= 0
      && v6 )
    {
      v4 = 1;
    }
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
  return v4;
}
