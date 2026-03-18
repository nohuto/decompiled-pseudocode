/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B49D4
 * Callers:
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x1801B3D58 (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?WaitForCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801B4AE4 (-WaitForCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x18023EF9C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x180246FD0 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180247180 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801552E8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x8EB,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    __debugbreak();
  }
}
