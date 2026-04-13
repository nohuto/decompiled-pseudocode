/*
 * XREFs of ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x180075F08
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180073360 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800757CC (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180076E34 (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
        __int64 a1,
        const WCHAR *a2,
        _DWORD *a3,
        bool a4)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int HasKey; // eax
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v19; // [rsp+50h] [rbp+20h] BYREF
  bool v20; // [rsp+68h] [rbp+38h] BYREF

  v20 = a4;
  v7 = *(_DWORD *)(a1 + 16);
  if ( (v7 & 0x80000000) != 0 )
  {
    v8 = v7;
    v9 = 361LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)v8);
    return v7;
  }
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             (_QWORD *)a1,
             a2,
             &v20);
  v7 = HasKey;
  if ( HasKey < 0 )
  {
    v8 = (unsigned int)HasKey;
    v9 = 366LL;
    goto LABEL_3;
  }
  if ( !v20 )
  {
    *a3 = 0;
    return 0;
  }
  v19 = 0LL;
  v11 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
          a1,
          a2,
          &v19);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 376LL;
    goto LABEL_9;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 88LL))(v19, a3);
  v7 = v15;
  if ( v15 >= 0 )
  {
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return 0;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
    (const char *)(unsigned int)v15);
  v12 = v7;
  v13 = 377LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
    (const char *)v12);
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v7;
}
