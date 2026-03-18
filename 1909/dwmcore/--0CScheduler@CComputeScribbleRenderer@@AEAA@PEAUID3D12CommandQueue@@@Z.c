/*
 * XREFs of ??0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z @ 0x1801B52B4
 * Callers:
 *     ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x1801B5724 (-Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CComputeScribbleRenderer::CScheduler *__fastcall CComputeScribbleRenderer::CScheduler::CScheduler(
        CComputeScribbleRenderer::CScheduler *this,
        struct ID3D12CommandQueue *a2)
{
  _OWORD *v3; // rax

  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D12CommandQueue *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v3 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *((_QWORD *)this + 13) = v3;
  *v3 = 0LL;
  **((_QWORD **)this + 13) = (char *)this + 104;
  return this;
}
