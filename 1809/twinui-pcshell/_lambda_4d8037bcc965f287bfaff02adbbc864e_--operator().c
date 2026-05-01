/*
 * XREFs of _lambda_4d8037bcc965f287bfaff02adbbc864e_::operator() @ 0x18016CAFC
 * Callers:
 *     _lambda_4d8037bcc965f287bfaff02adbbc864e_::_lambda_invoker_cdecl_ @ 0x18016B840 (_lambda_4d8037bcc965f287bfaff02adbbc864e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x18016FA0C (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803B0CAC (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_4d8037bcc965f287bfaff02adbbc864e_::operator()(__int64 a1, __int64 a2, struct IUnknown *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = 5000;
  v4 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<JumpViewProvider>::get(
                                           a1,
                                           lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v4 > 5u && TlgKeywordOn(v4, 0x400000000000uLL) )
  {
    v12 = 0;
    v10 = &v8;
    v11 = 4;
    TlgWrite(v6, &unk_1804503D9, 0LL, 0LL, 3u, &pData);
  }
  v7 = ExperienceManagerUtils::PostToUIThread(0LL, a3, 0LL, v5);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      853LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
}
