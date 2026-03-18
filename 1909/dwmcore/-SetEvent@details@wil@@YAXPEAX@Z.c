/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801B6724
 * Callers:
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801B5350 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801552E8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x8E6,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    __debugbreak();
  }
}
