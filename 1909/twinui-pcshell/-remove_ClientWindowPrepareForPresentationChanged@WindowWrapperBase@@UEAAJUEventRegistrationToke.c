/*
 * XREFs of ?remove_ClientWindowPrepareForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x1802C8990
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::remove_ClientWindowPrepareForPresentationChanged(
        WindowWrapperBase *this,
        struct EventRegistrationToken a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v5; // [rsp+50h] [rbp+18h]

  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2428LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x80004001LL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x97F,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v2);
  }
  return v5;
}
