/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_84d899b7d93de90bfed2062708934b25__0__std::allocator_std::_Func_class_bool_wchar_t_const___Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wchar_t_const___Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move @ 0x18008A030
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800ADF38 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::_Func_impl_std::_Callable_obj__lambda_84d899b7d93de90bfed2062708934b25__0__std::allocator_std::_Func_class_bool_wchar_t_const___Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wchar_t_const___Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move(
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
  *(_QWORD *)a2 = off_1800E5118;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
