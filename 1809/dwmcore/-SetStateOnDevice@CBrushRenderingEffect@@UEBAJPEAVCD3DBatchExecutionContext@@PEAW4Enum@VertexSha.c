/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C5830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180015800 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x18007AA5C (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5400 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800C6DD0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800C721C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ @ 0x180187B44 (-SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ.c)
 *     ?SetData@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAXAEBV?$array@M$07@std@@@Z @ 0x18022D1E4 (-SetData@-$CTypedConstantBuffer@V-$array@M$07@std@@@@QEAAXAEBV-$array@M$07@std@@@Z.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        enum VertexShaderKey::Enum *a3)
{
  struct CD3DDeviceLevel1 *v3; // rsi
  struct CD3DBatchExecutionContext *v4; // r13
  __int64 v5; // r12
  __int64 v7; // r15
  bool v8; // zf
  __int64 v9; // rax
  int *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  float v14; // xmm6_4
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rcx
  char *v18; // r8
  int v19; // ebx
  __int64 v20; // rcx
  char *v21; // rdi
  unsigned int v22; // edi
  __int64 v23; // rcx
  int v24; // edx
  const char *v25; // rax
  unsigned int v26; // r15d
  char v27; // si
  int v28; // edi
  char v29; // al
  bool v30; // r9
  int v31; // r8d
  int v32; // ebx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int128 v35; // xmm0
  __int64 v36; // rbx
  char v37; // al
  float v38; // xmm1_4
  __int64 v39; // rax
  __int64 v40; // rdi
  float *v41; // r15
  __int64 v42; // rsi
  bool v43; // al
  char v44; // al
  int Shaders; // eax
  unsigned int v46; // ecx
  struct ID3D11PixelShader *v47; // rbx
  int v48; // r15d
  __int64 v49; // rsi
  struct ID3D11PixelShaderVtbl *lpVtbl; // rcx
  int ResourceNoRef; // eax
  unsigned int v52; // ecx
  int updated; // eax
  unsigned int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rcx
  char v58; // al
  char v59; // cl
  bool v60; // al
  __int64 v61; // r12
  int v62; // eax
  __int32 v63; // eax
  __int32 v64; // eax
  __int64 v65; // r8
  char v66; // cl
  __int32 v67; // eax
  __int64 v68; // rbx
  int v69; // eax
  float v70; // xmm2_4
  float v71; // xmm0_4
  __int64 v72; // rax
  struct CD3DBatchExecutionContext **v73; // rsi
  unsigned int v74; // ecx
  char v75; // [rsp+40h] [rbp-C0h]
  struct ID3D11PixelShaderVtbl *v76; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v77; // [rsp+50h] [rbp-B0h]
  __int16 v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+70h] [rbp-90h]
  struct ID3D11PixelShader *v80; // [rsp+78h] [rbp-88h] BYREF
  __int16 v81; // [rsp+80h] [rbp-80h]
  struct CD3DDeviceLevel1 *v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h]
  struct CD3DBatchExecutionContext *v84; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v85[2]; // [rsp+A8h] [rbp-58h] BYREF
  __m256i v86; // [rsp+B0h] [rbp-50h]
  int v87; // [rsp+D0h] [rbp-30h]
  __int64 v88; // [rsp+D4h] [rbp-2Ch]
  int v89; // [rsp+DCh] [rbp-24h]
  int v90; // [rsp+E0h] [rbp-20h]
  __int128 v91; // [rsp+E8h] [rbp-18h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  enum VertexShaderKey::Enum *v93; // [rsp+100h] [rbp+0h]
  int v94; // [rsp+108h] [rbp+8h] BYREF
  int v95; // [rsp+110h] [rbp+10h]
  const char *v96; // [rsp+120h] [rbp+20h] BYREF
  int v97; // [rsp+128h] [rbp+28h]
  _BYTE v98[16]; // [rsp+130h] [rbp+30h]
  const char *v99; // [rsp+140h] [rbp+40h]
  int v100; // [rsp+148h] [rbp+48h]
  const char *v101; // [rsp+160h] [rbp+60h]
  int v102; // [rsp+168h] [rbp+68h]
  const char *v103; // [rsp+180h] [rbp+80h]
  int v104; // [rsp+188h] [rbp+88h]
  int v105; // [rsp+1A0h] [rbp+A0h]
  const char *v106; // [rsp+1A8h] [rbp+A8h]
  int v107; // [rsp+1B0h] [rbp+B0h]
  __int64 v108; // [rsp+1B8h] [rbp+B8h]
  __int64 v109; // [rsp+1C0h] [rbp+C0h]
  float v110[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  __m256i v111; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v112; // [rsp+210h] [rbp+110h]
  int v113; // [rsp+220h] [rbp+120h]
  _QWORD v114[4]; // [rsp+228h] [rbp+128h] BYREF
  _QWORD v115[4]; // [rsp+248h] [rbp+148h] BYREF

  v3 = (struct CD3DDeviceLevel1 *)*((_QWORD *)a2 + 1);
  v4 = a2;
  v5 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a2 + 4);
  v93 = a3;
  v84 = a2;
  v82 = v3;
  v92 = v5;
  v83 = v7;
  v80 = 0LL;
  memset_0(&v96, 0, 0x80uLL);
  v97 = 0;
  v96 = "NoOp";
  v99 = "NoOp";
  v101 = "NoOp";
  v103 = "NoOp";
  v106 = "NoOp";
  v8 = *((_DWORD *)v4 + 25) == 1;
  v100 = 0;
  v102 = 0;
  v104 = 0;
  v107 = 0;
  v108 = 0LL;
  v109 = 0LL;
  if ( v8 )
  {
    LOBYTE(v108) = 1;
    HIBYTE(v108) = 1;
  }
  else
  {
    LOBYTE(v108) = 0;
    HIBYTE(v108) = 0;
  }
  v8 = *((_DWORD *)v4 + 16) == 22;
  LOBYTE(v109) = 1;
  BYTE1(v108) = v8;
  v9 = *((_QWORD *)v4 + 6);
  if ( v9 )
  {
    v10 = (int *)(v9 + 16);
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
    v10 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v11 = *((_QWORD *)this + 2);
  v105 = *v10;
  BYTE2(v108) = *(_BYTE *)(v7 + 256);
  LODWORD(v76) = *(_DWORD *)(v11 + 92);
  v12 = (unsigned int)v76;
  v75 = 0;
  memset_0(v110, 0, sizeof(v110));
  v14 = FLOAT_1_0;
  v79 = 0;
  if ( (_DWORD)v76 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      LOBYTE(v13) = 1;
      v16 = 3 * (v15 + 1);
      if ( *((_QWORD *)this + 3 * v15 + 3) )
      {
        v17 = *((_QWORD *)this + 3 * v15 + 4);
        v114[v15] = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v13);
        v18 = (char *)this + 2 * v15;
        v19 = 0;
        v77 = *(_WORD *)&v18[v15 + 120];
        v20 = (unsigned __int8)v18[v15 + 122] + 4 * (HIBYTE(v77) + 4 * (unsigned int)(unsigned __int8)v77);
        v21 = (char *)v3 + 8 * v20;
        if ( *((_QWORD *)v21 + 172) )
          goto LABEL_12;
        v81 = *(_WORD *)&v18[v15 + 120];
        if ( !HIBYTE(v81) || (v62 = 37120, !v18[v15 + 122]) )
          v62 = 37632;
        if ( *((_DWORD *)v3 + 185) < v62 )
        {
          v19 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024809, 0xE6Bu);
          v22 = -2147024809;
LABEL_130:
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x6Cu);
          return v22;
        }
        v78 = *(_WORD *)&v18[v15 + 120];
        v63 = 0;
        if ( (_BYTE)v78 )
          v63 = 21;
        v86.m256i_i32[0] = v63;
        v64 = ExtendMode::ToD3D11TextureAddressMode(SHIBYTE(v78));
        v66 = *(_BYTE *)(v65 + v15 + 122);
        v86.m256i_i32[1] = v64;
        v67 = ExtendMode::ToD3D11TextureAddressMode(v66);
        v68 = *((_QWORD *)v3 + 79);
        v86.m256i_i32[2] = v67;
        *(__int64 *)((char *)&v86.m256i_i64[1] + 4) = 3LL;
        v86.m256i_i32[5] = 1;
        v86.m256i_i64[3] = 8LL;
        v88 = 0LL;
        v111 = v86;
        v87 = 0;
        v89 = 0;
        v90 = 2139095039;
        v112 = 0u;
        v113 = 2139095039;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v21 + 172);
        v69 = (*(__int64 (__fastcall **)(__int64, __m256i *, char *))(*(_QWORD *)v68 + 184LL))(v68, &v111, v21 + 1376);
        v19 = v69;
        if ( v69 >= 0 )
LABEL_12:
          v115[v15] = *((_QWORD *)v21 + 172);
        else
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v69, 0xE6Fu);
        v22 = v19;
        if ( v19 < 0 )
          goto LABEL_130;
        v23 = *((_QWORD *)this + 3 * v15 + 4);
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 24LL))(v23, &v94);
        v24 = v95;
        *(_QWORD *)&v91 = "NoOp";
        v25 = (const char *)&unk_180280F00;
        DWORD2(v91) = 0;
        v26 = 0;
        while ( *(_DWORD *)v25 != v95 )
        {
          v25 += 4;
          if ( v25 == "NoOp" )
            goto LABEL_17;
        }
        if ( v25 == "NoOp" )
        {
LABEL_17:
          v27 = 0;
          goto LABEL_18;
        }
        v27 = 1;
LABEL_18:
        if ( v94 == 87 || v94 == 65 )
        {
LABEL_19:
          v28 = 8;
        }
        else
        {
          switch ( v94 )
          {
            case 2:
              v28 = 32;
              break;
            case 10:
            case 11:
              v28 = 16;
              break;
            case 24:
              v28 = 10;
              break;
            case 28:
            case 49:
            case 61:
            case 88:
            case 91:
            case 103:
            case 106:
            case 107:
              goto LABEL_19;
            default:
              v28 = 0;
              break;
          }
        }
        v30 = 1;
        if ( !*((_BYTE *)this + 24 * v15 + 40) )
        {
          v29 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3 * v15 + 3) + 104LL))(*((_QWORD *)this
                                                                                                + 3 * v15
                                                                                                + 3));
          v24 = v95;
          if ( !v29 )
            v30 = 0;
        }
        v31 = 0;
        v32 = -2003292288;
        if ( v24 )
        {
          switch ( v24 )
          {
            case 1:
              v31 = 2;
              v32 = 0;
              LODWORD(v33) = 2;
              goto LABEL_26;
            case 2:
              v32 = 0;
              if ( v28 == 8 )
              {
                v31 = 14;
                LODWORD(v33) = 14;
                goto LABEL_26;
              }
              v31 = 22;
              if ( v28 != 10 )
              {
                v32 = -2003292288;
                v31 = 0;
              }
              break;
            case 3:
              v31 = 22;
              v32 = 0;
              LODWORD(v33) = 22;
              goto LABEL_26;
            case 12:
              v31 = 10;
              v32 = 0;
              LODWORD(v33) = 10;
              goto LABEL_26;
            case 14:
              v31 = 34;
              v32 = 0;
              LODWORD(v33) = 34;
              goto LABEL_26;
            case 20:
              v32 = 0;
              if ( v28 == 8 )
              {
                v31 = 18;
                LODWORD(v33) = 18;
                goto LABEL_26;
              }
              v31 = 26;
              if ( v28 != 10 )
              {
                v32 = -2003292288;
                v31 = 0;
              }
              break;
            case 21:
              v31 = 30;
              v32 = 0;
              LODWORD(v33) = 30;
              goto LABEL_26;
            default:
              break;
          }
        }
        else
        {
          v32 = 0;
        }
        LODWORD(v33) = v31;
        if ( v32 < 0 )
        {
          v35 = v91;
        }
        else
        {
LABEL_26:
          v34 = v31 + 1;
          if ( !v30 )
            v34 = v33;
          v33 = 16LL * v34;
          v35 = *(_OWORD *)((char *)&ColorConversion::g_rgShaders + v33);
          v91 = v35;
          v26 = DWORD2(v35);
        }
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x79u);
          return (unsigned int)v32;
        }
        if ( v26 > 1 )
          *(_OWORD *)&(&v96)[4 * v15] = v35;
        v36 = 32 * v15;
        v8 = *((_BYTE *)this + 24 * v15 + 40) == 0;
        v98[32 * v15 + 13] = v27;
        if ( !v8
          || (v37 = (*(__int64 (__fastcall **)(_QWORD, struct HINSTANCE__ *))(**((_QWORD **)this + 3 * v15 + 3) + 104LL))(
                      *((_QWORD *)this + 3 * v15 + 3),
                      &_ImageBase)) != 0 )
        {
          v37 = 1;
        }
        v8 = *((_BYTE *)this + v15 + 260) == 0;
        v98[32 * v15 + 12] = v37;
        v13 = *((unsigned __int8 *)this + 2 * v15 + v15 + 120);
        if ( v8 )
          v38 = FLOAT_1_0;
        else
          v38 = 0.0;
        v39 = v83;
        if ( *(float *)(v83 + 4 * v15 + 160) != v38 )
        {
          *(_BYTE *)(v83 + 120) = 1;
          *(float *)(v39 + 4 * v15 + 160) = v38;
        }
      }
      else
      {
        v114[v15] = 0LL;
        v36 = 32 * v15;
        v115[v15] = 0LL;
        v98[32 * v15 + 11] = 1;
      }
      v40 = *((_QWORD *)this + 2);
      v41 = (float *)((char *)this + v36 + 132);
      v42 = 60 * v15;
      if ( v98[v36 + 11] )
        goto LABEL_75;
      v43 = v41[2] <= *v41 || v41[3] <= v41[1];
      if ( *(_BYTE *)(v42 + v40 + 110) && !v43 )
      {
        v58 = *(_BYTE *)(v42 + v40 + 108);
        v59 = *(_BYTE *)(v42 + v40 + 109);
        v98[v36] = v58;
        v98[v36 + 1] = v59;
        v98[v36 + 8] = 1;
        v60 = (_BYTE)v13 == 1 && (v58 == 2 || v59 == 2);
        v98[v36 + 9] = v60;
      }
      v44 = *(_BYTE *)(v42 + v40 + 124);
      if ( v44 )
      {
        v98[v36 + 14] = v44;
        v98[v36 + 2] = *(_BYTE *)(v42 + v40 + 116);
        v98[v36 + 3] = *(_BYTE *)(v42 + v40 + 117);
        *(_DWORD *)&v98[v36 + 4] = *(_DWORD *)(v42 + v40 + 120);
      }
      if ( v98[v36 + 8] )
      {
LABEL_75:
        v61 = v42 + v40;
        if ( memcmp_0((const void *)(v42 + v40 + 128), (char *)this + v36 + 132, 0x20uLL) )
        {
          *(_OWORD *)(v61 + 128) = *(_OWORD *)v41;
          *(_OWORD *)(v61 + 144) = *((_OWORD *)v41 + 1);
          *(_BYTE *)(v40 + 348) = 1;
        }
        v16 = 3 * (v15 + 1);
      }
      if ( v98[v36 + 14] )
      {
        v75 = 1;
        (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + v16 + 1) + 40LL))(
          *((_QWORD *)this + v16 + 1),
          v85);
        v70 = *(float *)(v42 + *((_QWORD *)this + 2) + 112);
        v71 = (float)v85[1];
        v72 = (unsigned int)(v79 + 4);
        v110[v15] = v70 / (float)v85[0];
        v110[v72] = v70 / v71;
      }
      ++v15;
      v12 = (unsigned int)v76;
      v3 = v82;
      if ( ++v79 >= (unsigned int)v76 )
      {
        v11 = *((_QWORD *)this + 2);
        v5 = v92;
        v4 = v84;
        v7 = v83;
        break;
      }
    }
  }
  if ( (*(_BYTE *)(v11 + 96) & 0x10) == 0 || v12 >= 4 )
    v14 = 0.0;
  if ( *(float *)(v7 + 144) != v14 )
  {
    *(_BYTE *)(v7 + 120) = 1;
    *(float *)(v7 + 144) = v14;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v5 + 64LL))(v5, 0LL, v12, v114);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v5 + 80LL))(v5, 0LL, v12, v115);
  Shaders = CRenderingTechnique::GetShaders(
              *((CRenderingTechnique **)this + 2),
              v3,
              (const struct ShaderLinkingConfig *)&v96,
              (enum VertexShaderKey::Enum *)&v76,
              &v80);
  v47 = v80;
  v22 = Shaders;
  if ( Shaders < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, Shaders, 0xC0u);
    goto LABEL_67;
  }
  v48 = (int)v76;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v5 + 88LL))(
    v5,
    *((_QWORD *)v3 + (int)v76 + 129),
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(
    v5,
    v47,
    0LL,
    0LL);
  v49 = *((_QWORD *)this + 2);
  v76 = 0LL;
  lpVtbl = 0LL;
  if ( *(_DWORD *)(v49 + 88) || *(_DWORD *)(v49 + 344) )
  {
    v80 = 0LL;
    ResourceNoRef = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                      (struct IDeviceResourceNotify *)(v49 + 24),
                      v82);
    v22 = ResourceNoRef;
    if ( ResourceNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, ResourceNoRef, 0x160u);
    }
    else
    {
      updated = CRenderingTechnique::UpdateConstantBuffers((CRenderingTechnique *)v49);
      v22 = updated;
      if ( updated >= 0 )
      {
        lpVtbl = v80[15].lpVtbl;
        goto LABEL_58;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, updated, 0x162u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v22, 0xC8u);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v76);
    goto LABEL_67;
  }
LABEL_58:
  v76 = lpVtbl;
  if ( lpVtbl )
  {
    (*((void (__fastcall **)(struct ID3D11PixelShaderVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
    lpVtbl = v76;
  }
  v22 = 0;
  if ( lpVtbl )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11PixelShaderVtbl **))(*(_QWORD *)v5 + 128LL))(
      v5,
      0LL,
      1LL,
      &v76);
    v55 = (__int64)v76;
    if ( v76 )
    {
      v76 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
  }
  v56 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v56 + 96) & 2) != 0 )
  {
    if ( *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(v4) == -1 )
      goto LABEL_134;
    v56 = *((_QWORD *)this + 2);
  }
  if ( (*(_BYTE *)(v56 + 96) & 4) != 0 )
LABEL_134:
    CD3DBatchExecutionContext::SetNoOpLightingConstantBuffers(v4);
  if ( v75 )
  {
    v73 = (struct CD3DBatchExecutionContext **)(v83 + 1136);
    CTypedConstantBuffer<std::array<float,8>>::SetData(v83 + 1136, v110);
    if ( *((_BYTE *)v73 + 8) )
    {
      (*(void (__fastcall **)(_QWORD, struct CD3DBatchExecutionContext *, _QWORD, _QWORD, struct CD3DBatchExecutionContext **, _DWORD, _DWORD))(**((_QWORD **)v82 + 80) + 384LL))(
        *((_QWORD *)v82 + 80),
        *v73,
        0LL,
        0LL,
        v73 + 2,
        0,
        0);
      *((_BYTE *)v73 + 8) = 0;
    }
    v84 = *v73;
    (*(void (__fastcall **)(__int64, __int64, __int64, struct CD3DBatchExecutionContext **))(*(_QWORD *)v5 + 128LL))(
      v5,
      3LL,
      1LL,
      &v84);
  }
  *(_DWORD *)v93 = v48;
LABEL_67:
  if ( v47 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v47->lpVtbl->Release)(v47);
  return v22;
}
