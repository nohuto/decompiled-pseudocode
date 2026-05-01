/*
 * XREFs of ?ChangeTitleBarInputRoutingInfo@ViewWrapperBase@@UEAAJUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180241390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 ViewWrapperBase::ChangeTitleBarInputRoutingInfo()
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x565,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
