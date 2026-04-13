/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_e475c25afe6ff700c51d270fc6441ea7__0__std::allocator_std::_Func_class_bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move @ 0x18003C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800AE0C8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::_Func_impl_std::_Callable_obj__lambda_e475c25afe6ff700c51d270fc6441ea7__0__std::allocator_std::_Func_class_bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration_const___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move(
        __int64 a1,
        char *a2)
{
  char *result; // rax

  if ( !a2 )
  {
    a2 = (char *)operator new(0x20uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *(_QWORD *)a2 = off_1800DC070;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
