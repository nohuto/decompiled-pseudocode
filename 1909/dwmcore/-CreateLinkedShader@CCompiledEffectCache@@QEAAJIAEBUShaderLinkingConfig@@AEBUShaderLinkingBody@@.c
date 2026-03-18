/*
 * XREFs of ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180030148
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18002FDB4 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180030148 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x18003009C (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x18003010C (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180030148 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x180030348 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180031B14 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180033078 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180044E60 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x1801CC9E8 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1801CCA98 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     McTemplateU0s @ 0x1801CCB10 (McTemplateU0s.c)
 */

__int64 __fastcall CCompiledEffectCache::CreateLinkedShader(
        const void **a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int128 *a5,
        _QWORD *a6)
{
  CDirtyRegion *v6; // rbx
  __int128 v11; // xmm0
  int LinkedShader; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  CLinkedShader *v15; // rax
  int v16; // eax
  CLinkedShader *v17; // r10
  unsigned int v18; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  volatile signed __int32 *v31; // rax
  int v32; // r9d
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  CDirtyRegion *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D10Blob *v35; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v36; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v37; // [rsp+48h] [rbp-B8h]
  __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v39[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp+0h]
  char Buffer[32]; // [rsp+110h] [rbp+10h] BYREF

  v6 = 0LL;
  v37 = a5;
  v34 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    StringCchPrintfA(Buffer, 0x20uLL, "id=%p cid=%u lit=%u", a1[4], a2, *(_DWORD *)(a3 + 128) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0s(v21, v20, Buffer);
  }
  ShaderLinkingConfig::GetLookupKey(a3, Buffer, a2);
  v11 = *a5;
  v35 = 0LL;
  v38 = v11;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v35);
  LinkedShader = LinkShader(a4, a3, (unsigned int)&v38, (unsigned int)&v36, (__int64)&v35);
  v14 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    v15 = (CLinkedShader *)DefaultHeap::Alloc(0x60uLL);
    if ( v15 )
    {
      v16 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)&v36);
      v15 = CLinkedShader::CLinkedShader(v17, v35, v16);
    }
    Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v34, (volatile signed __int32 *)v15);
    v6 = v34;
    if ( !v34 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x70u, 0LL);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a3 + 128) == -1 )
  {
    v33 = 108;
  }
  else
  {
    v22 = *(_OWORD *)(a3 + 16);
    v39[0] = *(_OWORD *)a3;
    v23 = *(_OWORD *)(a3 + 32);
    v39[1] = v22;
    v24 = *(_OWORD *)(a3 + 48);
    v39[2] = v23;
    v25 = *(_OWORD *)(a3 + 64);
    v39[3] = v24;
    v26 = *(_OWORD *)(a3 + 80);
    v39[4] = v25;
    v27 = *(_OWORD *)(a3 + 96);
    v39[5] = v26;
    v28 = *(_OWORD *)(a3 + 128);
    v39[6] = v27;
    v39[7] = *(_OWORD *)(a3 + 112);
    v29 = *(_OWORD *)(a3 + 144);
    v30 = *(_QWORD *)(a3 + 160);
    v40 = v28;
    v41 = v29;
    v42 = v30;
    LODWORD(v40) = -1;
    v31 = (volatile signed __int32 *)CCompiledEffectCache::LookupShader(
                                       (CCompiledEffectCache *)a1,
                                       a2,
                                       (const struct ShaderLinkingConfig *)v39);
    v36 = v31;
    if ( v31 )
    {
      *a6 = v31;
      v14 = 0;
      goto LABEL_8;
    }
    v38 = *v37;
    LinkedShader = CCompiledEffectCache::CreateLinkedShader(
                     (_DWORD)a1,
                     a2,
                     (unsigned int)v39,
                     a4,
                     (__int64)&v38,
                     (__int64)&v36);
    v14 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v34, v36);
      v6 = v34;
LABEL_6:
      if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                           a1,
                           Buffer,
                           &v34) )
      {
        *a6 = v6;
        goto LABEL_8;
      }
      v32 = -2147024882;
      v14 = -2147024882;
      v33 = 117;
      goto LABEL_22;
    }
    v33 = 101;
  }
  v32 = LinkedShader;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v32, v33, 0LL);
LABEL_8:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v35);
  if ( v6 )
    CDirtyRegion::Release(v6);
  return v14;
}
