/*
 * XREFs of ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5400
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C5830 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexSha.c)
 * Callees:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800C56C4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x1800C68D0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x1800C6D00 (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800E2D3C (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceL.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800E456C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetShaders(
        CRenderingTechnique *this,
        struct CD3DDeviceLevel1 *a2,
        const struct ShaderLinkingConfig *a3,
        enum VertexShaderKey::Enum *a4,
        struct ID3D11PixelShader **a5)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // r13d
  __int64 v9; // rdx
  struct ID3D11PixelShader *v10; // r15
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // r14d
  unsigned int v24; // edx
  CRenderingTechnique **v25; // rax
  __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  volatile signed __int32 *v32; // rbx
  struct CLinkedShader *v33; // rsi
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // ebx
  int v38; // eax
  unsigned int v39; // ecx
  struct CLinkedShader *v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  struct CLinkedShader *v43; // [rsp+48h] [rbp-B8h]
  struct CD3DDeviceLevel1 *v44; // [rsp+50h] [rbp-B0h]
  enum VertexShaderKey::Enum *v45; // [rsp+58h] [rbp-A8h]
  struct ID3D11PixelShader **v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  _OWORD v49[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v50; // [rsp+100h] [rbp+0h]
  __int128 v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+20h]

  v6 = *(_OWORD *)a3;
  v46 = a5;
  v7 = *((_OWORD *)a3 + 1);
  v8 = 8;
  v44 = a2;
  v9 = *((_QWORD *)this + 1);
  v10 = 0LL;
  v49[0] = v6;
  v45 = a4;
  v11 = *((_OWORD *)a3 + 2);
  v49[1] = v7;
  v12 = *((_OWORD *)a3 + 3);
  v49[2] = v11;
  v13 = *((_OWORD *)a3 + 4);
  v49[3] = v12;
  v14 = *((_OWORD *)a3 + 5);
  v49[4] = v13;
  v15 = *((_OWORD *)a3 + 6);
  v49[5] = v14;
  v16 = *((_OWORD *)a3 + 8);
  v49[6] = v15;
  v49[7] = *((_OWORD *)a3 + 7);
  v17 = *((_OWORD *)a3 + 9);
  v18 = *((_QWORD *)a3 + 20);
  v50 = v16;
  v51 = v17;
  v52 = v18;
  v19 = *(_QWORD *)(v9 + 144);
  v20 = (unsigned int)(*(_DWORD *)(v9 + 168) - 1);
  BYTE12(v51) = 1;
  if ( *(CRenderingTechnique **)(v19 + 8 * v20) == this )
  {
    BYTE11(v51) = *(_BYTE *)(v9 + 196);
    BYTE13(v51) = 1;
  }
  else
  {
    LODWORD(v50) = -1;
    BYTE9(v51) = 0;
  }
  ShaderLinkingConfig::GetConstantBufferRequirements(v49, &v41);
  v21 = v41;
  if ( (_DWORD)v41 != *((_DWORD *)this + 85) )
  {
    if ( HIDWORD(v41) != *((_DWORD *)this + 86) )
    {
      CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources((CRenderingTechnique *)((char *)this + 24));
      *((_BYTE *)this + 348) = 1;
    }
    *(_QWORD *)((char *)this + 340) = v21;
  }
  v22 = *((_QWORD *)this + 1);
  v23 = 0;
  v24 = *(_DWORD *)(v22 + 168);
  v25 = *(CRenderingTechnique ***)(v22 + 144);
  if ( v24 )
  {
    do
    {
      if ( this == *v25 )
        break;
      ++v23;
      ++v25;
    }
    while ( v23 < v24 );
  }
  v26 = *(_QWORD *)(v22 + 184);
  ShaderLinkingConfig::GetLookupKey(v49, &v47, v23);
  v29 = 0;
  if ( *(int *)(v26 + 16) <= 0 )
  {
LABEL_23:
    v29 = -1;
  }
  else
  {
    v27 = *(int *)(v26 + 16);
    v30 = 0LL;
    v31 = *(_QWORD **)v26;
    v28 = v48;
    while ( *v31 != v47 || v31[1] != v48 )
    {
      ++v29;
      ++v30;
      v31 += 2;
      if ( v30 >= v27 )
        goto LABEL_23;
    }
  }
  if ( v29 == -1 )
  {
    v40 = 0LL;
  }
  else
  {
    v32 = *(volatile signed __int32 **)(*(_QWORD *)(v26 + 8) + 8LL * v29);
    v43 = (struct CLinkedShader *)v32;
    if ( v32 )
    {
      _InterlockedIncrement(v32 + 2);
      if ( !_InterlockedDecrement(v32 + 2) )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v32 + 16LL))(
          v32,
          1LL,
          v27,
          v28);
    }
    v33 = v43;
    v40 = v43;
    if ( v32 )
      goto LABEL_16;
  }
  v38 = CRenderingTechnique::AddShaderToCache(
          this,
          (struct CCompiledEffectCache *)v26,
          v23,
          (const struct ShaderLinkingConfig *)v49,
          &v40);
  v36 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x147u);
    return (unsigned int)v36;
  }
  v33 = v40;
LABEL_16:
  v42 = 0LL;
  v34 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
          (char *)v33 + 32,
          v44,
          &v42,
          v28);
  v36 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x15u);
  }
  else
  {
    v8 = *((_DWORD *)v33 + 6);
    v10 = *(struct ID3D11PixelShader **)(v42 + 120);
  }
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v36, 0x14Au);
  }
  else
  {
    *(_DWORD *)v45 = v8;
    *v46 = v10;
    if ( v10 )
      ((void (__fastcall *)(struct ID3D11PixelShader *))v10->lpVtbl->AddRef)(v10);
  }
  return (unsigned int)v36;
}
