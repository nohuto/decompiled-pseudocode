/*
 * XREFs of ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x1801AC36C
 * Callers:
 *     ?PostRender@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1800C0B80 (-PostRender@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z @ 0x180163B30 (-GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180166860 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xqqqq @ 0x1801AC840 (McTemplateU0xqqqq.c)
 *     ?Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z @ 0x1801B4A04 (-Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801B4D40 (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PostRender(CComputeScribbleRenderer *this, bool *a2)
{
  _QWORD *v3; // rbx
  CComputeScribbleRenderer::CFramebuffer *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebp
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebp
  int LastPresentCount; // eax
  int v14; // ecx
  _QWORD *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  unsigned int v21; // [rsp+40h] [rbp-58h] BYREF
  char v22[16]; // [rsp+48h] [rbp-50h] BYREF
  int v23; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    v5 = (CComputeScribbleRenderer::CFramebuffer *)*((_QWORD *)this + 5);
    if ( v5 )
    {
      *((_QWORD *)this + 3) = 0LL;
      *((_QWORD *)this + 5) = 0LL;
      memset_0(v22, 0, 0x20uLL);
      v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(*(_QWORD *)this + 176LL) + 344LL))(
             *(_QWORD *)(*(_QWORD *)this + 176LL),
             v22);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      v9 = v23;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 176LL) + 72LL))(*(_QWORD *)(*(_QWORD *)this + 176LL));
      v11 = *(_QWORD *)this;
      v21 = 0;
      v12 = v10;
      LastPresentCount = CSwapChainBase::GetLastPresentCount(*(CSwapChainBase **)(v11 + 176), &v21);
      if ( LastPresentCount < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF3,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
          (const char *)(unsigned int)LastPresentCount);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xqqqq(
          v14,
          (unsigned int)&EVTDESC_COMPUTESCRIBBLE_POSTRENDER,
          *((_QWORD *)this + 6),
          v12,
          v21,
          v22[0],
          v23);
      v15 = v3 + 13;
      if ( v3[13] != v3[14] )
      {
        v16 = v3[7];
        v17 = v3[25];
        v18 = *(_QWORD *)(*v3 + 240LL);
        *(_BYTE *)(*v3 + 1164LL) = 0;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v16, v17);
        if ( v19 >= 0 )
        {
          v19 = 0;
        }
        else
        {
          std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(v15);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAB,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
            (const char *)(unsigned int)v19);
        }
        if ( v19 < 0 )
        {
          v20 = 255LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
            (const char *)(unsigned int)v19);
          return (unsigned int)v19;
        }
      }
      v19 = CComputeScribbleRenderer::CFramebuffer::Schedule(
              v5,
              *((struct CComputeScribbleRenderer::CScheduler **)this + 7),
              v9 + 2);
      if ( v19 < 0 )
      {
        v20 = 256LL;
        goto LABEL_15;
      }
      *a2 = *((_BYTE *)v5 + 208);
    }
  }
  return 0LL;
}
