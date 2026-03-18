/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x180026ECC
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x180026BD8 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x180027040 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CTypedConstantBuffer<LightPSConstantBuffer>::Initialize(
        struct ID3D11Buffer **a1,
        struct CD3DDeviceLevel1 *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  struct D3D11_SUBRESOURCE_DATA v6; // [rsp+30h] [rbp-38h] BYREF
  struct D3D11_BUFFER_DESC v7; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*a1 )
  {
    v7.Usage = D3D11_USAGE_DEFAULT;
    v7.CPUAccessFlags = 0;
    v7.MiscFlags = 0;
    v7.StructureByteStride = 0;
    *(_QWORD *)&v6.SysMemPitch = 0LL;
    v6.pSysMem = a1 + 2;
    v7.ByteWidth = 240;
    v7.BindFlags = 4;
    v3 = CTypedConstantBufferBase::Initialize(a1, a2, &v7, &v6);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x44u, 0LL);
  }
  return v2;
}
