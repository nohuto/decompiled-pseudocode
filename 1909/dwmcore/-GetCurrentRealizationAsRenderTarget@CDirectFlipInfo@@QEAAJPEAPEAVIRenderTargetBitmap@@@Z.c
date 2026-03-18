/*
 * XREFs of ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801930F4
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015D9D0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
        CDirectFlipInfo *this,
        struct IRenderTargetBitmap **a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int RenderTargetBitmapFromTexture; // eax
  __int64 v17; // rcx
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  int v22[2]; // [rsp+58h] [rbp-28h]
  int v23[4]; // [rsp+60h] [rbp-20h] BYREF
  struct _LUID v24; // [rsp+70h] [rbp-10h] BYREF

  v20 = 0LL;
  v3 = *((_QWORD *)this + 4);
  v21 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v19 = 0;
  v7 = v5;
  v22[1] = 0;
  v23[2] = 0;
  v8 = *v6;
  v22[0] = 1;
  v23[0] = 87;
  v23[1] = 3;
  v9 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(v8 + 120))(v6, &v24, &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x249u, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, &v20, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x24Bu, 0LL);
    }
    else
    {
      v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
              v20,
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              &v21);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x24Du, 0LL);
      }
      else
      {
        RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                          (__int64)&qword_18033D448,
                                          *(__int64 *)v22,
                                          0LL,
                                          (__int64)v23,
                                          v24,
                                          v19,
                                          v21,
                                          a2);
        v11 = RenderTargetBitmapFromTexture;
        if ( RenderTargetBitmapFromTexture < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, RenderTargetBitmapFromTexture, 0x257u, 0LL);
      }
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return v11;
}
