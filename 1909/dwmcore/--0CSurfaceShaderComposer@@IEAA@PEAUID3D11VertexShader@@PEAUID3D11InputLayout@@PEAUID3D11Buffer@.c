/*
 * XREFs of ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDeviceLevel1@@@Z @ 0x18002EE44
 * Callers:
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002EA64 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::CSurfaceShaderComposer(
        CSurfaceShaderComposer *this,
        struct ID3D11VertexShader *a2,
        struct ID3D11InputLayout *a3,
        struct ID3D11Buffer *a4,
        struct ID3DDeviceContextState *a5,
        struct CD3DDeviceLevel1 *a6)
{
  `vector constructor iterator'(
    this,
    8uLL,
    6uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_QWORD *)this + 6) = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 6);
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D11InputLayout *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 8) = a4;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 8);
  *((_QWORD *)this + 9) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct ID3DDeviceContextState *))a5->lpVtbl->AddRef)(a5);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = a6;
  return this;
}
