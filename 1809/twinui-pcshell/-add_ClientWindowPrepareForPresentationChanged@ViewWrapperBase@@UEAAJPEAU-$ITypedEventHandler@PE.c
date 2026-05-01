/*
 * XREFs of ?add_ClientWindowPrepareForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowPrepareForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180245DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewWrapperBase::add_ClientWindowPrepareForPresentationChanged(__int64 a1, __int64 a2, _QWORD *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x81D,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
