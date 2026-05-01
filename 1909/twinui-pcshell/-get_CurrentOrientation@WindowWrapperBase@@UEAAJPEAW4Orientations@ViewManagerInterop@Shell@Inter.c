/*
 * XREFs of ?get_CurrentOrientation@WindowWrapperBase@@UEAAJPEAW4Orientations@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_CurrentOrientation(
        WindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::Orientations *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a2 = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49C,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
