/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18017E114
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18016F4AC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x180051E10 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     floor @ 0x1800E8DF8 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18017DE58 (--0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTarg.c)
 */

__int64 __fastcall CResampleLayer::Create(__int64 *a1, __int64 a2, float a3, float a4, int a5, __int64 *a6)
{
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  float v14; // xmm0_4
  int v15; // ebx
  int v16; // eax
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v23; // [rsp+28h] [rbp-99h]
  int v24; // [rsp+58h] [rbp-69h] BYREF
  __int64 v25; // [rsp+60h] [rbp-61h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+68h] [rbp-59h] BYREF
  __int64 v27; // [rsp+70h] [rbp-51h] BYREF
  int v28; // [rsp+78h] [rbp-49h]
  struct _LUID v29; // [rsp+80h] [rbp-41h] BYREF
  const char *v30; // [rsp+88h] [rbp-39h] BYREF
  int v31; // [rsp+90h] [rbp-31h]
  _DWORD v32[4]; // [rsp+98h] [rbp-29h] BYREF

  v26 = 0LL;
  v24 = 0;
  v25 = 0LL;
  *a6 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*a1 + 24))(a1, v32);
  v9 = *(_QWORD *)v8;
  v28 = *(_DWORD *)(v8 + 8);
  v10 = *a1;
  v27 = (unsigned int)v9 | 0x100000000LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(v10 + 120))(a1, &v29, &v24);
  v13 = v11;
  if ( v11 < 0 )
  {
    v23 = 160;
    goto LABEL_16;
  }
  v14 = (float)*(int *)(a2 + 8);
  v32[0] = *(_DWORD *)a2;
  v32[1] = *(_DWORD *)(a2 + 4);
  v15 = (int)floor((float)(v14 / a3) + 0.5);
  v16 = (int)floor((float)((float)*(int *)(a2 + 12) / a4) + 0.5);
  if ( v15 < 1 )
    v15 = 1;
  v32[2] = v15;
  if ( v16 < 1 )
    v16 = 1;
  v32[3] = v16;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
  v31 = 40;
  v30 = "DWM Scratch Rendertarget (ResampleLayer)";
  v17 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 144))(a1);
  v11 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v30, v32, &v27, v29, v24, v17, 1, 1, &v26);
  v13 = v11;
  if ( v11 < 0 )
  {
    v23 = 182;
    goto LABEL_16;
  }
  if ( a5 == 2 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v25);
    v31 = 47;
    v30 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    v18 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 144))(a1);
    v11 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v30, v32, &v27, v29, v24, v18, 1, 1, &v25);
    v13 = v11;
    if ( v11 < 0 )
    {
      v23 = 195;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v23, 0LL);
      goto LABEL_17;
    }
  }
  v19 = (__int64)DefaultHeap::Alloc(0x98uLL);
  if ( v19 )
  {
    v21 = v25;
    v25 = 0LL;
    v27 = v21;
    v19 = CResampleLayer::CResampleLayer(
            v19,
            (__int128 *)a2,
            (const struct MilPointAndSizeL *)v32,
            a3,
            a4,
            a5,
            v26,
            &v27);
  }
  *a6 = v19;
  if ( !v19 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, 0x8007000E, 0xCFu, 0LL);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
  return v13;
}
