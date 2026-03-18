/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18017DBE0
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x180166548 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FB08 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     floor @ 0x1800EC5F8 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18017D91C (--0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTarg.c)
 */

__int64 __fastcall CResampleLayer::Create(__int64 *a1, __int64 a2, float a3, float a4, int a5, __int64 *a6)
{
  __int64 v6; // r14
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  float v15; // xmm0_4
  int v16; // ebx
  int v17; // eax
  char v18; // al
  char v19; // al
  __int64 v20; // rax
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

  v6 = 0LL;
  v26 = 0LL;
  v24 = 0;
  v25 = 0LL;
  *a6 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*a1 + 24))(a1, v32);
  v10 = *(_QWORD *)v9;
  v28 = *(_DWORD *)(v9 + 8);
  v11 = *a1;
  v27 = (unsigned int)v10 | 0x100000000LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(v11 + 120))(a1, &v29, &v24);
  v14 = v12;
  if ( v12 < 0 )
  {
    v23 = 160;
    goto LABEL_17;
  }
  v15 = (float)*(int *)(a2 + 8);
  v32[0] = *(_DWORD *)a2;
  v32[1] = *(_DWORD *)(a2 + 4);
  v16 = (int)floor((float)(v15 / a3) + 0.5);
  v17 = (int)floor((float)((float)*(int *)(a2 + 12) / a4) + 0.5);
  if ( v16 < 1 )
    v16 = 1;
  v32[2] = v16;
  if ( v17 < 1 )
    v17 = 1;
  v32[3] = v17;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
  v31 = 40;
  v30 = "DWM Scratch Rendertarget (ResampleLayer)";
  v18 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 144))(a1);
  v12 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v30, v32, &v27, v29, v24, v18, 1, 1, &v26);
  v14 = v12;
  if ( v12 < 0 )
  {
    v23 = 182;
    goto LABEL_17;
  }
  if ( a5 == 2 )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v25);
    v31 = 47;
    v30 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    v19 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 144))(a1);
    v12 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v30, v32, &v27, v29, v24, v19, 1, 1, &v25);
    v14 = v12;
    if ( v12 < 0 )
    {
      v23 = 195;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v23);
      goto LABEL_18;
    }
    v6 = v25;
  }
  v20 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL);
  if ( v20 )
  {
    v25 = 0LL;
    v27 = v6;
    v20 = CResampleLayer::CResampleLayer(
            v20,
            (__int128 *)a2,
            (const struct MilPointAndSizeL *)v32,
            a3,
            a4,
            a5,
            v26,
            &v27);
  }
  *a6 = v20;
  if ( !v20 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0xCFu);
  }
LABEL_18:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
  return v14;
}
