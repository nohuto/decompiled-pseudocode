/*
 * XREFs of ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C6300 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexSh.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D960C (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x18022A4F0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x18006C0D8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x180075454 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800916FC (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x1800C68D0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800D8D40 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V-$CMa.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800DA380 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x18022C1A0 (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$span@$$CBE$0-0@gsl@@AEBU1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
        CD3DDeviceLevel1 *this,
        const struct CommonRenderingShaderDesc *a2,
        char a3,
        enum VertexShaderKey::Enum *a4,
        struct ID3D11PixelShader **a5)
{
  __int64 v8; // rdi
  int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  char v12; // al
  int v13; // r12d
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // ebx
  _QWORD *ShaderLinkingBody; // rax
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // rsi
  void *v28; // rax
  gsl::details *v29; // rcx
  unsigned int v30; // ebx
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  struct CD3DPixelShader *v35; // [rsp+38h] [rbp-C8h] BYREF
  void *v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h]
  enum VertexShaderKey::Enum *v39; // [rsp+60h] [rbp-A0h]
  struct ID3D11PixelShader **v40; // [rsp+68h] [rbp-98h]
  _OWORD v41[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  _QWORD v43[7]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v44[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  bool v46; // [rsp+10Ah] [rbp+Ah]
  bool v47; // [rsp+10Ch] [rbp+Ch]
  const char *v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+118h] [rbp+18h]
  const char *v50; // [rsp+130h] [rbp+30h]
  int v51; // [rsp+138h] [rbp+38h]
  const char *v52; // [rsp+150h] [rbp+50h]
  int v53; // [rsp+158h] [rbp+58h]
  int v54; // [rsp+170h] [rbp+70h]
  __int128 v55; // [rsp+178h] [rbp+78h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  __int64 v57; // [rsp+190h] [rbp+90h]

  v40 = a5;
  v39 = a4;
  v8 = 0LL;
  LODWORD(v34) = 0;
  memset_0(&v45, 0, 0x80uLL);
  v9 = *(_DWORD *)a2;
  v10 = *(_OWORD *)((char *)a2 + 8);
  v48 = "NoOp";
  v50 = "NoOp";
  v52 = "NoOp";
  v56 = 0LL;
  v57 = 0LL;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v54 = -1;
  v45 = v10;
  v47 = (v9 & 4) != 0;
  *(_DWORD *)((char *)&v56 + 2) = (v9 & 0x10) != 0;
  LOBYTE(v56) = *((_BYTE *)a2 + 44);
  BYTE1(v56) = (v9 & 8) != 0;
  v11 = *(_OWORD *)((char *)a2 + 24);
  v12 = *((_BYTE *)a2 + 45);
  v13 = *((_DWORD *)this + 185);
  BYTE6(v56) = a3;
  HIBYTE(v56) = v12;
  v55 = v11;
  if ( v13 >= 37632 )
  {
    v54 = *((_DWORD *)a2 + 10);
    v46 = (v9 & 0x20) != 0;
  }
  v14 = v9 & 3;
  ShaderLinkingConfig::GetLookupKey(&v45, v44, v14);
  v17 = 0LL;
  if ( *((int *)this + 278) <= 0 )
    goto LABEL_17;
  v16 = *((int *)this + 278);
  v18 = (_QWORD *)*((_QWORD *)this + 137);
  v15 = 0LL;
  while ( *v18 != v44[0] || v18[1] != v44[1] )
  {
    v17 = (unsigned int)(v17 + 1);
    ++v15;
    v18 += 2;
    if ( v15 >= v16 )
      goto LABEL_17;
  }
  if ( (_DWORD)v17 == -1 )
  {
LABEL_17:
    v37 = 0LL;
  }
  else
  {
    v19 = *((_QWORD *)this + 138) + 16LL * (int)v17;
    v8 = *(_QWORD *)v19;
    v37 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, v17, v15, v16);
    v20 = *(_DWORD *)(v19 + 8);
    if ( v8 )
    {
      v21 = v34;
LABEL_12:
      *(_DWORD *)v39 = v20;
      *v40 = (struct ID3D11PixelShader *)v8;
      goto LABEL_13;
    }
  }
  v35 = (struct CD3DPixelShader *)0x200000000LL;
  v34 = 0LL;
  if ( !*((_BYTE *)this + 628)
    || (*(_OWORD *)v36 = *(_OWORD *)CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(v36, a2, v15, v16),
        v30 = (unsigned int)v36[0],
        !v36[0]) )
  {
    ShaderLinkingBody = CommonRenderingShaderBody::GetShaderLinkingBody(v43, v14, v13 >= 37632);
    v41[0] = *(_OWORD *)ShaderLinkingBody;
    v41[1] = *((_OWORD *)ShaderLinkingBody + 1);
    v41[2] = *((_OWORD *)ShaderLinkingBody + 2);
    v42 = ShaderLinkingBody[6];
    *(_OWORD *)v36 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
    v24 = LinkShader((unsigned int)v41, (unsigned int)&v45, (unsigned int)v36, (unsigned int)&v35, (__int64)&v34);
    v21 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x1084u);
      goto LABEL_33;
    }
    v26 = v34;
    v27 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
    v28 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
    v36[0] = (void *)v27;
    if ( v27 < 0 || (v36[1] = v28) == 0LL && v27 )
    {
      gsl::details::terminate(v29);
      JUMPOUT(0x1800C62EDLL);
    }
    v30 = (unsigned int)v36[0];
  }
  v38 = VertexShaderDesc::ResolveKey(&v35);
  v35 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
  v31 = CD3DPixelShader::Create(this, v36[1], v30, &v35);
  v21 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x1093u);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
LABEL_33:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v37, *((_QWORD *)v35 + 15));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
  if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData>>::Add(
                       (char *)this + 1096,
                       v44,
                       &v37) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
    v20 = v38;
    v8 = v37;
    goto LABEL_12;
  }
  v21 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, -2147024882, 0x109Au);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
  v8 = v37;
LABEL_13:
  if ( v8 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v17, v15, v16);
  return v21;
}
