/*
 * XREFs of ??1?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEAA@XZ @ 0x1800D7B80
 * Callers:
 *     __lambda_0f0bae3cf8d5116e9b9b4d57b869a88f_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t________::_1_::dtor$0 @ 0x180149BD5 (__lambda_0f0bae3cf8d5116e9b9b4d57b869a88f_--operator()_wil--unique_any_t_wil--details--unique_st.c)
 *     __lambda_0ec230e0adbac92e2fff9cb336d4370d_::operator()_::_1_::dtor$0 @ 0x1801523CD (__lambda_0ec230e0adbac92e2fff9cb336d4370d_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<SPATIAL_NODE_ID const,std::wstring>::~pair<SPATIAL_NODE_ID const,std::wstring>(__int64 a1)
{
  return std::wstring::_Tidy_deallocate(a1 + 16);
}
