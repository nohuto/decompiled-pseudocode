/*
 * XREFs of ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x180039228
 * Callers:
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x180026D5C (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x180027040 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D1.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003903C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateBuffer(
        CD3DDeviceLevel1 *this,
        const struct D3D11_BUFFER_DESC *a2,
        const struct D3D11_SUBRESOURCE_DATA *a3,
        struct ID3D11Buffer **a4)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct D3D11_BUFFER_DESC *, const struct D3D11_SUBRESOURCE_DATA *, struct ID3D11Buffer **))(**((_QWORD **)this + 79) + 24LL))(
         *((_QWORD *)this + 79),
         a2,
         a3,
         a4);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5AEu, 0LL);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, v7, 0LL);
}
