/*
 * XREFs of ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800910BC
 * Callers:
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180091000 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800C6DD0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F34 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180206C08 (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Map(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct D3D11_MAPPED_SUBRESOURCE *a6)
{
  int v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx

  v6 = *((_DWORD *)this + 212);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0xBEDu);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, __int64, __int64, _DWORD, struct D3D11_MAPPED_SUBRESOURCE *))(**((_QWORD **)this + 80) + 112LL))(
           *((_QWORD *)this + 80),
           a2,
           a3,
           a4,
           0,
           a6);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xBF3u);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 0);
}
