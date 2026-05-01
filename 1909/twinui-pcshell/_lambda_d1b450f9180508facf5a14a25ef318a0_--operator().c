/*
 * XREFs of _lambda_d1b450f9180508facf5a14a25ef318a0_::operator() @ 0x180270950
 * Callers:
 *     ?SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180272C90 (-SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@I.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@PEAPEAUIRandomAccessStreamReference@456@@Z @ 0x180271068 (-CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandom.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d1b450f9180508facf5a14a25ef318a0_::operator()(HICON **a1)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = CreateRandomAccessStreamReferenceFromHIcon(
         (struct IWICImagingFactory *)(*a1)[16],
         *a1[1],
         (struct Windows::Storage::Streams::IRandomAccessStreamReferenceStatics *)(*a1)[15],
         &v7);
  if ( v2 >= 0 )
  {
    v6 = 0LL;
    v3 = (__int64 *)(*a1)[17];
    v4 = *v3;
    v6 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Storage::Streams::IRandomAccessStreamReference *, __int64 *))(v4 + 136))(
           v3,
           v7,
           &v6);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1[2] + 144LL))(*a1[2], v6);
      if ( v2 >= 0 )
        v2 = 0;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v6);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v7);
  return (unsigned int)v2;
}
