/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800E7920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1800E76B8 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x1800E7A1C (-_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ.c)
 */

void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  AcrylicPolicyManager *v1; // rbx
  __int64 v2; // r8
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(AcrylicPolicyManager **)(a1 + 8);
  *((_BYTE *)v1 + 450) = AcrylicPolicyManager::_IsTransparencyEnabled();
  updated = AcrylicPolicyManager::UpdateAcrylicState(v1, 0LL, v2);
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated);
}
