/*
 * XREFs of ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x18015B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x18006E550 (-SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18006E5AC (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshCanTab@CApplicationViewBase@@UEAAJXZ @ 0x18015E950 (-RefreshCanTab@CApplicationViewBase@@UEAAJXZ.c)
 */

__int64 __fastcall CWin32ApplicationView::HandleRecycle(CWin32ApplicationView *this)
{
  CWin32ApplicationView *v2; // rbx
  int CanTab; // eax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)EdpGetIsManaged(this) )
    *((_BYTE *)this + 40) = 1;
  v2 = (CWin32ApplicationView *)((char *)this - 16);
  CWin32ApplicationView::SetForceActiveWindowAppearance(v2, 0);
  CanTab = CApplicationViewBase::RefreshCanTab(v2);
  if ( CanTab < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)CanTab);
  v4 = CWin32ApplicationView::InitializeCloakType((__int64)v2, 1);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
