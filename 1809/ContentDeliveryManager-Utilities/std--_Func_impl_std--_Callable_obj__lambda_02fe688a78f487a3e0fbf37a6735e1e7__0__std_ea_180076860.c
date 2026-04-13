/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_02fe688a78f487a3e0fbf37a6735e1e7__0__std::allocator_std::_Func_class_bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move @ 0x180076860
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::_Func_impl_std::_Callable_obj__lambda_02fe688a78f487a3e0fbf37a6735e1e7__0__std::allocator_std::_Func_class_bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move(
        __int64 a1,
        char *a2)
{
  char *result; // rax

  if ( !a2 )
  {
    a2 = (char *)operator new(0x40uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *(_QWORD *)a2 = off_1800E0298;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 40);
  return result;
}
