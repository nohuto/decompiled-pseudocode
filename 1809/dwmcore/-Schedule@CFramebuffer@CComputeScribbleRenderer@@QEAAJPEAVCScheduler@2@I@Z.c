/*
 * XREFs of ?Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z @ 0x18022E320
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x18022C978 (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022E67C (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x18022FD24 (-ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V-$span@QEAV.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::Schedule(
        CComputeScribbleRenderer::CFramebuffer *this,
        struct CComputeScribbleRenderer::CScheduler *a2,
        int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v7; // rax
  int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 13);
  v4 = *((_QWORD *)this + 14);
  if ( v3 == v4 )
    return 0LL;
  v7 = (int)((v4 - v3) >> 3);
  if ( v7 < 0 || !v3 && v7 || !v3 && v7 )
  {
    gsl::details::terminate(this);
    JUMPOUT(0x18022E3F0LL);
  }
  v8 = CComputeScribbleRenderer::CScheduler::ScheduleScribbleFrame(a2, a3);
  if ( v8 >= 0 )
  {
    *((_BYTE *)this + 208) = 1;
    return 0LL;
  }
  std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear((char *)this + 104);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC4,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
