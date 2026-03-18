/*
 * XREFs of ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800CA08C
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E4B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1800422EC (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTargetBitmap@@W4Enum@MilStretch@@@Z @ 0x1800CA234 (-Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTarget.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800CA31C (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CreateRenderTargetInfo(
        _DWORD *a1,
        struct _LUID a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v12; // r14d
  struct CRenderTargetBitmap *v13; // rsi
  int v14; // eax
  bool v15; // zf
  int v16; // ecx
  BOOL v17; // eax
  char v18; // al
  signed int RenderTargetBitmap; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  struct CRenderTargetBitmap *v24; // [rsp+70h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v25[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v26; // [rsp+88h] [rbp-21h]
  const char *v27; // [rsp+90h] [rbp-19h] BYREF
  int v28; // [rsp+98h] [rbp-11h]
  _DWORD v29[4]; // [rsp+A0h] [rbp-9h] BYREF

  v26 = a8;
  v25[0] = 0LL;
  v24 = 0LL;
  v12 = -2003292287;
  v13 = 0LL;
  if ( a4 && a5 )
  {
    v14 = a1[51];
    v15 = a1[53] == 2;
    v16 = 3;
    v29[0] = v14;
    v17 = v15;
    v25[1] = (struct IRenderTargetBitmap *)1;
    v15 = a1[52] == 0;
    v29[2] = v17;
    if ( !v15 )
      v16 = 1;
    v27 = "DWM Cached Visual Image";
    v29[1] = v16;
    v28 = 23;
    v18 = CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, a2);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_180340368,
                           (__int64)&v27,
                           a4,
                           a5,
                           1LL,
                           0,
                           (__int64)v29,
                           1,
                           a2,
                           a3,
                           v18,
                           0,
                           1,
                           v25);
    v12 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802C0270, 1u, RenderTargetBitmap, 0x4AFu, 0LL);
    }
    else
    {
      v21 = CRenderTargetBitmap::Create(v25[0], &v24);
      v12 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_1802C0270, 1u, v21, 0x4B2u, 0LL);
        v13 = v24;
      }
      else
      {
        v13 = v24;
        CCachedVisualImage::RenderTargetBitmapInfo::Construct(v26, a6, a1, v24, a7);
      }
    }
    if ( v13 )
      (*(void (__fastcall **)(struct CRenderTargetBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v25[0] )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  }
  return v12;
}
