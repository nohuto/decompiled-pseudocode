/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180211CA4
 * Callers:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18022EBE4 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180144F44 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x904,
      (__int64)"internal\\sdk\\inc\\wil/resource.h",
      v2);
    __debugbreak();
  }
}
