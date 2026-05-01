/*
 * XREFs of ?MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ @ 0x180369430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x18035FC70 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::MoveForegroundForPendingHostDismiss(CMultitaskingViewManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ForegroundStaging::SetActive((CMultitaskingViewManager *)((char *)this + 288));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
