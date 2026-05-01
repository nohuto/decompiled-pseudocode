/*
 * XREFs of _lambda_53b5c290c68dcef29a9df5086c06bf0e_::operator() @ 0x18024F498
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53b5c290c68dcef29a9df5086c06bf0e___::Run @ 0x180250B70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_53b5c290c68dcef29a9df5086c06bf0e___--.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180062184 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_53b5c290c68dcef29a9df5086c06bf0e_::operator()(HSTRING **a1)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = Windows::Internal::String::Initialize(*a1 + 34, a1[1]);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2165LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 144LL))((*a1)[13], *a1[1], *a1[2]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2166LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x878,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return 0LL;
}
