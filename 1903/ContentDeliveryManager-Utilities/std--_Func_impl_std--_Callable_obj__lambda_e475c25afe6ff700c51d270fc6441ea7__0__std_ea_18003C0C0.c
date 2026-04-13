/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_e475c25afe6ff700c51d270fc6441ea7__0__std::allocator_std::_Func_class_bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18003C0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall std::_Func_impl_std::_Callable_obj__lambda_e475c25afe6ff700c51d270fc6441ea7__0__std::allocator_std::_Func_class_bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  char v4; // di
  __int64 v5; // rax

  v4 = 1;
  if ( CompareStringOrdinal(*(LPCWCH *)a2, -1, **(LPCWCH **)(a1 + 8), -1, 1) == 2
    || CompareStringOrdinal(*(LPCWCH *)(a2 + 8), -1, **(LPCWCH **)(a1 + 8), -1, 1) == 2 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v4 = 0;
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 32);
  }
  return v4;
}
