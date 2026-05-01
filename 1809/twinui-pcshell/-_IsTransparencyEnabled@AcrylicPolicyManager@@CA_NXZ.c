/*
 * XREFs of ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x1800E7A1C
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7380 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800E7920 (wistd--_Func_impl_wistd--_Callable_obj__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__0__ea_1800E7920.c)
 * Callees:
 *     <none>
 */

char AcrylicPolicyManager::_IsTransparencyEnabled(void)
{
  char v0; // bl
  bool v1; // zf
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 4;
  v0 = 0;
  v4 = 0;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
          L"EnableTransparency",
          0x10000012u,
          &v4,
          &v3,
          &v5) )
  {
    if ( v4 == 4 )
    {
      v1 = v3 == 1;
      if ( v3 <= 1 )
        return v1;
    }
    else if ( v5 == 4 && (unsigned __int16)(v3 - 48) <= 1u )
    {
      return (_WORD)v3 == 49;
    }
  }
  return v0;
}
