/*
 * XREFs of ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1801C4188
 * Callers:
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1801C18A4 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1801CDDE0 (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 */

__int64 __fastcall wil::get_token_information_nothrow<_TOKEN_USER,0>(__int64 a1, __int64 a2)
{
  const char *v3; // r9
  void *v4; // rbx
  unsigned int LastError; // edi
  const char *v6; // r9
  void *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 TokenInformationLength; // [rsp+48h] [rbp+10h] BYREF

  TokenInformationLength = a2;
  wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, 0LL);
  LODWORD(TokenInformationLength) = 0;
  if ( GetTokenInformation((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, 0LL, 0, (PDWORD)&TokenInformationLength)
    || GetLastError() != 122 )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xA0,
             (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\token_helpers.h",
             v3);
  }
  v4 = operator new((unsigned int)TokenInformationLength, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    if ( GetTokenInformation(
           (HANDLE)0xFFFFFFFFFFFFFFFALL,
           TokenUser,
           v4,
           TokenInformationLength,
           (PDWORD)&TokenInformationLength) )
    {
      v7 = v4;
      v4 = 0LL;
      wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, v7);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xA4,
                    (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\token_helpers.h",
                    v6);
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
  if ( v4 )
    operator delete(v4, (const struct std::nothrow_t *)1);
  return LastError;
}
