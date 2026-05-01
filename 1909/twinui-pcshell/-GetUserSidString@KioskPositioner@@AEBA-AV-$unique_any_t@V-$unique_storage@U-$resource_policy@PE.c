/*
 * XREFs of ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800AD258
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD3A4 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180181AF8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1801E3198 (--$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV-$unique_ptr@U_TOKEN_USER@@U-$de.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1801ECEB0 (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801ECED8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=3
LPWSTR *__fastcall KioskPositioner::GetUserSidString(__int64 a1, LPWSTR *a2, __int64 a3)
{
  int token_information; // eax
  wil::details::in1diag3 *v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSID *v9; // [rsp+40h] [rbp+8h] BYREF
  LPWSTR *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v9 = 0LL;
  token_information = wil::get_token_information_nothrow<_TOKEN_USER,0>(&v9, a3);
  v5 = retaddr;
  if ( token_information < 0 )
  {
LABEL_5:
    wil::details::in1diag3::Throw_Hr(
      v5,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)token_information);
    __debugbreak();
  }
  *a2 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    a2,
    0LL);
  if ( !ConvertSidToStringSidW(*v9, a2) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x47A,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      v6);
    goto LABEL_5;
  }
  wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(&v9, 0LL);
  return a2;
}
