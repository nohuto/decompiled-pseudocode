/*
 * XREFs of ?MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ @ 0x1802E9380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1802DFA00 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::MoveForegroundForPendingHostDismiss(CMultitaskingViewManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ForegroundStaging::SetActive((CMultitaskingViewManager *)((char *)this + 280));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
