/*
 * XREFs of _lambda_280b45e0809411ada214328da8ed29e6_::operator() @ 0x180090EF0
 * Callers:
 *     _lambda_280b45e0809411ada214328da8ed29e6_::_lambda_invoker_cdecl_ @ 0x180090EE0 (_lambda_280b45e0809411ada214328da8ed29e6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1801BC734 (-Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804327B0 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_280b45e0809411ada214328da8ed29e6_::operator()(__int64 a1, __int64 a2, struct IUnknown *a3)
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
  v4 = JumpViewProvider::Provider();
  if ( *(_DWORD *)v4 > 5u && TlgKeywordOn(v4, 0x400000000000uLL) )
  {
    v12 = 0;
    v10 = &v8;
    v11 = 4;
    TlgWrite(v6, &unk_1804E619B, 0LL, 0LL, 3u, &pData);
  }
  v7 = ExperienceManagerUtils::PostToUIThread(0LL, a3, 0LL, v5);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x39E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
}
