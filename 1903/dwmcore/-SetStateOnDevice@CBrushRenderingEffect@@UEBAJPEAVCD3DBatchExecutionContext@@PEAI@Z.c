/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180035C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x1800172B0 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800357F0 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAU.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1800371AC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x1800372D8 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800D8868 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ @ 0x1801B8D1C (-SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rdi
  struct CD3DDeviceLevel1 *v5; // rsi
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // r15
  bool v10; // zf
  __int64 v11; // rax
  int *v12; // rax
  __int64 v13; // rdx
  float v14; // xmm6_4
  __int64 v15; // rax
  unsigned int v16; // ebx
  signed __int64 v17; // r8
  signed __int64 v18; // r11
  signed __int64 v19; // rdi
  _WORD *v20; // rbx
  signed __int64 v21; // r10
  __int64 v22; // rax
  struct ID3D11Buffer *v23; // rcx
  signed __int64 v24; // rdx
  float *v25; // r15
  signed __int64 v26; // r9
  char *v27; // r12
  __int64 v28; // rax
  unsigned __int8 *v29; // r9
  int v30; // ebx
  __int64 v31; // rcx
  char *v32; // rsi
  unsigned int v33; // ecx
  unsigned int v34; // edi
  const char *v35; // rax
  unsigned int v36; // esi
  char v37; // di
  struct HINSTANCE__ *v38; // rdx
  __int64 v39; // r8
  __int64 ColorChannelDepth; // r9
  void *v41; // r10
  int v42; // ebx
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  __int128 v46; // xmm0
  char v47; // al
  float v48; // xmm1_4
  float *v49; // r8
  __int64 v50; // rbx
  bool v51; // cc
  char v52; // r8
  bool v53; // al
  int Shaders; // eax
  unsigned int v55; // ecx
  struct ID3D11PixelShader *v56; // rdi
  __int64 v57; // rdx
  void (__fastcall *v58)(__int64, __int64, _QWORD, _QWORD); // r12
  __int64 v59; // r8
  __int64 v60; // rcx
  _DWORD *v61; // rax
  unsigned int v62; // esi
  __int64 v63; // rbx
  CRenderingTechnique *v64; // rcx
  int ConstantBuffer; // eax
  unsigned int v66; // ecx
  struct ID3D11Buffer *v67; // rcx
  __int64 v68; // rcx
  CD3DBatchExecutionContext *v69; // r15
  char v71; // al
  char v72; // cl
  bool v73; // al
  char *v74; // rdi
  int v75; // eax
  int v76; // eax
  __int32 v77; // eax
  __int32 v78; // eax
  __int64 v79; // r9
  __int64 v80; // rcx
  __int32 v81; // eax
  __int64 v82; // r8
  __int64 v83; // rdi
  __int64 (__fastcall *v84)(__int64, __m256i *, char *); // rbx
  int v85; // eax
  unsigned int v86; // ecx
  int v87; // kr00_4
  struct ID3D11Buffer *v88; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v89; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v90; // [rsp+40h] [rbp-C0h]
  __int16 v91; // [rsp+50h] [rbp-B0h]
  __int64 v92; // [rsp+60h] [rbp-A0h]
  unsigned __int8 *v93; // [rsp+68h] [rbp-98h]
  struct CD3DDeviceLevel1 *v94; // [rsp+70h] [rbp-90h]
  __int16 v95; // [rsp+80h] [rbp-80h]
  signed __int64 v96; // [rsp+90h] [rbp-70h]
  unsigned int v97; // [rsp+98h] [rbp-68h]
  float *v98; // [rsp+A0h] [rbp-60h]
  signed __int64 v99; // [rsp+A8h] [rbp-58h]
  signed __int64 v100; // [rsp+B0h] [rbp-50h]
  signed __int64 v101; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C0h] [rbp-40h]
  struct ID3D11PixelShader *v103; // [rsp+C8h] [rbp-38h] BYREF
  CD3DBatchExecutionContext *v104; // [rsp+D0h] [rbp-30h]
  __m256i v105; // [rsp+D8h] [rbp-28h]
  int v106; // [rsp+F8h] [rbp-8h]
  __int64 v107; // [rsp+FCh] [rbp-4h]
  int v108; // [rsp+104h] [rbp+4h]
  int v109; // [rsp+108h] [rbp+8h]
  __int128 v110; // [rsp+110h] [rbp+10h]
  signed __int64 v111; // [rsp+120h] [rbp+20h]
  signed __int64 v112; // [rsp+128h] [rbp+28h]
  signed __int64 v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  signed __int64 v115; // [rsp+140h] [rbp+40h]
  signed __int64 v116; // [rsp+148h] [rbp+48h]
  signed __int64 v117; // [rsp+150h] [rbp+50h]
  __int64 v118; // [rsp+158h] [rbp+58h]
  unsigned int *v119; // [rsp+160h] [rbp+60h]
  DXGI_FORMAT v120[6]; // [rsp+168h] [rbp+68h] BYREF
  const char *v121; // [rsp+180h] [rbp+80h] BYREF
  int v122; // [rsp+188h] [rbp+88h]
  char v123; // [rsp+190h] [rbp+90h] BYREF
  char v124; // [rsp+191h] [rbp+91h] BYREF
  char v125; // [rsp+192h] [rbp+92h] BYREF
  char v126; // [rsp+193h] [rbp+93h] BYREF
  _BYTE v127[2]; // [rsp+194h] [rbp+94h] BYREF
  char v128; // [rsp+196h] [rbp+96h] BYREF
  char v129; // [rsp+197h] [rbp+97h] BYREF
  char v130; // [rsp+198h] [rbp+98h] BYREF
  const char *v131; // [rsp+1A0h] [rbp+A0h]
  int v132; // [rsp+1A8h] [rbp+A8h]
  const char *v133; // [rsp+1C0h] [rbp+C0h]
  int v134; // [rsp+1C8h] [rbp+C8h]
  const char *v135; // [rsp+1E0h] [rbp+E0h]
  int v136; // [rsp+1E8h] [rbp+E8h]
  int v137; // [rsp+200h] [rbp+100h]
  const char *v138; // [rsp+208h] [rbp+108h]
  int v139; // [rsp+210h] [rbp+110h]
  __int64 v140; // [rsp+218h] [rbp+118h]
  __int64 v141; // [rsp+220h] [rbp+120h]
  __m256i v142; // [rsp+230h] [rbp+130h] BYREF
  __int128 v143; // [rsp+250h] [rbp+150h]
  int v144; // [rsp+260h] [rbp+160h]
  _QWORD v145[4]; // [rsp+268h] [rbp+168h] BYREF
  _QWORD v146[4]; // [rsp+288h] [rbp+188h] BYREF

  v3 = *((_QWORD *)a2 + 4);
  v5 = (struct CD3DDeviceLevel1 *)*((_QWORD *)a2 + 1);
  v7 = *((_QWORD *)a2 + 2);
  v119 = a3;
  v8 = v3 + 160;
  v104 = a2;
  v9 = 0LL;
  v102 = v8;
  v94 = v5;
  v103 = 0LL;
  memset_0(&v121, 0, 0x80uLL);
  v122 = 0;
  v121 = "NoOp";
  v131 = "NoOp";
  v133 = "NoOp";
  v135 = "NoOp";
  v138 = "NoOp";
  v10 = *((_DWORD *)a2 + 27) == 1;
  v132 = 0;
  v134 = 0;
  v136 = 0;
  v139 = 0;
  v140 = 0LL;
  v141 = 0LL;
  if ( v10 )
    HIWORD(v140) = 257;
  else
    HIWORD(v140) = 0;
  v10 = *((_DWORD *)a2 + 16) == 22;
  BYTE5(v140) = 1;
  LOBYTE(v140) = v10;
  v11 = *((_QWORD *)a2 + 6);
  if ( v11 )
  {
    v12 = (int *)(v11 + 16);
  }
  else
  {
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                       + (unsigned int)tls_index)
                                                                     + 4LL) )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
    }
    v12 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v13 = v8 + 16;
  v14 = *(float *)&FLOAT_1_0;
  v137 = *v12;
  BYTE1(v140) = *(_BYTE *)(v8 + 208);
  v15 = *((_QWORD *)this + 2);
  v118 = v8 + 16;
  v89 = 0;
  v16 = *(_DWORD *)(v15 + 84);
  v97 = v16;
  if ( !v16 )
  {
LABEL_44:
    if ( (*(_BYTE *)(v15 + 88) & 0x10) == 0 || v16 >= 4 )
      v14 = 0.0;
    if ( *(float *)(v13 + 16) != v14 )
    {
      *(_BYTE *)(v8 + 8) = 1;
      *(float *)(v8 + 32) = v14;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v7 + 64LL))(v7, 0LL, v16, v145);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v7 + 80LL))(v7, 0LL, v16, v146);
    Shaders = CRenderingTechnique::GetShaders(
                *((CRenderingTechnique **)this + 2),
                v5,
                (const struct ShaderLinkingConfig *)&v121,
                &v89,
                &v103);
    v56 = v103;
    v42 = Shaders;
    if ( Shaders < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, Shaders, 0xA8u, 0LL);
      goto LABEL_66;
    }
    v57 = 0LL;
    v58 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 88LL);
    if ( *((int *)v5 + 296) <= 0 )
    {
      v62 = v89;
    }
    else
    {
      v59 = *((int *)v5 + 296);
      v60 = 0LL;
      v61 = (_DWORD *)*((_QWORD *)v5 + 146);
      v62 = v89;
      while ( *v61 != v89 )
      {
        v57 = (unsigned int)(v57 + 1);
        ++v60;
        ++v61;
        if ( v60 >= v59 )
          goto LABEL_126;
      }
      if ( (_DWORD)v57 != -1 )
      {
        v63 = *(_QWORD *)(*((_QWORD *)v94 + 147) + 8LL * (int)v57);
        if ( !v63 )
        {
LABEL_59:
          v58(v7, v9, 0LL, 0LL);
          (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(
            v7,
            v56,
            0LL,
            0LL);
          v64 = (CRenderingTechnique *)*((_QWORD *)this + 2);
          v88 = 0LL;
          ConstantBuffer = CRenderingTechnique::GetConstantBuffer(v64, v94, &v88);
          v42 = ConstantBuffer;
          if ( ConstantBuffer >= 0 )
          {
            if ( v88 )
            {
              (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **))(*(_QWORD *)v7 + 128LL))(
                v7,
                0LL,
                1LL,
                &v88);
              v67 = v88;
              if ( v88 )
              {
                v88 = 0LL;
                ((void (__fastcall *)(struct ID3D11Buffer *))v67->lpVtbl->Release)(v67);
              }
            }
            v68 = *((_QWORD *)this + 2);
            v69 = v104;
            if ( (*(_BYTE *)(v68 + 88) & 2) != 0 )
            {
              if ( *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(v104) == -1 )
                goto LABEL_127;
              v68 = *((_QWORD *)this + 2);
            }
            if ( (*(_BYTE *)(v68 + 88) & 4) == 0 )
            {
LABEL_65:
              *v119 = v62;
              goto LABEL_66;
            }
LABEL_127:
            CD3DBatchExecutionContext::SetNoOpLightingConstantBuffers(v69);
            goto LABEL_65;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, ConstantBuffer, 0xB0u, 0LL);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v88);
LABEL_66:
          if ( v56 )
            ((void (__fastcall *)(struct ID3D11PixelShader *))v56->lpVtbl->Release)(v56);
          return (unsigned int)v42;
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v63 + 8LL))(
          *(_QWORD *)(*((_QWORD *)v94 + 147) + 8LL * (int)v57),
          v57,
          v59);
        v9 = v63;
LABEL_57:
        if ( v63 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
        goto LABEL_59;
      }
    }
LABEL_126:
    v63 = 0LL;
    goto LABEL_57;
  }
  v114 = 16LL;
  v98 = (float *)(v8 + 112);
  v111 = (char *)&v121 - (char *)this;
  v17 = &v128 - (char *)this;
  v117 = &v128 - (char *)this;
  v112 = &v130 - (char *)this;
  v18 = &v123 - (char *)this;
  v100 = &v123 - (char *)this;
  v113 = &v129 - (char *)this;
  v19 = &v124 - (char *)this;
  v101 = &v124 - (char *)this;
  v115 = &v128 - (char *)this;
  v20 = (_WORD *)((char *)this + 120);
  v21 = v127 - (_BYTE *)this;
  v93 = (unsigned __int8 *)this + 120;
  v22 = 0LL;
  v99 = v127 - (_BYTE *)this;
  v23 = 0LL;
  v92 = 0LL;
  v88 = 0LL;
  v24 = &v126 - (char *)this;
  v25 = (float *)((char *)this + 132);
  v26 = &v125 - (char *)this;
  v116 = &v126 - (char *)this;
  v96 = &v125 - (char *)this;
  v27 = (char *)this + 32;
  while ( 1 )
  {
    LOBYTE(v24) = 1;
    if ( !*((_QWORD *)v27 - 1) )
    {
      *((_BYTE *)v25 + v17 - 132) = 1;
      v145[v22] = 0LL;
      v146[v22] = 0LL;
      goto LABEL_36;
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD, signed __int64))(**(_QWORD **)v27 + 32LL))(*(_QWORD *)v27, v24);
    v29 = v93;
    v145[v92] = v28;
    LOWORD(v28) = *v20;
    v30 = 0;
    v90 = v28;
    v31 = v29[2] + 4 * (BYTE1(v28) + 4 * (unsigned int)(unsigned __int8)v28);
    v32 = (char *)v5 + 8 * v31;
    if ( *((_QWORD *)v32 + 192) )
      goto LABEL_12;
    v95 = *(_WORD *)v29;
    if ( !HIBYTE(v95) || (v76 = 37120, !v29[2]) )
      v76 = 37632;
    if ( *((_DWORD *)v94 + 185) < v76 )
    {
      v30 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024809, 0xE5Eu, 0LL);
      v34 = -2147024809;
LABEL_121:
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v30, 0x67u, 0LL);
      return v34;
    }
    v91 = *(_WORD *)v29;
    v77 = 0;
    if ( (_BYTE)v91 )
      v77 = 21;
    v105.m256i_i32[0] = v77;
    v78 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v91));
    v80 = *(unsigned __int8 *)(v79 + 2);
    v105.m256i_i32[1] = v78;
    v81 = ExtendMode::ToD3D11TextureAddressMode(v80);
    v83 = *(_QWORD *)(v82 + 632);
    v105.m256i_i32[2] = v81;
    *(__int64 *)((char *)&v105.m256i_i64[1] + 4) = 3LL;
    v107 = 0LL;
    v106 = 0;
    v108 = 0;
    v105.m256i_i32[5] = 1;
    v105.m256i_i64[3] = 8LL;
    v109 = 2139095039;
    v143 = 0u;
    v144 = 2139095039;
    v142 = v105;
    v84 = *(__int64 (__fastcall **)(__int64, __m256i *, char *))(*(_QWORD *)v83 + 184LL);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v32 + 192);
    v85 = v84(v83, &v142, v32 + 1536);
    v30 = v85;
    if ( v85 >= 0 )
    {
LABEL_12:
      v33 = v92;
      v146[v92] = *((_QWORD *)v32 + 192);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0xE62u, 0LL);
    }
    v34 = v30;
    if ( v30 < 0 )
      goto LABEL_121;
    (*(void (__fastcall **)(_QWORD, DXGI_FORMAT *))(**(_QWORD **)v27 + 24LL))(*(_QWORD *)v27, v120);
    *(_QWORD *)&v110 = "NoOp";
    v35 = (const char *)&unk_1802B2AB8;
    DWORD2(v110) = 0;
    v36 = 0;
    while ( *(_DWORD *)v35 != v120[2] )
    {
      v35 += 4;
      if ( v35 == "NoOp" )
        goto LABEL_17;
    }
    if ( v35 == "NoOp" )
    {
LABEL_17:
      v37 = 0;
      goto LABEL_18;
    }
    v37 = 1;
LABEL_18:
    if ( !v27[8] )
      (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v27 - 1) + 104LL))(*((_QWORD *)v27 - 1));
    ColorChannelDepth = GetColorChannelDepth(v120[0]);
    v42 = -2003292288;
    v43 = (int)v41;
    if ( (_DWORD)v38 )
    {
      v87 = (_DWORD)v38 - 1;
      v38 = &_ImageBase;
      switch ( v87 )
      {
        case 0:
          v43 = 2;
          v42 = (int)v41;
          v44 = 2;
          goto LABEL_23;
        case 1:
          v42 = (int)v41;
          if ( (_DWORD)ColorChannelDepth == 8 )
          {
            v43 = 14;
            v44 = 14;
            goto LABEL_23;
          }
          v43 = 22;
          if ( (_DWORD)ColorChannelDepth != 10 )
          {
            v42 = -2003292288;
            v43 = (int)v41;
          }
          break;
        case 2:
          v43 = 22;
          v42 = (int)v41;
          v44 = 22;
          goto LABEL_23;
        case 11:
          v43 = 10;
          v42 = (int)v41;
          v44 = 10;
          goto LABEL_23;
        case 13:
          v43 = 34;
          v42 = (int)v41;
          v44 = 34;
          goto LABEL_23;
        case 19:
          v42 = (int)v41;
          if ( (_DWORD)ColorChannelDepth == 8 )
          {
            v43 = 18;
            v44 = 18;
            goto LABEL_23;
          }
          v43 = 26;
          if ( (_DWORD)ColorChannelDepth != 10 )
          {
            v42 = -2003292288;
            v43 = (int)v41;
          }
          break;
        case 20:
          v43 = 30;
          v42 = (int)v41;
          v44 = 30;
          goto LABEL_23;
        default:
          break;
      }
    }
    else
    {
      v42 = (int)v41;
    }
    v44 = v43;
    if ( v42 < 0 )
    {
      v46 = v110;
    }
    else
    {
LABEL_23:
      v45 = v43 + 1;
      if ( !(_BYTE)v39 )
        v45 = v44;
      v44 = 2 * v45;
      v46 = *((_OWORD *)&ColorConversion::g_rgShaders + v45);
      v110 = v46;
      v36 = DWORD2(v46);
    }
    if ( v42 < 0 )
      break;
    if ( v36 > 1 )
      *(_OWORD *)((char *)v25 + v111 - 132) = v46;
    v10 = v27[8] == 0;
    *((_BYTE *)v25 + v112 - 132) = v37;
    if ( !v10
      || (v47 = (*(__int64 (__fastcall **)(_QWORD, struct HINSTANCE__ *, __int64, __int64))(**((_QWORD **)v27 - 1)
                                                                                          + 104LL))(
                  *((_QWORD *)v27 - 1),
                  v38,
                  v39,
                  ColorChannelDepth)) != 0 )
    {
      v47 = 1;
    }
    *((_BYTE *)v25 + v113 - 132) = v47;
    v24 = *v93;
    if ( *((_BYTE *)this + v92 + 260) )
      v48 = 0.0;
    else
      v48 = *(float *)&FLOAT_1_0;
    v49 = v98;
    if ( v98[(unsigned __int64)v114 / 4 - 4] != v48 )
    {
      *(_BYTE *)(v102 + 8) = 1;
      *v49 = v48;
    }
    v19 = v101;
    v18 = v100;
    v21 = v99;
    v26 = v96;
    v23 = v88;
    v5 = v94;
LABEL_36:
    v50 = *((_QWORD *)this + 2);
    if ( *((_BYTE *)v25 + v115 - 132) )
      goto LABEL_76;
    v51 = v25[2] <= *v25;
    v52 = *((_BYTE *)&v23[12].lpVtbl + v50 + 7);
    *((_BYTE *)v25 + v116 - 132) = v52;
    v53 = v51 || v25[3] <= v25[1];
    if ( *((_BYTE *)&v23[12].lpVtbl + v50 + 6) && !v53 )
    {
      v71 = *((_BYTE *)&v23[12].lpVtbl + v50 + 4);
      v72 = *((_BYTE *)&v23[12].lpVtbl + v50 + 5);
      *((_BYTE *)v25 + v19 - 132) = v72;
      *((_BYTE *)v25 + v26 - 132) = 1;
      *((_BYTE *)v25 + v18 - 132) = v71;
      v73 = (_BYTE)v24 == 1 && (v71 == 2 || v72 == 2);
      v23 = v88;
      *((_BYTE *)v25 + v21 - 132) = v73;
    }
    if ( *((_BYTE *)v25 + v26 - 132) || v52 )
    {
LABEL_76:
      v74 = (char *)v23 + v50;
      v75 = memcmp_0((char *)&v23[13] + v50, v25, 0x20uLL);
      v23 = v88;
      v26 = v96;
      if ( v75 )
      {
        *(_OWORD *)(v74 + 104) = *(_OWORD *)v25;
        *(_OWORD *)(v74 + 120) = *((_OWORD *)v25 + 1);
        *(_BYTE *)(v50 + 276) = 1;
      }
    }
    v23 = (struct ID3D11Buffer *)((char *)v23 + 44);
    v93 += 3;
    v22 = v92 + 1;
    ++v98;
    v27 += 24;
    v16 = v97;
    v25 += 8;
    ++v89;
    ++v92;
    v88 = v23;
    if ( v89 >= v97 )
    {
      v15 = *((_QWORD *)this + 2);
      v9 = 0LL;
      v8 = v102;
      v13 = v118;
      goto LABEL_44;
    }
    v20 = v93;
    v21 = v99;
    v18 = v100;
    v19 = v101;
    v17 = v117;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v42, 0x74u, v41);
  return (unsigned int)v42;
}
