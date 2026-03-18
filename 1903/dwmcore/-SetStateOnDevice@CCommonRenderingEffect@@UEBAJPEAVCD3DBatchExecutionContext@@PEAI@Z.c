/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800367E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180036440 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800D8868 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B8908 (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r9d
  CCommonRenderingEffect *v5; // r10
  __int64 v6; // r14
  __int64 v8; // rax
  const char *v9; // rcx
  int *v10; // rax
  enum DXGI_COLOR_SPACE_TYPE v11; // r8d
  int v12; // edi
  bool v13; // al
  char **v14; // rax
  __int128 v15; // xmm0
  int v16; // r13d
  unsigned int v17; // r12d
  __int64 v18; // r14
  CD3DDeviceLevel1 *v19; // rbx
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  __int64 v23; // r15
  __int64 v24; // rdx
  unsigned int v25; // edi
  void (__fastcall *v26)(__int64, __int64, _QWORD, _QWORD); // r12
  _DWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v32; // rax
  int v33; // ebx
  CD3DDeviceLevel1 *v34; // r8
  char *v35; // r11
  unsigned int v36; // ecx
  _QWORD *v37; // r9
  unsigned int v38; // edi
  int v39; // eax
  unsigned int v40; // edi
  bool v41; // r8
  unsigned int v42; // r9d
  int v43; // ebx
  enum DXGI_COLOR_SPACE_TYPE v44; // ecx
  bool v45; // r10
  int v46; // edx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  __int128 v49; // xmm0
  bool v50; // zf
  int v51; // eax
  __int32 v52; // eax
  __int32 v53; // eax
  __int64 v54; // r11
  __int64 v55; // rcx
  __int32 v56; // eax
  __int64 v57; // r8
  __int64 v58; // rdi
  __int64 (__fastcall *v59)(__int64, __m256i *, _QWORD *); // rbx
  __int64 *v60; // r9
  int v61; // eax
  unsigned int v62; // r9d
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  unsigned int v65; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v66; // [rsp+38h] [rbp-C8h]
  CCommonRenderingEffect *v67; // [rsp+40h] [rbp-C0h]
  __int16 v68; // [rsp+50h] [rbp-B0h]
  __int16 v69; // [rsp+60h] [rbp-A0h]
  __int16 v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+80h] [rbp-80h] BYREF
  __int128 v72; // [rsp+88h] [rbp-78h]
  __int128 v73; // [rsp+98h] [rbp-68h]
  int v74; // [rsp+A8h] [rbp-58h]
  int v75; // [rsp+ACh] [rbp-54h]
  CD3DDeviceLevel1 *v76; // [rsp+B0h] [rbp-50h]
  struct ID3D11PixelShader *v77; // [rsp+B8h] [rbp-48h] BYREF
  __m256i v78; // [rsp+C0h] [rbp-40h]
  __int128 v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+F0h] [rbp-10h]
  __int128 v81; // [rsp+F8h] [rbp-8h]
  char *v82; // [rsp+108h] [rbp+8h]
  __int64 v83; // [rsp+110h] [rbp+10h]
  unsigned int *v84; // [rsp+118h] [rbp+18h]
  _QWORD v85[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v86[2]; // [rsp+130h] [rbp+30h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v87[4]; // [rsp+140h] [rbp+40h] BYREF
  __m256i v88; // [rsp+150h] [rbp+50h] BYREF
  __int128 v89; // [rsp+170h] [rbp+70h]
  int v90; // [rsp+180h] [rbp+80h]

  v3 = 0LL;
  v4 = *((_DWORD *)a2 + 27);
  v5 = this;
  v6 = *((_QWORD *)a2 + 4);
  v76 = (CD3DDeviceLevel1 *)*((_QWORD *)a2 + 1);
  v83 = *((_QWORD *)a2 + 2);
  v85[0] = 0LL;
  v85[1] = 0LL;
  v86[0] = 0LL;
  v86[1] = 0LL;
  v71 = 0LL;
  v75 = 0;
  v8 = *((_QWORD *)a2 + 6);
  v67 = this;
  v9 = "NoOp";
  v84 = a3;
  v77 = 0LL;
  v65 = v4;
  *(_QWORD *)&v72 = "NoOp";
  DWORD2(v72) = 0;
  *(_QWORD *)&v73 = "NoOp";
  DWORD2(v73) = 0;
  if ( v8 )
  {
    v10 = (int *)(v8 + 16);
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
      v5 = v67;
      v4 = v65;
    }
    v10 = &`CLightsMask::NoLights'::`2'::noLights;
    v9 = "NoOp";
  }
  v74 = *v10;
  BYTE1(v75) = v4 == 1;
  BYTE2(v75) = *((_BYTE *)a2 + 82) == 2;
  *(_QWORD *)v87 = "NoOp";
  v11 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v87[2] = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v12 = -2003292288;
  v13 = v4 == 1 && !ColorConversion::IsHDRColorSpace(DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709);
  LOBYTE(v75) = v13;
  v14 = (char **)&ColorConversion::g_rgShaders;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v15 = *(_OWORD *)v87;
      goto LABEL_8;
    }
    v14 = &off_18033A350;
  }
  v15 = *(_OWORD *)v14;
  v12 = 0;
  *(_OWORD *)v87 = *(_OWORD *)v14;
  v11 = v87[2];
LABEL_8:
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v12, 0x8Cu, 0LL);
    return (unsigned int)v12;
  }
  if ( (unsigned int)v11 > DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    v73 = v15;
  v16 = v71;
  if ( *(_BYTE *)(v6 + 368) )
  {
    v16 = v71 | 0x10;
    LODWORD(v71) = v71 | 0x10;
  }
  if ( *((_DWORD *)a2 + 16) == 22 )
  {
    v16 |= 8u;
    LODWORD(v71) = v16;
  }
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    if ( !*((_QWORD *)v5 + 3 * v18 + 2) )
      goto LABEL_17;
    v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 3 * v18 + 3) + 32LL))(*((_QWORD *)v5 + 3 * v18 + 3));
    v5 = v67;
    v33 = 0;
    v34 = v76;
    v85[v18] = v32;
    v35 = (char *)v5 + 2 * v18;
    v36 = (unsigned __int8)*(_WORD *)&v35[v18 + 64];
    v68 = *(_WORD *)&v35[v18 + 64];
    v82 = v35;
    v37 = (_QWORD *)((char *)v34 + 128 * v36 + 32 * HIBYTE(v68) + 8 * (unsigned __int8)v35[v18 + 66] + 1536);
    v66 = v37;
    if ( *v37 )
      goto LABEL_30;
    v70 = *(_WORD *)&v35[v18 + 64];
    if ( HIBYTE(v70) && v35[v18 + 66] )
      v51 = 37120;
    else
      v51 = 37632;
    if ( *((_DWORD *)v34 + 185) < v51 )
      break;
    v69 = *(_WORD *)&v35[v18 + 64];
    if ( (_BYTE)v69 )
      v52 = 21;
    else
      v52 = 0;
    v78.m256i_i32[0] = v52;
    v53 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v69));
    v55 = *(unsigned __int8 *)(v18 + v54 + 66);
    v78.m256i_i32[1] = v53;
    v56 = ExtendMode::ToD3D11TextureAddressMode(v55);
    v58 = *(_QWORD *)(v57 + 632);
    v78.m256i_i32[2] = v56;
    *(__int64 *)((char *)&v78.m256i_i64[1] + 4) = 3LL;
    v79 = 0uLL;
    v78.m256i_i32[5] = 1;
    v78.m256i_i64[3] = 8LL;
    v80 = 2139095039;
    v89 = 0uLL;
    v90 = 2139095039;
    v88 = v78;
    v59 = *(__int64 (__fastcall **)(__int64, __m256i *, _QWORD *))(*(_QWORD *)v58 + 184LL);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v60);
    v61 = v59(v58, &v88, v66);
    v33 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v61, 0xE62u, 0LL);
      v5 = v67;
      goto LABEL_31;
    }
    v5 = v67;
    v37 = v66;
LABEL_30:
    v86[v18] = *v37;
LABEL_31:
    v38 = v33;
    if ( v33 < 0 )
      goto LABEL_136;
    if ( !v17 )
    {
      v16 |= 1u;
      LODWORD(v71) = v16;
      if ( *((_BYTE *)v5 + 24 * v18 + 32)
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 3 * v18 + 2) + 104LL))(*((_QWORD *)v5
                                                                                                 + 3 * v18
                                                                                                 + 2)) )
      {
        v16 |= 4u;
        LODWORD(v71) = v16;
      }
      v39 = v16;
      if ( v82[v18 + 64] == 2 )
      {
        v16 |= 0x20u;
        LODWORD(v71) = v39 | 0x20;
      }
      (*(void (__fastcall **)(_QWORD, enum DXGI_COLOR_SPACE_TYPE *))(**((_QWORD **)v67 + 3 * v18 + 3) + 24LL))(
        *((_QWORD *)v67 + 3 * v18 + 3),
        v87);
      DWORD2(v81) = 0;
      *(_QWORD *)&v81 = "NoOp";
      v40 = 0;
      if ( v87[0] == (DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P2020|0x40) )
      {
LABEL_39:
        LODWORD(v66) = 8;
      }
      else
      {
        switch ( v87[0] )
        {
          case 2:
            LODWORD(v66) = 32;
            break;
          case 0xA:
          case 0xB:
            LODWORD(v66) = 16;
            break;
          case 0x18:
            LODWORD(v66) = 10;
            break;
          case 0x1C:
          case 0x31:
          case 0x3D:
          case 0x41:
          case 0x58:
          case 0x5B:
          case 0x67:
          case 0x6A:
          case 0x6B:
            goto LABEL_39;
          default:
            LODWORD(v66) = 0;
            break;
        }
      }
      v41 = *((_BYTE *)v67 + 24 * v18 + 32)
         || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v67 + 3 * v18 + 2) + 104LL))(*((_QWORD *)v67 + 3 * v18 + 2));
      v42 = v65;
      v43 = -2003292288;
      v44 = v87[2];
      v45 = v65 == 1 && !ColorConversion::IsHDRColorSpace(v87[2]);
      v46 = 0;
      if ( v44 )
      {
        switch ( v44 )
        {
          case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
            if ( v42 )
            {
              v62 = v42 - 1;
              if ( !v62 )
              {
                v46 = 40;
                v43 = 0;
                v47 = 40;
                goto LABEL_49;
              }
              if ( v62 != 11 )
                goto LABEL_48;
              v46 = 4;
            }
            else
            {
              v46 = 2;
            }
            break;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
            if ( v42 )
            {
              if ( v42 != 1 )
                goto LABEL_48;
              if ( (_DWORD)v66 == 8 )
              {
                v46 = 16;
                v43 = 0;
                v47 = 16;
                goto LABEL_49;
              }
              if ( (_DWORD)v66 == 10 )
              {
                v46 = 24;
                break;
              }
            }
            else
            {
              if ( (_DWORD)v66 == 8 )
              {
                v46 = 14;
                v43 = 0;
                v47 = 14;
                goto LABEL_49;
              }
              if ( (_DWORD)v66 == 10 )
              {
LABEL_102:
                v46 = 22;
                break;
              }
            }
            goto LABEL_48;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
            if ( !v42 )
              goto LABEL_102;
            if ( v42 != 1 )
              goto LABEL_48;
            v46 = 24;
            break;
          case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
            if ( v42 )
            {
              v63 = v42 - 1;
              if ( !v63 )
              {
                v46 = 12;
                v43 = 0;
                v47 = 12;
                goto LABEL_49;
              }
              if ( v63 != 11 )
                goto LABEL_48;
            }
            else
            {
              v46 = 10;
            }
            break;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
            if ( v42 )
            {
              v64 = v42 - 1;
              if ( !v64 )
              {
                v46 = 36;
                v43 = 0;
                v47 = 36;
                goto LABEL_49;
              }
              if ( v64 != 11 )
                goto LABEL_48;
              v46 = 38;
            }
            else
            {
              v46 = 34;
            }
            break;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
            if ( v42 )
            {
              if ( v42 != 1 )
                goto LABEL_48;
              if ( (_DWORD)v66 == 8 )
              {
                v46 = 20;
                v43 = 0;
                v47 = 20;
                goto LABEL_49;
              }
              if ( (_DWORD)v66 == 10 )
              {
                v46 = 28;
                break;
              }
            }
            else
            {
              if ( (_DWORD)v66 == 8 )
              {
                v46 = 18;
                v43 = 0;
                v47 = 18;
                goto LABEL_49;
              }
              if ( (_DWORD)v66 == 10 )
              {
                v46 = 26;
                break;
              }
            }
            goto LABEL_48;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
            if ( v42 )
            {
              if ( v42 != 1 )
                goto LABEL_48;
              v46 = 32;
            }
            else
            {
              v46 = 30;
            }
            break;
          default:
            goto LABEL_48;
        }
LABEL_47:
        v43 = 0;
      }
      else
      {
        if ( !v42 )
          goto LABEL_47;
        if ( v42 == 1 )
        {
          v46 = 6;
          goto LABEL_47;
        }
      }
LABEL_48:
      v47 = v46;
      if ( v43 < 0 )
      {
        v49 = v81;
      }
      else
      {
LABEL_49:
        v48 = v46 + 1;
        if ( !v41 )
          v48 = v47;
        v47 = 2 * v48;
        v49 = *((_OWORD *)&ColorConversion::g_rgShaders + v48);
        v81 = v49;
        v40 = DWORD2(v49);
      }
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v43, 0xBBu, 0LL);
        return (unsigned int)v43;
      }
      if ( v40 > 1 )
        v72 = v49;
      v50 = !v45;
      v5 = v67;
      if ( v50 )
        LOBYTE(v75) = 0;
      goto LABEL_17;
    }
    v16 |= 2u;
    LODWORD(v71) = v16;
LABEL_17:
    ++v17;
    ++v18;
    if ( v17 >= 2 )
    {
      v19 = v76;
      v65 = 0x80000000;
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       v76,
                                                       (const struct CommonRenderingShaderDesc *)&v71,
                                                       0,
                                                       &v65,
                                                       &v77);
      v22 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xD7u, 0LL);
        return v22;
      }
      v23 = v83;
      v24 = 0LL;
      v25 = v65;
      v26 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v83 + 88LL);
      if ( *((int *)v19 + 296) <= 0 )
        goto LABEL_139;
      v27 = (_DWORD *)*((_QWORD *)v19 + 146);
      v28 = *((int *)v19 + 296);
      v29 = 0LL;
      while ( *v27 != v65 )
      {
        v24 = (unsigned int)(v24 + 1);
        ++v29;
        ++v27;
        if ( v29 >= v28 )
          goto LABEL_139;
      }
      if ( (_DWORD)v24 == -1 )
      {
LABEL_139:
        v30 = 0LL;
      }
      else
      {
        v30 = *(_QWORD *)(*((_QWORD *)v19 + 147) + 8LL * (int)v24);
        if ( !v30 )
        {
LABEL_27:
          v26(v23, v3, 0LL, 0LL);
          (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v23 + 72LL))(
            v23,
            v77,
            0LL,
            0LL);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v23 + 64LL))(v23, 0LL, 2LL, v85);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v23 + 80LL))(v23, 0LL, 2LL, v86);
          *v84 = v25;
          return v22;
        }
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v30 + 8LL))(v30, v24, v28);
        v3 = v30;
      }
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      goto LABEL_27;
    }
  }
  v33 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024809, 0xE5Eu, 0LL);
  v38 = -2147024809;
LABEL_136:
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v33, 0xA4u, 0LL);
  return v38;
}
