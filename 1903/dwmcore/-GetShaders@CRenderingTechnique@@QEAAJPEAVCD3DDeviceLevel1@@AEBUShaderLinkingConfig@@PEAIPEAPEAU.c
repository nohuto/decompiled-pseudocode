/*
 * XREFs of ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800357F0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180035C10 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180032950 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180032ACC (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceL.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180035AB0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180036E60 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x1800371D8 (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetShaders(
        CRenderingTechnique *this,
        struct CD3DDeviceLevel1 *a2,
        const struct ShaderLinkingConfig *a3,
        unsigned int *a4,
        struct ID3D11PixelShader **a5)
{
  __int128 v5; // xmm0
  __int128 v7; // xmm1
  volatile signed __int32 *v8; // rsi
  __int128 v9; // xmm0
  unsigned int v10; // r13d
  __int64 v11; // rdx
  struct ID3D11PixelShader *v12; // r15
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned int v24; // r9d
  CRenderingTechnique **v25; // r8
  unsigned int i; // ebx
  __int64 v27; // r12
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  _DWORD *v32; // rax
  struct CLinkedShader *v33; // r14
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // ebx
  int v38; // eax
  unsigned int v39; // ecx
  struct CLinkedShader *v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v42; // [rsp+40h] [rbp-C0h] BYREF
  struct CLinkedShader *v43; // [rsp+48h] [rbp-B8h]
  struct CD3DDeviceLevel1 *v44; // [rsp+50h] [rbp-B0h]
  unsigned int *v45; // [rsp+58h] [rbp-A8h]
  struct ID3D11PixelShader **v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  _OWORD v49[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v50; // [rsp+100h] [rbp+0h]
  __int128 v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+20h]

  v5 = *(_OWORD *)a3;
  v7 = *((_OWORD *)a3 + 1);
  v46 = a5;
  v49[0] = v5;
  v8 = 0LL;
  v9 = *((_OWORD *)a3 + 2);
  v44 = a2;
  v10 = 0x80000000;
  v11 = *(_QWORD *)this;
  v12 = 0LL;
  v49[1] = v7;
  v45 = a4;
  v13 = *((_OWORD *)a3 + 3);
  v49[2] = v9;
  v14 = *((_OWORD *)a3 + 4);
  v49[3] = v13;
  v15 = *((_OWORD *)a3 + 5);
  v49[4] = v14;
  v16 = *((_OWORD *)a3 + 6);
  v49[5] = v15;
  v17 = *((_OWORD *)a3 + 8);
  v49[6] = v16;
  v49[7] = *((_OWORD *)a3 + 7);
  v18 = *((_OWORD *)a3 + 9);
  v19 = *((_QWORD *)a3 + 20);
  v50 = v17;
  v51 = v18;
  v52 = v19;
  v20 = *(_QWORD *)(v11 + 144);
  v21 = (unsigned int)(*(_DWORD *)(v11 + 168) - 1);
  BYTE10(v51) = 1;
  if ( *(CRenderingTechnique **)(v20 + 8 * v21) == this )
  {
    BYTE11(v51) = 1;
  }
  else
  {
    LODWORD(v50) = -1;
    BYTE8(v51) = 0;
  }
  ShaderLinkingConfig::GetConstantBufferRequirements(v49, &v41);
  v22 = v41;
  if ( (_DWORD)v41 != *((_DWORD *)this + 67) )
  {
    if ( HIDWORD(v41) != *((_DWORD *)this + 68) )
    {
      CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources((CRenderingTechnique *)((char *)this + 16));
      *((_BYTE *)this + 276) = 1;
    }
    *(_QWORD *)((char *)this + 268) = v22;
  }
  v23 = *(_QWORD *)this;
  v24 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  v25 = *(CRenderingTechnique ***)(*(_QWORD *)this + 144LL);
  if ( v25[v24 - 1] == this )
  {
    i = *(_DWORD *)(v23 + 192) | (v24 - 1);
  }
  else
  {
    for ( i = 0; i < v24; ++v25 )
    {
      if ( this == *v25 )
        break;
      ++i;
    }
  }
  v27 = *(_QWORD *)(v23 + 184);
  ShaderLinkingConfig::GetLookupKey(v49, &v47, i);
  v30 = 0;
  if ( *(int *)(v27 + 16) <= 0 )
  {
LABEL_23:
    v30 = -1;
  }
  else
  {
    v28 = *(int *)(v27 + 16);
    v31 = 0LL;
    v32 = *(_DWORD **)v27;
    v29 = v48;
    while ( *(_QWORD *)v32 != v47 || v32[2] != (_DWORD)v48 )
    {
      ++v30;
      ++v31;
      v32 += 4;
      if ( v31 >= v28 )
        goto LABEL_23;
    }
  }
  if ( v30 == -1 )
  {
    v40 = 0LL;
  }
  else
  {
    v8 = *(volatile signed __int32 **)(*(_QWORD *)(v27 + 8) + 8LL * v30);
    v43 = (struct CLinkedShader *)v8;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      if ( !_InterlockedDecrement(v8 + 2) )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
          v8,
          1LL,
          v28,
          v29);
    }
    v33 = v43;
    v40 = v43;
    if ( v8 )
    {
      v8 = 0LL;
      goto LABEL_16;
    }
  }
  v38 = CRenderingTechnique::AddShaderToCache(
          (void **)this,
          (const void **)v27,
          i,
          (const struct ShaderLinkingConfig *)v49,
          &v40);
  v36 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x12Fu, (void *)v8);
    return (unsigned int)v36;
  }
  v33 = v40;
LABEL_16:
  v42 = v8;
  v34 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
          (char *)v33 + 32,
          v44,
          &v42,
          v29);
  v36 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x15u, (void *)v8);
  }
  else
  {
    v10 = *((_DWORD *)v33 + 6);
    v12 = (struct ID3D11PixelShader *)*((_QWORD *)v42 + 15);
  }
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v36, 0x132u, (void *)v8);
  }
  else
  {
    *v45 = v10;
    *v46 = v12;
    if ( v12 )
      ((void (__fastcall *)(struct ID3D11PixelShader *))v12->lpVtbl->AddRef)(v12);
  }
  return (unsigned int)v36;
}
