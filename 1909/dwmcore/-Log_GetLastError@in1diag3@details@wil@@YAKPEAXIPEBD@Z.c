/*
 * XREFs of ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1801B5FDC
 * Callers:
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801B5350 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ @ 0x1801B6848 (-WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180154B90 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastError(
           this,
           a2,
           (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
           a4,
           v5,
           retaddr,
           2);
}
