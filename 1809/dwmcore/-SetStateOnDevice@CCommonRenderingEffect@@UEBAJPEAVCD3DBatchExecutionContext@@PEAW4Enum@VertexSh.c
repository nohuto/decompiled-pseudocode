/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C6300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x18007AA5C (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180187F74 (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        enum VertexShaderKey::Enum *a3)
{
  __int64 v4; // r13
  const char *v5; // rcx
  __int64 v6; // rsi
  int v8; // r15d
  __int64 v9; // rax
  int *v10; // rax
  enum DXGI_COLOR_SPACE_TYPE v11; // r8d
  int v12; // edi
  bool v13; // al
  char **v14; // rax
  __int128 v15; // xmm0
  int v16; // eax
  bool v17; // zf
  int v18; // r14d
  __int64 i; // rdi
  CD3DDeviceLevel1 *v20; // rsi
  unsigned int v21; // ecx
  int CommonOrCubeMapRenderingShadersNoRefInternal; // edi
  int v23; // ebx
  __int64 v25; // rax
  CD3DDeviceLevel1 *v26; // r10
  char *v27; // r9
  int v28; // ebx
  unsigned int v29; // ecx
  _QWORD *v30; // r8
  int v31; // ebx
  bool v32; // r9
  enum DXGI_COLOR_SPACE_TYPE v33; // ecx
  int v34; // ebx
  bool v35; // r8
  int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int128 v39; // xmm0
  int v40; // eax
  __int32 v41; // eax
  __int32 v42; // eax
  __int64 v43; // r9
  char v44; // cl
  __int64 v45; // r10
  __int64 v46; // rbx
  __int64 *v47; // r8
  int v48; // eax
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v50; // [rsp+38h] [rbp-C8h]
  __int16 v51; // [rsp+40h] [rbp-C0h]
  __int16 v52; // [rsp+50h] [rbp-B0h]
  __int16 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int128 v55; // [rsp+78h] [rbp-88h]
  __int128 v56; // [rsp+88h] [rbp-78h]
  int v57; // [rsp+98h] [rbp-68h]
  int v58; // [rsp+9Ch] [rbp-64h]
  CD3DDeviceLevel1 *v59; // [rsp+A0h] [rbp-60h]
  struct ID3D11PixelShader *v60; // [rsp+A8h] [rbp-58h] BYREF
  __m256i v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D4h] [rbp-2Ch]
  int v64; // [rsp+DCh] [rbp-24h]
  int v65; // [rsp+E0h] [rbp-20h]
  __int128 v66; // [rsp+E8h] [rbp-18h]
  enum VertexShaderKey::Enum *v67; // [rsp+F8h] [rbp-8h]
  _QWORD v68[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v69[2]; // [rsp+110h] [rbp+10h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v70[4]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v71[3]; // [rsp+130h] [rbp+30h] BYREF
  int v72; // [rsp+160h] [rbp+60h]

  v4 = *((_QWORD *)a2 + 2);
  v5 = "NoOp";
  v6 = *((_QWORD *)a2 + 4);
  v8 = *((_DWORD *)a2 + 25);
  v59 = (CD3DDeviceLevel1 *)*((_QWORD *)a2 + 1);
  v68[0] = 0LL;
  v68[1] = 0LL;
  v69[0] = 0LL;
  v69[1] = 0LL;
  v54 = 0LL;
  DWORD2(v55) = 0;
  DWORD2(v56) = 0;
  v58 = 0;
  v9 = *((_QWORD *)a2 + 6);
  v67 = a3;
  v60 = 0LL;
  *(_QWORD *)&v55 = "NoOp";
  *(_QWORD *)&v56 = "NoOp";
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
    v5 = "NoOp";
  }
  v57 = *v10;
  BYTE1(v58) = v8 == 1;
  v11 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  *(_QWORD *)v70 = "NoOp";
  v70[2] = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v12 = -2003292288;
  v13 = v8 == 1 && !ColorConversion::IsHDRColorSpace(DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709);
  LOBYTE(v58) = v13;
  v14 = (char **)&ColorConversion::g_rgShaders;
  if ( !v8 )
    goto LABEL_7;
  if ( v8 == 1 )
  {
    v14 = &off_180305F60;
LABEL_7:
    v15 = *(_OWORD *)v14;
    v12 = 0;
    *(_OWORD *)v70 = *(_OWORD *)v14;
    v11 = v70[2];
    goto LABEL_8;
  }
  v15 = *(_OWORD *)v70;
LABEL_8:
  if ( v12 >= 0 )
  {
    if ( (unsigned int)v11 > DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
      v56 = v15;
    v16 = v54;
    if ( *(_BYTE *)(v6 + 256) )
    {
      v16 = v54 | 0x10;
      LODWORD(v54) = v54 | 0x10;
    }
    v17 = *((_DWORD *)a2 + 16) == 22;
    v49 = v16;
    if ( v17 )
    {
      v49 = v16 | 8;
      LODWORD(v54) = v16 | 8;
    }
    v18 = 0;
    for ( i = 0LL; ; ++i )
    {
      if ( !*((_QWORD *)this + 3 * i + 2) )
        goto LABEL_17;
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3 * i + 3) + 32LL))(*((_QWORD *)this + 3 * i + 3));
      v26 = v59;
      v27 = (char *)this + 2 * i;
      v68[i] = v25;
      v28 = 0;
      v29 = (unsigned __int8)*(_WORD *)&v27[i + 64];
      v51 = *(_WORD *)&v27[i + 64];
      v30 = (_QWORD *)((char *)v26 + 128 * v29 + 32 * HIBYTE(v51) + 8 * (unsigned __int8)v27[i + 66] + 1376);
      v50 = v30;
      if ( !*v30 )
      {
        v53 = *(_WORD *)&v27[i + 64];
        if ( HIBYTE(v53) && v27[i + 66] )
          v40 = 37120;
        else
          v40 = 37632;
        if ( *((_DWORD *)v26 + 185) < v40 )
        {
          v28 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024809, 0xE6Bu);
LABEL_127:
          CommonOrCubeMapRenderingShadersNoRefInternal = v28;
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xA5u);
          return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
        }
        v52 = *(_WORD *)&v27[i + 64];
        if ( (_BYTE)v52 )
          v41 = 21;
        else
          v41 = 0;
        v61.m256i_i32[0] = v41;
        v42 = ExtendMode::ToD3D11TextureAddressMode(SHIBYTE(v52));
        v44 = *(_BYTE *)(i + v43 + 66);
        v61.m256i_i32[1] = v42;
        v61.m256i_i32[2] = ExtendMode::ToD3D11TextureAddressMode(v44);
        *(__int64 *)((char *)&v61.m256i_i64[1] + 4) = 3LL;
        v63 = 0LL;
        v62 = 0;
        v71[0] = *(_OWORD *)v61.m256i_i8;
        v64 = 0;
        v46 = *(_QWORD *)(v45 + 632);
        v61.m256i_i32[5] = 1;
        v61.m256i_i64[3] = 8LL;
        v65 = 2139095039;
        v71[2] = 0u;
        v72 = 2139095039;
        v71[1] = *(_OWORD *)&v61.m256i_u64[2];
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v47);
        v48 = (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD *))(*(_QWORD *)v46 + 184LL))(v46, v71, v50);
        v28 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v48, 0xE6Fu);
          goto LABEL_23;
        }
        v30 = v50;
      }
      v69[i] = *v30;
LABEL_23:
      if ( v28 < 0 )
        goto LABEL_127;
      if ( !v18 )
      {
        v31 = v49 | 1;
        v49 = v31;
        LODWORD(v54) = v31;
        if ( *((_BYTE *)this + 24 * i + 32)
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3 * i + 2) + 104LL))(*((_QWORD *)this + 3 * i + 2)) )
        {
          v31 |= 4u;
          v49 = v31;
          LODWORD(v54) = v31;
        }
        if ( *((_BYTE *)this + 2 * i + i + 64) == 2 )
        {
          v49 = v31 | 0x20;
          LODWORD(v54) = v31 | 0x20;
        }
        (*(void (__fastcall **)(_QWORD, enum DXGI_COLOR_SPACE_TYPE *))(**((_QWORD **)this + 3 * i + 3) + 24LL))(
          *((_QWORD *)this + 3 * i + 3),
          v70);
        *(_QWORD *)&v66 = "NoOp";
        DWORD2(v66) = 0;
        if ( v70[0] == (DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P2020|0x40) )
        {
LABEL_30:
          LODWORD(v50) = 8;
        }
        else
        {
          switch ( v70[0] )
          {
            case 2:
              LODWORD(v50) = 32;
              break;
            case 0xA:
            case 0xB:
              LODWORD(v50) = 16;
              break;
            case 0x18:
              LODWORD(v50) = 10;
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
              goto LABEL_30;
            default:
              LODWORD(v50) = 0;
              break;
          }
        }
        v32 = *((_BYTE *)this + 24 * i + 32)
           || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3 * i + 2) + 104LL))(*((_QWORD *)this + 3 * i + 2));
        v33 = v70[2];
        v34 = -2003292288;
        v35 = v8 == 1 && !ColorConversion::IsHDRColorSpace(v70[2]);
        v36 = 0;
        if ( v33 )
        {
          switch ( v33 )
          {
            case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
              if ( v8 )
              {
                if ( v8 == 1 )
                {
                  v36 = 40;
                  v34 = 0;
                  v37 = 40;
                  goto LABEL_40;
                }
                if ( v8 != 12 )
                  goto LABEL_39;
                v36 = 4;
              }
              else
              {
                v36 = 2;
              }
              break;
            case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
              if ( v8 )
              {
                if ( v8 != 1 )
                  goto LABEL_39;
                if ( (_DWORD)v50 == 8 )
                {
                  v36 = 16;
                  v34 = 0;
                  v37 = 16;
                  goto LABEL_40;
                }
                if ( (_DWORD)v50 == 10 )
                {
                  v36 = 24;
                  break;
                }
              }
              else
              {
                if ( (_DWORD)v50 == 8 )
                {
                  v36 = 14;
                  v34 = 0;
                  v37 = 14;
                  goto LABEL_40;
                }
                if ( (_DWORD)v50 == 10 )
                {
LABEL_93:
                  v36 = 22;
                  break;
                }
              }
              goto LABEL_39;
            case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
              if ( !v8 )
                goto LABEL_93;
              if ( v8 != 1 )
                goto LABEL_39;
              v36 = 24;
              break;
            case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
              if ( v8 )
              {
                if ( v8 == 1 )
                {
                  v36 = 12;
                  v34 = 0;
                  v37 = 12;
                  goto LABEL_40;
                }
                if ( v8 != 12 )
                  goto LABEL_39;
              }
              else
              {
                v36 = 10;
              }
              break;
            case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
              if ( v8 )
              {
                if ( v8 == 1 )
                {
                  v36 = 36;
                  v34 = 0;
                  v37 = 36;
                  goto LABEL_40;
                }
                if ( v8 != 12 )
                  goto LABEL_39;
                v36 = 38;
              }
              else
              {
                v36 = 34;
              }
              break;
            case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
              if ( v8 )
              {
                if ( v8 != 1 )
                  goto LABEL_39;
                if ( (_DWORD)v50 == 8 )
                {
                  v36 = 20;
                  v34 = 0;
                  v37 = 20;
                  goto LABEL_40;
                }
                if ( (_DWORD)v50 == 10 )
                {
                  v36 = 28;
                  break;
                }
              }
              else
              {
                if ( (_DWORD)v50 == 8 )
                {
                  v36 = 18;
                  v34 = 0;
                  v37 = 18;
                  goto LABEL_40;
                }
                if ( (_DWORD)v50 == 10 )
                {
                  v36 = 26;
                  break;
                }
              }
              goto LABEL_39;
            case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
              if ( v8 )
              {
                if ( v8 != 1 )
                  goto LABEL_39;
                v36 = 32;
              }
              else
              {
                v36 = 30;
              }
              break;
            default:
              goto LABEL_39;
          }
LABEL_38:
          v34 = 0;
        }
        else
        {
          if ( !v8 )
            goto LABEL_38;
          if ( v8 == 1 )
          {
            v36 = 6;
            goto LABEL_38;
          }
        }
LABEL_39:
        v37 = v36;
        if ( v34 < 0 )
        {
          v39 = v66;
        }
        else
        {
LABEL_40:
          v38 = v36 + 1;
          if ( !v32 )
            v38 = v37;
          v37 = 2 * v38;
          v39 = *((_OWORD *)&ColorConversion::g_rgShaders + v38);
          v66 = v39;
        }
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v34, 0xBCu);
          return (unsigned int)v34;
        }
        if ( DWORD2(v66) > 1 )
          v55 = v39;
        if ( !v35 )
          LOBYTE(v58) = 0;
        goto LABEL_17;
      }
      v49 |= 2u;
      LODWORD(v54) = v49;
LABEL_17:
      if ( (unsigned int)++v18 >= 2 )
      {
        v20 = v59;
        CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                         v59,
                                                         (const struct CommonRenderingShaderDesc *)&v54,
                                                         0,
                                                         (enum VertexShaderKey::Enum *)&v49,
                                                         &v60);
        if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xD8u);
        }
        else
        {
          v23 = v49;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 88LL))(
            v4,
            *((_QWORD *)v20 + v49 + 129),
            0LL,
            0LL);
          (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
            v4,
            v60,
            0LL,
            0LL);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, 0LL, 2LL, v68);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v4 + 80LL))(v4, 0LL, 2LL, v69);
          *(_DWORD *)v67 = v23;
        }
        return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v12, 0x8Du);
  return (unsigned int)v12;
}
