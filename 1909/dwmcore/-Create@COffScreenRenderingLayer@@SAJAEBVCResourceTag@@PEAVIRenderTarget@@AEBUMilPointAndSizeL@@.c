/*
 * XREFs of ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x180051C74
 * Callers:
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180051DCC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x180051E10 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::Create(
        const struct CResourceTag *a1,
        struct IRenderTarget *a2,
        const struct MilPointAndSizeL *a3,
        char a4,
        struct COffScreenRenderingLayer **a5)
{
  struct IRenderTargetBitmap *v5; // rsi
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // ecx
  CExternalLayer *v18; // rax
  unsigned int v19; // ecx
  struct COffScreenRenderingLayer *v20; // rbx
  char v22; // [rsp+28h] [rbp-59h]
  int v23; // [rsp+50h] [rbp-31h] BYREF
  struct IRenderTargetBitmap *v24; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v25[4]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v26; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-9h] BYREF

  v5 = 0LL;
  v23 = 0;
  v24 = 0LL;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v27);
  v11 = *(_QWORD *)v10;
  v25[2] = *(_DWORD *)(v10 + 8);
  v12 = *(_QWORD *)a2;
  v25[0] = v11;
  v25[1] = 1;
  v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, int *))(v12 + 120))(a2, &v26, &v23);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x24u, 0LL);
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 144LL))(a2);
    v16 = CExternalLayer::CreateRenderTargetBitmap(a1, a3, v25, v26, v23, v22, a4, 1, &v24);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x32u, 0LL);
      v5 = v24;
    }
    else
    {
      v18 = (CExternalLayer *)operator new(0x70uLL);
      v5 = v24;
      v20 = v18;
      if ( v18 )
      {
        CExternalLayer::CExternalLayer(v18, a3, v24);
        *(_QWORD *)v20 = &COffScreenRenderingLayer::`vftable';
      }
      else
      {
        v20 = 0LL;
      }
      *a5 = v20;
      if ( !v20 )
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x37u, 0LL);
      }
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  return v15;
}
