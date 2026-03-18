/*
 * XREFs of ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x1801B3D58
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1801AC578 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180154D5C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z @ 0x1801B3F20 (-AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B49D4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801B4D40 (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     McTemplateU0xuq @ 0x1801B4E08 (McTemplateU0xuq.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::AcquireForRender(
        CComputeScribbleRenderer::CFramebuffer *this,
        __int64 a2,
        void **a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  unsigned __int64 v9; // rdi
  void *v10; // rdx
  int v11; // ecx
  int v12; // r9d
  int v13; // edi
  __int64 v14; // rdx
  DWORD v16; // eax
  const char *v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 208) )
    goto LABEL_20;
  if ( CComputeScribbleRenderer::CFramebuffer::AcquireForScribble(this, *((_QWORD *)this + 25)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      LOBYTE(v8) = *((_BYTE *)this + 242);
      McTemplateU0xuq(v7, v6, *((_QWORD *)this + 25), v8, 0);
    }
    goto LABEL_19;
  }
  v9 = *((_QWORD *)this + 25);
  if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10)) >= v9 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      LOBYTE(v12) = *((_BYTE *)this + 242);
      McTemplateU0xuq(v11, (_DWORD)v10, v9, v12, 1);
    }
LABEL_8:
    v13 = FastRegion::CRegion::Union(a3, (const struct FastRegion::Internal::CRgnData **)this + 16);
    if ( v13 >= 0 )
    {
      **((_DWORD **)this + 16) = 0;
LABEL_19:
      std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear((char *)this + 104);
      *((_WORD *)this + 120) = 0;
      *((_BYTE *)this + 208) = 0;
LABEL_20:
      *((_QWORD *)this + 25) = a2;
      return 0LL;
    }
    v14 = 132LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v12) = *((_BYTE *)this + 242);
    McTemplateU0xuq(v11, (_DWORD)v10, v9, v12, 2);
  }
  wil::details::ResetEvent(*((wil::details **)this + 11), v10);
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 72LL))(
          *((_QWORD *)this + 10),
          *((_QWORD *)this + 25),
          *((_QWORD *)this + 11));
  if ( v13 < 0 )
  {
    v14 = 128LL;
    goto LABEL_14;
  }
  v16 = WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
  if ( v16 != 258 )
  {
    if ( v16 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9D0,
        (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v17);
      __debugbreak();
    }
    goto LABEL_8;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x81,
           (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
           v17);
}
