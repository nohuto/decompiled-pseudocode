/*
 * XREFs of ?WaitForCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801B6384
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B5B1C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180155168 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18015643C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B6274 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::WaitForCommandList(
        CComputeScribbleRenderer::CFramebuffer *this,
        struct ID3D12CommandQueue *a2)
{
  void *v3; // rdx
  int v4; // edi
  __int64 v5; // rdx
  wil::details *v7; // rcx
  DWORD v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, __int64))a2->lpVtbl->Signal)(
         a2,
         *((_QWORD *)this + 4),
         *((_QWORD *)this + 6) + 1LL);
  if ( v4 < 0 )
  {
    v5 = 334LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (wil::details *)*((_QWORD *)this + 5);
  ++*((_QWORD *)this + 6);
  wil::details::ResetEvent(v7, v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 72LL))(
         *((_QWORD *)this + 4),
         *((_QWORD *)this + 6),
         *((_QWORD *)this + 5));
  if ( v4 < 0 )
  {
    v5 = 342LL;
    goto LABEL_3;
  }
  v8 = WaitForSingleObjectEx(*((HANDLE *)this + 5), 0xFFFFFFFF, 0);
  if ( v8 == 258 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x157,
             (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
             v9);
  if ( v8 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9D0,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v9);
    __debugbreak();
  }
  return 0LL;
}
