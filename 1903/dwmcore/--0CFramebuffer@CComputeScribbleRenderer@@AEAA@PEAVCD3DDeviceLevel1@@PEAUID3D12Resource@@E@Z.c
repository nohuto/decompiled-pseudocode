/*
 * XREFs of ??0CFramebuffer@CComputeScribbleRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@E@Z @ 0x1801B54B0
 * Callers:
 *     ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x1801B5A6C (-Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

CComputeScribbleRenderer::CFramebuffer *__fastcall CComputeScribbleRenderer::CFramebuffer::CFramebuffer(
        CComputeScribbleRenderer::CFramebuffer *this,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D12Resource *a3,
        char a4)
{
  CComputeScribbleRenderer::CFramebuffer *result; // rax

  *(_QWORD *)this = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 126);
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D12Resource *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
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
  *((_QWORD *)this + 16) = (char *)this + 136;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  result = this;
  *((_WORD *)this + 120) = 0;
  *((_BYTE *)this + 242) = a4;
  return result;
}
