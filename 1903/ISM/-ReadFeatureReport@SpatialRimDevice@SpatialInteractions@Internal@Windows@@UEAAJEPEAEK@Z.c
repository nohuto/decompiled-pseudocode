/*
 * XREFs of ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800A6050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x180099804 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18009A120 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     _lambda_c7e76fd1f039da0c9fddfb2989c999ee_::operator() @ 0x1800A5E24 (_lambda_c7e76fd1f039da0c9fddfb2989c999ee_--operator().c)
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800A60EC (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::ReadFeatureReport(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        unsigned __int8 a2,
        unsigned __int8 *a3,
        int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  RawInputProvidersTracing *v8; // rcx
  _QWORD v10[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int8 v12; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int8 *v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  if ( a4 )
  {
    v10[2] = this;
    v10[0] = &v13;
    v10[1] = &v12;
    v10[3] = &v14;
    v5 = lambda_c7e76fd1f039da0c9fddfb2989c999ee_::operator()((__int64)v10);
    if ( RawInputProvidersTracing::IsEnabled(v6) )
    {
      wil::details::static_lazy<RawInputProvidersTracing>::get(
        v7,
        (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
      RawInputProvidersTracing::ReadFeatureReport_(v8, v5, *((_DWORD *)this + 12), v12);
    }
  }
  else
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x80070057LL);
  }
  return v5;
}
