/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18020BBE0
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x18020A25C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x180211CD4 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180211E7C (--1CHolographicClient@@MEAA@XZ.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x18022D6E0 (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?WaitForCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x18022E470 (-WaitForCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180144F44 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x909,
      (__int64)"internal\\sdk\\inc\\wil/resource.h",
      v2);
    __debugbreak();
  }
}
