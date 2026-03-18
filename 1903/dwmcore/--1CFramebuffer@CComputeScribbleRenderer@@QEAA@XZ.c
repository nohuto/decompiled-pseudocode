/*
 * XREFs of ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801AD5C0
 * Callers:
 *     ??1?$unique_ptr@VCFramebuffer@CComputeScribbleRenderer@@U?$default_delete@VCFramebuffer@CComputeScribbleRenderer@@@std@@@std@@QEAA@XZ @ 0x1801AD460 (--1-$unique_ptr@VCFramebuffer@CComputeScribbleRenderer@@U-$default_delete@VCFramebuffer@CCompute.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801AD960 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x1801B5A6C (-Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800D80DC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComputeScribbleRenderer::CFramebuffer::~CFramebuffer(CComputeScribbleRenderer::CFramebuffer *this)
{
  __int64 v2; // rcx
  void *v3; // rdx
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  wil::details *v6; // rcx
  __int64 v7; // rcx
  void *v8; // rdx
  __int64 v9; // rcx
  wil::details *v10; // rcx

  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 28);
  v2 = *((_QWORD *)this + 27);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  FastRegion::CRegion::FreeMemory((void **)this + 16);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 14);
    if ( v4 != v5 )
    {
      do
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v4++);
      while ( v4 != v5 );
      v4 = (__int64 *)*((_QWORD *)this + 13);
    }
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 15) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  v6 = (wil::details *)*((_QWORD *)this + 11);
  if ( v6 )
    wil::details::CloseHandle(v6, v3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 10);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 8);
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (wil::details *)*((_QWORD *)this + 5);
  if ( v10 )
    wil::details::CloseHandle(v10, v8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    CMILPoolResource::Release((CMILPoolResource *)(*(_QWORD *)this + 496LL));
}
