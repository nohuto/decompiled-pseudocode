/*
 * XREFs of _lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator() @ 0x180075348
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_e34527cb48b3e2822e62a7657f7a4fcf__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180078210 (std--_Func_impl_std--_Callable_obj__lambda_e34527cb48b3e2822e62a7657f7a4fcf__0__std_ea_180078210.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180071204 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180073360 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800AE0F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator()(__int64 a1, HSTRING a2, int a3, int a4)
{
  LPCWCH *v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v9; // rbx
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v10; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rax
  const char *v15; // r9
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v22; // [rsp+70h] [rbp+8h] BYREF

  v20[2] = -2LL;
  v7 = *(LPCWCH **)a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, *v7, -1, 1) != 2 || **(_DWORD **)(a1 + 8) != a3 )
    return 1;
  v9 = *(RTL_SRWLOCK **)(a1 + 16);
  AcquireSRWLockExclusive(v9);
  v20[3] = v9;
  v19 = 0LL;
  TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                     *(Windows::Services::TargetedContent::Internal **)(a1 + 24),
                                     (struct CreativeFramework::Triggers::PropertySetHelper *)&v19,
                                     v10);
  try
  {
    if ( TriggerRegistrationFromSetting < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x249,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)TriggerRegistrationFromSetting);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 32);
      v22 = a4;
      v18 = a3;
      v20[0] = v19;
      v13 = *(_QWORD *)(v12 + 24);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, _QWORD *, int *, int *))(*(_QWORD *)v13 + 16LL))(v13, v20, &v18, &v22);
        v14 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                v20,
                *(__int64 **)(a1 + 40));
        Windows::Services::TargetedContent::Internal::SetTriggerState(v14, v19, a4);
        v16 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        if ( v9 )
          ReleaseSRWLockExclusive(v9);
        return 1;
      }
    }
    std::_Xbad_function_call();
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x24D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      v15);
  }
  return 1;
}
