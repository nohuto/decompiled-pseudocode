/*
 * XREFs of ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x18015A5DC
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18015BA90 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180030B40 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  LPVOID v6; // rax
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // r8
  __int64 *v12; // rcx

  v6 = DefaultHeap::Realloc(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = (char *)DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
  {
    *v11 = *a2;
    v9 = *(char **)(a1 + 8);
  }
  v12 = (__int64 *)&v9[8 * v10];
  if ( v12 )
  {
    *v12 = *a3;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v12);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
