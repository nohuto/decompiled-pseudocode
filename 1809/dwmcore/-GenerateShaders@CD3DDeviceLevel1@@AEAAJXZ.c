/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D960C
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800D7640 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800D99D8 (-GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800DA380 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GenerateShaders(CD3DDeviceLevel1 *this)
{
  int v1; // r12d
  unsigned int i; // esi
  __int64 v4; // rdi
  __m128i v5; // xmm6
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  __int64 v7; // rcx
  int v8; // ebx
  unsigned int j; // edi
  unsigned int k; // esi
  int v11; // eax
  __int64 v12; // rdi
  __m128i v13; // xmm6
  __m128i v14; // xmm7
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 v21; // r15
  __int64 *v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rbx
  __int64 D3D11DepthStencilDesc; // rax
  __int64 v26; // rcx
  struct CSurfaceShaderComposer *v27; // rdi
  CD3DSurface *v29; // rcx
  unsigned int v30; // [rsp+28h] [rbp-39h]
  struct CSurfaceShaderComposer **v31; // [rsp+48h] [rbp-19h] BYREF
  struct CSurfaceShaderComposer *v32; // [rsp+50h] [rbp-11h] BYREF
  int v33; // [rsp+58h] [rbp-9h]
  const char *v34; // [rsp+60h] [rbp-1h]
  int v35; // [rsp+68h] [rbp+7h]
  __int128 v36; // [rsp+70h] [rbp+Fh]
  BOOL v37; // [rsp+C8h] [rbp+67h] BYREF
  int v38; // [rsp+CCh] [rbp+6Bh]
  struct ID3D11PixelShader *v39; // [rsp+D0h] [rbp+6Fh] BYREF

  v1 = *((_DWORD *)this + 185);
  for ( i = 0; i < 8; ++i )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
    if ( i - 3 > 2 || v1 >= 37632 )
    {
      v4 = *((_QWORD *)this + 79);
      v5 = *((__m128i *)&unk_1803061E0 + (int)i);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + i + 129);
      CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, char *))(*(_QWORD *)v4 + 96LL))(
                                                       v4,
                                                       _mm_srli_si128(v5, 8).m128i_u64[0],
                                                       v5.m128i_i64[0],
                                                       0LL,
                                                       (char *)this + 8 * i + 1032);
      v8 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v30 = 623;
LABEL_47:
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, v30);
        return (unsigned int)v8;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  }
  for ( j = 0; j < 4; ++j )
  {
    *(_QWORD *)&v36 = 0xFFFFFFFFLL;
    v32 = (struct CSurfaceShaderComposer *)"NoOp";
    v33 = 0;
    v35 = 0;
    v34 = "NoOp";
    v31 = (struct CSurfaceShaderComposer **)j;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     this,
                                                     (const struct CommonRenderingShaderDesc *)&v31,
                                                     0,
                                                     (enum VertexShaderKey::Enum *)&v37,
                                                     &v39);
    v8 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v30 = 636;
      goto LABEL_47;
    }
    if ( ((unsigned __int8)v31 & 1) != 0 )
    {
      LODWORD(v31) = (unsigned int)v31 | 4;
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       this,
                                                       (const struct CommonRenderingShaderDesc *)&v31,
                                                       0,
                                                       (enum VertexShaderKey::Enum *)&v37,
                                                       &v39);
      v8 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v30 = 642;
        goto LABEL_47;
      }
    }
  }
  for ( k = 0; k < 4; ++k )
  {
    v37 = k - 2 <= 1;
    v38 = ((k - 1) & 0xFFFFFFFD) != 0 ? 2 : 4;
    v11 = VertexShaderDesc::ResolveKey(&v37);
    if ( (unsigned int)(v11 - 3) > 2 || v1 >= 37632 )
    {
      v12 = *((_QWORD *)this + 79);
      v13 = *((__m128i *)&unk_1803061E0 + v11);
      v14 = *((__m128i *)&unk_1803061A0 + (int)k);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + k + 144);
      CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, unsigned __int64, __int64, char *))(*(_QWORD *)v12 + 88LL))(
                                                       v12,
                                                       _mm_srli_si128(v14, 8).m128i_u64[0],
                                                       v14.m128i_i64[0],
                                                       _mm_srli_si128(v13, 8).m128i_u64[0],
                                                       v13.m128i_i64[0],
                                                       (char *)this + 8 * k + 1152);
      v8 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v30 = 660;
        goto LABEL_47;
      }
    }
  }
  v15 = 0LL;
  do
  {
    v16 = *((_QWORD *)this + 79);
    v17 = (__int64 *)((char *)this + 8 * v15);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v17 + 148);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v16 + 160LL))(
                                                     v16,
                                                     &byte_1802B93F0[264 * (int)v15],
                                                     (char *)v17 + 1184);
    v8 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v30 = 668;
      goto LABEL_47;
    }
    v15 = (unsigned int)(v15 + 1);
  }
  while ( (unsigned int)v15 < 0x18 );
  v18 = 0LL;
  do
  {
    v19 = *((_QWORD *)this + 79);
    v20 = (__int64 *)((char *)this + 8 * v18);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v20 + 220);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, struct HINSTANCE__ *, char *))(*(_QWORD *)v19 + 176LL))(
                                                     v19,
                                                     &_ImageBase + 10 * (int)v18 + 720506,
                                                     (char *)v20 + 1760);
    v8 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v30 = 675;
      goto LABEL_47;
    }
    v18 = (unsigned int)(v18 + 1);
  }
  while ( !(_DWORD)v18 );
  v21 = 0LL;
  do
  {
    v22 = (__int64 *)*((_QWORD *)this + 79);
    v23 = (__int64 *)((char *)this + 8 * v21);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v23 + 221);
    v24 = *v22;
    D3D11DepthStencilDesc = DepthStencilMode::GetD3D11DepthStencilDesc((unsigned int)v21);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v24 + 168))(
                                                     v22,
                                                     D3D11DepthStencilDesc,
                                                     (char *)v23 + 1768);
    v8 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v30 = 682;
      goto LABEL_47;
    }
    v21 = (unsigned int)(v21 + 1);
  }
  while ( (unsigned int)v21 < 4 );
  if ( v1 >= 37632 )
  {
    v32 = 0LL;
    v31 = (struct CSurfaceShaderComposer **)((char *)this + 1144);
    LOBYTE(v33) = 1;
    v8 = CSurfaceShaderComposer::Create(this, &v32);
    if ( (_BYTE)v33 )
    {
      v26 = (__int64)v31;
      v27 = *v31;
      *v31 = v32;
      if ( v27 )
      {
        v29 = (CD3DSurface *)*((_QWORD *)v27 + 10);
        if ( v29 )
        {
          *((_QWORD *)v27 + 10) = 0LL;
          CD3DSurface::Release(v29);
        }
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v27 + 9);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v27 + 8);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v27 + 7);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v27 + 6);
        `vector destructor iterator'(
          (char *)v27,
          8LL,
          6LL,
          (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
        operator delete(v27, 0x68uLL);
      }
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v8, 0x2B5u);
  }
  return (unsigned int)v8;
}
