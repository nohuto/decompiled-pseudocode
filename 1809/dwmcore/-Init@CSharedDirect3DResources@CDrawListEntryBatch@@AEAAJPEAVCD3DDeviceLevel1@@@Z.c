/*
 * XREFs of ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800D6EC0
 * Callers:
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800D6E28 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x1800D7050 (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800D7168 (-Initialize@-$CTypedConstantBuffer@V-$array@M$07@std@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800D71E8 (-Initialize@-$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D1.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800D726C (-Initialize@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800D72EC (-Initialize@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800D736C (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D1.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Init(
        CDrawListEntryBatch::CSharedDirect3DResources *this,
        struct CD3DDeviceLevel1 *a2)
{
  int v4; // eax
  struct ID3D11Buffer **v5; // rcx
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-40h]
  D3D11_SUBRESOURCE_DATA v12; // [rsp+30h] [rbp-30h] BYREF
  struct D3D11_BUFFER_DESC v13; // [rsp+40h] [rbp-20h] BYREF

  v4 = CD3DDynamicAppendBuffer::Initialize(
         (CDrawListEntryBatch::CSharedDirect3DResources *)((char *)this + 16),
         a2,
         0x27100u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 42;
    goto LABEL_25;
  }
  v4 = CD3DDynamicAppendBuffer::Initialize(
         (CDrawListEntryBatch::CSharedDirect3DResources *)((char *)this + 64),
         a2,
         0x3E80u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 43;
    goto LABEL_25;
  }
  v5 = (struct ID3D11Buffer **)((char *)this + 112);
  v6 = 0;
  if ( !*((_QWORD *)this + 14) )
  {
    v13.Usage = D3D11_USAGE_DEFAULT;
    v13.CPUAccessFlags = 0;
    v13.MiscFlags = 0;
    v13.StructureByteStride = 0;
    *(_QWORD *)&v12.SysMemPitch = 0LL;
    v12.pSysMem = (char *)this + 128;
    v13.ByteWidth = 128;
    v13.BindFlags = 4;
    v7 = CTypedConstantBufferBase::Initialize(v5, a2, &v13, &v12);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, v7, 0x44u);
  }
  if ( v6 < 0 )
  {
    v11 = 44;
    goto LABEL_22;
  }
  v5 = (struct ID3D11Buffer **)((char *)this + 272);
  v6 = 0;
  if ( !*((_QWORD *)this + 34) )
  {
    v13.Usage = D3D11_USAGE_DEFAULT;
    v13.CPUAccessFlags = 0;
    v13.MiscFlags = 0;
    v13.StructureByteStride = 0;
    *(_QWORD *)&v12.SysMemPitch = 0LL;
    v12.pSysMem = (char *)this + 288;
    v13.ByteWidth = 16;
    v13.BindFlags = 4;
    v8 = CTypedConstantBufferBase::Initialize(v5, a2, &v13, &v12);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, v8, 0x44u);
  }
  if ( v6 < 0 )
  {
    v11 = 49;
LABEL_22:
    v10 = v6;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, v10, v11);
    return (unsigned int)v6;
  }
  v4 = CTypedConstantBuffer<LightVSConstantBuffer>::Initialize((char *)this + 304, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 50;
    goto LABEL_25;
  }
  v4 = CTypedConstantBuffer<LightPSConstantBuffer>::Initialize((char *)this + 592, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 51;
    goto LABEL_25;
  }
  v4 = CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize((char *)this + 848, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 52;
    goto LABEL_25;
  }
  v4 = CTypedConstantBuffer<std::array<float,8>>::Initialize((char *)this + 1136, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 53;
LABEL_25:
    v10 = v4;
    goto LABEL_26;
  }
  return (unsigned int)v6;
}
