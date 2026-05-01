/*
 * XREFs of ?RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x180220F3C
 * Callers:
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180223544 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::RemoveClientRequestedNavigationTypeFromPropertySet(
        __int64 (__fastcall ***this)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 (__fastcall *v3)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64); // rdi
  __int64 v10[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10[1] = -2LL;
  v10[0] = 0LL;
  v3 = **this;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  v4 = v3((Windows::Internal::Shell::Holographic *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 27LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v7 = v10[0];
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10[0] + 88LL);
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v4 = v8(v7, v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 28LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return v5;
}
