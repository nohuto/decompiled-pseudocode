/*
 * XREFs of ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x1802019B0
 * Callers:
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180201A54 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x180091694 (-CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::EnsureSurfaceShader(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rbp
  __int64 v5; // rsi
  struct ID3D11ClassLinkage *v6; // r9
  int PixelShader; // eax
  __int64 v8; // rcx

  v2 = 0;
  v4 = (__int64 *)(a1 + 8LL * a2);
  v5 = 3LL * a2;
  if ( !*v4 && *(_DWORD *)(*(_QWORD *)(a1 + 96) + 740LL) >= *((_DWORD *)&unk_180305D30 + 6 * a2 + 5) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v4);
    PixelShader = CD3DDeviceLevel1::CreatePixelShader(
                    *(CD3DDeviceLevel1 **)(a1 + 96),
                    *((const void **)&unk_180305D30 + v5 + 1),
                    *((_QWORD *)&unk_180305D30 + v5),
                    v6,
                    (struct ID3D11PixelShader **)v4);
    v2 = PixelShader;
    if ( PixelShader < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, PixelShader, 0x1E0u);
  }
  return v2;
}
