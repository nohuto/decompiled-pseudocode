/*
 * XREFs of ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x180162798
 * Callers:
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180162840 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800CF4E4 (-CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader.c)
 */

__int64 __fastcall CSurfaceShaderComposer::EnsureSurfaceShader(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  struct ID3D11PixelShader **v3; // rbp
  __int64 v4; // rdi
  CD3DDeviceLevel1 *v5; // rsi
  struct ID3D11ClassLinkage *v6; // r9
  signed int PixelShader; // eax
  __int64 v8; // rcx

  v2 = 0;
  v3 = (struct ID3D11PixelShader **)(a1 + 8LL * a2);
  v4 = 3LL * a2;
  if ( !*v3 )
  {
    v5 = *(CD3DDeviceLevel1 **)(a1 + 96);
    if ( *((_DWORD *)v5 + 185) >= *((_DWORD *)&unk_180339310 + 6 * a2 + 5) )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(a1 + 8LL * a2));
      PixelShader = CD3DDeviceLevel1::CreatePixelShader(
                      v5,
                      *((const void **)&unk_180339310 + v4 + 1),
                      *((_QWORD *)&unk_180339310 + v4),
                      v6,
                      v3);
      v2 = PixelShader;
      if ( PixelShader < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, PixelShader, 0x1E0u, 0LL);
    }
  }
  return v2;
}
