/*
 * XREFs of ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180012C18
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$5 @ 0x1800C814E (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$5.c)
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$0 @ 0x1800C922E (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800C9EEE (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RuntimeClas_ea_1800C9EEE.c)
 *     _wil::AdaptFixedSizeToAllocatedResult_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____260__::_1_::dtor$0 @ 0x1800CF750 (_wil--AdaptFixedSizeToAllocatedResult_std--basic_string_wchar_t_std--char_traits_wchar_t__std--a.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
