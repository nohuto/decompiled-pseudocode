/*
 * XREFs of ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x1800718BC
 * Callers:
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180073194 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180073360 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180077FD0 (std--_Func_impl_std--_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std_ea_180077FD0.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800786F0 (std--_Func_impl_std--_Callable_obj__lambda_c4c3923748e77b314a455aaed0b87e40__0__std_ea_1800786F0.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800757CC (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?GetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUHSTRING__@@_NPEAU4@@Z @ 0x180075E08 (-GetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3.c)
 */

char __fastcall Windows::Services::TargetedContent::Internal::GetStringValue(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        const wchar_t *a3,
        HSTRING *a4)
{
  int HasKey; // eax
  int String; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v11; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v11 = 0;
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             this,
             a2,
             &v11);
  if ( HasKey < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)HasKey);
    __debugbreak();
  }
  if ( v11 )
  {
    String = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetString(
               this,
               a2,
               a3);
    if ( String < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)String);
      JUMPOUT(0x18007194ALL);
    }
  }
  return v11;
}
