/*
 * XREFs of ?FenceRenderAfterScribble@CComputeScribbleRenderer@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1801AD804
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::FenceRenderAfterScribble(
        CComputeScribbleRenderer *this,
        struct CD3DDeviceLevel1 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 80) + 1184LL))(
         *((_QWORD *)a2 + 80),
         *(_QWORD *)(*((_QWORD *)this + 4) + 72LL),
         *(_QWORD *)(*((_QWORD *)this + 4) + 200LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v2);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)v3);
  }
  return v3;
}
