/*
 * XREFs of ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800E456C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x1800C68D0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x1800D8C98 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800D8FC8 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z @ 0x1800D9004 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800DA380 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x1801C07B8 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1801C0868 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     McTemplateU0s @ 0x1801C08E0 (McTemplateU0s.c)
 */

__int64 __fastcall CCompiledEffectCache::CreateLinkedShader(
        const void **this,
        unsigned int a2,
        __int64 a3,
        int a4,
        _OWORD *a5,
        struct CLinkedShader **a6)
{
  CMILRefCountBase *v6; // rbx
  __int128 v11; // xmm0
  int LinkedShader; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  LPVOID v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  struct CLinkedShader *v30; // rax
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  CMILRefCountBase *v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD *v36; // [rsp+48h] [rbp-B8h]
  __int64 v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v38[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-20h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp+0h]
  char Buffer[32]; // [rsp+110h] [rbp+10h] BYREF

  v6 = 0LL;
  v36 = a5;
  v33 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    StringCchPrintfA(Buffer, 0x20uLL, "id=%p sg=%u lit=%u", this[4], a2, *(_DWORD *)(a3 + 128) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0s(v20, v19, Buffer);
  }
  ShaderLinkingConfig::GetLookupKey(a3, Buffer, a2);
  v11 = *a5;
  v34 = 0LL;
  *(_OWORD *)v37 = v11;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
  LinkedShader = LinkShader(a4, a3, (unsigned int)v37, (unsigned int)&v35, (__int64)&v34);
  v14 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    v15 = VertexShaderDesc::ResolveKey(&v35);
    v16 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    if ( v16 )
      v16 = (LPVOID)CLinkedShader::CLinkedShader(v16, v34, v15);
    Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v33, v16);
    v6 = v33;
    if ( !v33 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x6Au);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a3 + 128) == -1 )
  {
    v32 = 102;
  }
  else
  {
    v21 = *(_OWORD *)(a3 + 16);
    v38[0] = *(_OWORD *)a3;
    v22 = *(_OWORD *)(a3 + 32);
    v38[1] = v21;
    v23 = *(_OWORD *)(a3 + 48);
    v38[2] = v22;
    v24 = *(_OWORD *)(a3 + 64);
    v38[3] = v23;
    v25 = *(_OWORD *)(a3 + 80);
    v38[4] = v24;
    v26 = *(_OWORD *)(a3 + 96);
    v38[5] = v25;
    v27 = *(_OWORD *)(a3 + 128);
    v38[6] = v26;
    v38[7] = *(_OWORD *)(a3 + 112);
    v28 = *(_OWORD *)(a3 + 144);
    v29 = *(_QWORD *)(a3 + 160);
    v39 = v27;
    v40 = v28;
    v41 = v29;
    LODWORD(v39) = -1;
    v30 = CCompiledEffectCache::LookupShader((CCompiledEffectCache *)this, a2, (const struct ShaderLinkingConfig *)v38);
    v35 = (__int64)v30;
    if ( v30 )
    {
      *a6 = v30;
      v14 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v37 = *v36;
    LinkedShader = CCompiledEffectCache::CreateLinkedShader(
                     (CCompiledEffectCache *)this,
                     a2,
                     (__int64)v37,
                     (__int64)&v35);
    v14 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v33, v35);
      v6 = v33;
LABEL_6:
      if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                           this,
                           Buffer,
                           &v33) )
      {
        *a6 = v6;
        goto LABEL_8;
      }
      v31 = -2147024882;
      v32 = 111;
      v14 = -2147024882;
      goto LABEL_22;
    }
    v32 = 95;
  }
  v31 = LinkedShader;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v31, v32);
LABEL_8:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v14;
}
