/*
 * XREFs of ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1801E3198
 * Callers:
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800AD258 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1801E08C4 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1801ECEB0 (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 */

__int64 __fastcall wil::get_token_information_nothrow<_TOKEN_USER,0>(__int64 a1, __int64 a2)
{
  const char *v4; // r9
  void *v5; // rbx
  unsigned int LastError; // edi
  const char *v7; // r9
  void *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD TokenInformationLength; // [rsp+48h] [rbp+10h] BYREF

  wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, 0LL);
  if ( !a2 )
    a2 = -6LL;
  TokenInformationLength = 0;
  if ( GetTokenInformation((HANDLE)a2, TokenUser, 0LL, 0, &TokenInformationLength) || GetLastError() != 122 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xA0,
             (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\token_helpers.h",
             v4);
  v5 = operator new(TokenInformationLength, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    if ( GetTokenInformation((HANDLE)a2, TokenUser, v5, TokenInformationLength, &TokenInformationLength) )
    {
      v8 = v5;
      v5 = 0LL;
      wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, v8);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xA4,
                    (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\token_helpers.h",
                    v7);
    }
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\token_helpers.h",
      (const char *)0x8007000ELL);
  }
  if ( v5 )
    operator delete(v5, (const struct std::nothrow_t *)1);
  return LastError;
}
