/*
 * XREFs of ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1800305B8
 * Callers:
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800CD4DD (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigne.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800CE29F (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_1800CE29F.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$17 @ 0x1800CEC75 (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$17.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$6 @ 0x1800D0E2B (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$6.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800D3062 (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_ist.c)
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800D3809 (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_stri.c)
 * Callees:
 *     <none>
 */

void __fastcall std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(
        struct std::ios_base *a1)
{
  *(_QWORD *)a1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(a1);
}
