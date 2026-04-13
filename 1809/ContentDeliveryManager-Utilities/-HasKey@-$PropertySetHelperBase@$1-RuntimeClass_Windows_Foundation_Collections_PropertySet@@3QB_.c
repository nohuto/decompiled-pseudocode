/*
 * XREFs of ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x180073E00
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18006F6D8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18006FF44 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800719FC (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x180074538 (-GetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
        _QWORD *a1,
        const WCHAR *a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rcx
  char v11[8]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-50h] BYREF
  const WCHAR *v13[3]; // [rsp+30h] [rbp-48h] BYREF
  char v14[32]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13[1] = (const WCHAR *)-2LL;
  v13[0] = a2;
  *a3 = 0;
  v12 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v13[2] = 0LL;
    v6 = v12;
    v7 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v14, v13) + 24);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char *))(*v6 + 64LL))(v6, v7, v11);
    v5 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v11[0] != 0;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
        (const char *)(unsigned int)v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v4);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 16LL))(v9, *v9);
  }
  return v5;
}
