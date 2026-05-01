/*
 * XREFs of ?add_TouchInputRoutingInfoChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802BB4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewWrapperBase::add_TouchInputRoutingInfoChanged(__int64 a1, __int64 a2, _QWORD *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x841,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
