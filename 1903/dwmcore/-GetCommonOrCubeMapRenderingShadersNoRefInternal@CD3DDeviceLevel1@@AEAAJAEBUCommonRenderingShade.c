/*
 * XREFs of ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180036440
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180028680 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800367E0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180258860 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800285E0 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V-$CMa.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180031360 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033794 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180036E60 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x180047A70 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800CF384 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800D2C34 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x1801AD3B4 (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$span@$$CBE$0-0@gsl@@AEBU1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
        CD3DDeviceLevel1 *this,
        const struct CommonRenderingShaderDesc *a2,
        char a3,
        unsigned int *a4,
        struct ID3D11PixelShader **a5)
{
  struct ID3D11PixelShader *v8; // rdi
  int v9; // r14d
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  int v12; // r12d
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  bool v22; // zf
  __int64 ShaderLinkingBody; // rax
  int v24; // eax
  unsigned int v25; // ecx
  struct ID3D10Blob *v26; // rbx
  __int64 v27; // rsi
  void *v28; // rax
  unsigned int v29; // ebx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  struct ID3D10Blob *v33; // [rsp+30h] [rbp-D0h] BYREF
  struct CD3DPixelShader *v34; // [rsp+38h] [rbp-C8h] BYREF
  void *v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11PixelShader *v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-A8h]
  unsigned int *v38; // [rsp+60h] [rbp-A0h]
  struct ID3D11PixelShader **v39; // [rsp+68h] [rbp-98h]
  _OWORD v40[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  char v42[56]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v44; // [rsp+F0h] [rbp-10h] BYREF
  bool v45; // [rsp+105h] [rbp+5h]
  bool v46; // [rsp+107h] [rbp+7h]
  const char *v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  const char *v49; // [rsp+130h] [rbp+30h]
  int v50; // [rsp+138h] [rbp+38h]
  const char *v51; // [rsp+150h] [rbp+50h]
  int v52; // [rsp+158h] [rbp+58h]
  int v53; // [rsp+170h] [rbp+70h]
  __int128 v54; // [rsp+178h] [rbp+78h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  __int64 v56; // [rsp+190h] [rbp+90h]

  v39 = a5;
  v38 = a4;
  v8 = 0LL;
  LODWORD(v33) = 0;
  memset_0(&v44, 0, 0x80uLL);
  v9 = *(_DWORD *)a2;
  v10 = *(_OWORD *)((char *)a2 + 8);
  v47 = "NoOp";
  v49 = "NoOp";
  v51 = "NoOp";
  v55 = 0LL;
  v56 = 0LL;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v53 = -1;
  v44 = v10;
  v46 = (v9 & 4) != 0;
  *(_DWORD *)((char *)&v55 + 1) = (v9 & 0x10) != 0;
  HIBYTE(v55) = *((_BYTE *)a2 + 44);
  LOBYTE(v55) = (v9 & 8) != 0;
  v11 = *(_OWORD *)((char *)a2 + 24);
  v12 = *((_DWORD *)this + 185);
  BYTE6(v55) = *((_BYTE *)a2 + 45);
  LOBYTE(v56) = *((_BYTE *)a2 + 46);
  BYTE4(v55) = a3;
  v54 = v11;
  if ( v12 >= 37632 )
  {
    v53 = *((_DWORD *)a2 + 10);
    v45 = (v9 & 0x20) != 0;
  }
  v13 = v9 & 3;
  ShaderLinkingConfig::GetLookupKey(&v44, &v43, v13);
  v16 = 0LL;
  if ( *((int *)this + 302) <= 0 )
    goto LABEL_17;
  v15 = *((int *)this + 302);
  v17 = *((_QWORD *)this + 149);
  v14 = 0LL;
  while ( *(_QWORD *)v17 != (_QWORD)v43 || *(_DWORD *)(v17 + 8) != DWORD2(v43) )
  {
    v16 = (unsigned int)(v16 + 1);
    ++v14;
    v17 += 16LL;
    if ( v14 >= v15 )
      goto LABEL_17;
  }
  if ( (_DWORD)v16 == -1 )
  {
LABEL_17:
    v36 = 0LL;
  }
  else
  {
    v18 = *((_QWORD *)this + 150) + 16LL * (int)v16;
    v8 = *(struct ID3D11PixelShader **)v18;
    v36 = v8;
    if ( v8 )
      ((void (__fastcall *)(struct ID3D11PixelShader *, __int64, __int64, __int64))v8->lpVtbl->AddRef)(
        v8,
        v16,
        v14,
        v15);
    v19 = *(_DWORD *)(v18 + 8);
    if ( v8 )
    {
      v20 = (unsigned int)v33;
LABEL_12:
      *v38 = v19;
      *v39 = v8;
      goto LABEL_13;
    }
  }
  v22 = *((_BYTE *)this + 628) == 0;
  v34 = (struct CD3DPixelShader *)0x200000000LL;
  v33 = 0LL;
  if ( v22
    || (*(_OWORD *)v35 = *(_OWORD *)CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(v35, a2, v14, v15),
        v29 = (unsigned int)v35[0],
        !v35[0]) )
  {
    LOBYTE(v14) = v12 >= 37632;
    ShaderLinkingBody = CommonRenderingShaderBody::GetShaderLinkingBody(v42, v13, v14, v15);
    v40[0] = *(_OWORD *)ShaderLinkingBody;
    v40[1] = *(_OWORD *)(ShaderLinkingBody + 16);
    v40[2] = *(_OWORD *)(ShaderLinkingBody + 32);
    v41 = *(_QWORD *)(ShaderLinkingBody + 48);
    *(_OWORD *)v35 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    v24 = LinkShader((__int64)v40, (__int64)&v44, (unsigned __int64 *)v35, (__int64)&v34, &v33);
    v20 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x1091u, 0LL);
      goto LABEL_33;
    }
    v26 = v33;
    v27 = ((int (__fastcall *)(struct ID3D10Blob *))v33->lpVtbl->GetBufferSize)(v33);
    v28 = (void *)((__int64 (__fastcall *)(struct ID3D10Blob *))v26->lpVtbl->GetBufferPointer)(v26);
    v35[0] = (void *)v27;
    if ( v27 < 0 || (v35[1] = v28) == 0LL && v27 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v29 = (unsigned int)v35[0];
  }
  v37 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)&v34);
  v34 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v34);
  v30 = CD3DPixelShader::Create(this, v35[1], v29, &v34);
  v20 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x10A0u, 0LL);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v34);
LABEL_33:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v36, *((_QWORD *)v34 + 15));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v34);
  if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData>>::Add(
                       (void **)this + 149,
                       &v43,
                       (const struct CD3DDeviceLevel1::CommonRenderingShadersData *)&v36) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    v19 = v37;
    v8 = v36;
    goto LABEL_12;
  }
  v20 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024882, 0x10A7u, 0LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
  v8 = v36;
LABEL_13:
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11PixelShader *, __int64, __int64, __int64))v8->lpVtbl->Release)(v8, v16, v14, v15);
  return v20;
}
