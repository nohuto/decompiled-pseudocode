/*
 * XREFs of ?InvokeActionsMenu@CFrameApplicationPresentation@@UEAAJXZ @ 0x180151020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::InvokeActionsMenu(CFrameApplicationPresentation *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 14) != 2 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 136LL))(*((_QWORD *)this + 15));
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x691,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
    (const char *)0x8007139FLL);
  return 2147947423LL;
}
