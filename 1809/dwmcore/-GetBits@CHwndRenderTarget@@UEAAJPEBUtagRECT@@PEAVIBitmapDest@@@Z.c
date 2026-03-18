/*
 * XREFs of ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800900B0
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18008FEE0 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B068 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18008FFC8 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18015AEE4 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x180179710 (-UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetBits(
        CHwndRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  __int64 v4; // rcx
  unsigned int v6; // ebx
  float left; // xmm9_4
  float top; // xmm8_4
  float right; // xmm6_4
  float bottom; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  int v15; // eax
  unsigned int v16; // ecx
  float v17; // xmm0_4
  unsigned int v18; // r12d
  int v19; // r13d
  __int64 (__fastcall **v20)(struct IBitmapDest *, GUID *, __int64 *); // rax
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // esi
  int v24; // r14d
  int v25; // edx
  int v26; // r8d
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  int v31; // ecx
  signed int v32; // r14d
  signed int v33; // esi
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // [rsp+38h] [rbp-69h] BYREF
  struct IBitmapDest *v41; // [rsp+40h] [rbp-61h] BYREF
  __int64 v42; // [rsp+48h] [rbp-59h] BYREF
  __int128 v43; // [rsp+50h] [rbp-51h] BYREF
  __int128 v44; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v45[16]; // [rsp+70h] [rbp-31h] BYREF

  v4 = *((_QWORD *)this + 14);
  v6 = 0;
  left = (float)a2->left;
  top = (float)a2->top;
  right = (float)a2->right;
  bottom = (float)a2->bottom;
  if ( !v4
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 144LL))(*((_QWORD *)this + 14)) )
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003304442, 0x56Au);
    return v6;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), &v43);
  v11 = *(float *)&v43;
  if ( left > *(float *)&v43 )
  {
    v11 = left;
    *(float *)&v43 = left;
  }
  v12 = *((float *)&v43 + 1);
  if ( top > *((float *)&v43 + 1) )
  {
    *((float *)&v43 + 1) = top;
    v12 = top;
  }
  v13 = *((float *)&v43 + 2);
  if ( *((float *)&v43 + 2) > right )
  {
    *((float *)&v43 + 2) = right;
    v13 = right;
  }
  v14 = *((float *)&v43 + 3);
  if ( *((float *)&v43 + 3) > bottom )
  {
    *((float *)&v43 + 3) = bottom;
    v14 = bottom;
  }
  if ( v13 > v11 && v14 > v12 )
  {
    v42 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v42);
    v15 = (**(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
            a3,
            &GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b,
            &v42);
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x574u);
      goto LABEL_22;
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v42 + 24LL))(v42, v45);
    v17 = (float)(*(float *)&v43 - left) + 6291456.25;
    v18 = (int)(LODWORD(v17) << 10) >> 11;
    *(float *)&v41 = (float)(*((float *)&v43 + 1) - top) + 6291456.25;
    v19 = (int)((_DWORD)v41 << 10) >> 11;
    CHwndRenderTarget::DesktopRectToRenderTargetRect((__int64)this - 64, 0, (__int64)&v43, &v44);
    v20 = *(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3;
    v40 = 0LL;
    if ( (int)(*v20)(a3, &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4, &v40) >= 0 )
    {
      if ( ((*((_DWORD *)this + 36) - 2) & 0xFFFFFFFD) == 0 )
      {
        v25 = DWORD1(v44);
        v26 = v44;
        v31 = DWORD2(v44) - v44;
        if ( DWORD2(v44) - (int)v44 >= HIDWORD(v44) - DWORD1(v44) )
          v31 = HIDWORD(v44) - DWORD1(v44);
        v24 = v31 + v44;
        v23 = v31 + DWORD1(v44);
        DWORD2(v44) = v31 + v44;
        HIDWORD(v44) = v31 + DWORD1(v44);
        goto LABEL_18;
      }
    }
    else
    {
      v21 = CHwndRenderTarget::RenderForCapture((__int64)this - 64, &v43);
      v6 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x596u);
        v29 = v40;
        if ( !v40 )
        {
LABEL_22:
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v42);
          return v6;
        }
        v40 = 0LL;
LABEL_41:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        goto LABEL_22;
      }
    }
    v23 = HIDWORD(v44);
    v24 = DWORD2(v44);
    v25 = DWORD1(v44);
    v26 = v44;
LABEL_18:
    if ( *((_DWORD *)this + 36) == 1 || v40 )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, int))(**((_QWORD **)this + 14)
                                                                                             + 64LL))(
              *((_QWORD *)this + 14),
              &v44,
              a3,
              v18,
              v19);
      v6 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x5A3u);
    }
    else
    {
      v32 = v24 - v26;
      v33 = v23 - v25;
      if ( v32 > 0 && v33 > 0 )
      {
        v41 = 0LL;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v41);
        v34 = HrCreateDestBitmap(v32, v33, (const struct PixelFormatInfo *)v45, &v41);
        v6 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x5B1u);
        }
        else
        {
          v36 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, _DWORD))(**((_QWORD **)this + 14) + 64LL))(
                  *((_QWORD *)this + 14),
                  &v44,
                  v41,
                  0LL,
                  0);
          v6 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x5B6u);
          }
          else
          {
            v38 = UnRotateBits(v41, (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 36), a3, v18, v19);
            v6 = v38;
            if ( v38 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x5BEu);
          }
        }
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v41);
      }
    }
    v29 = v40;
    if ( !v40 )
      goto LABEL_22;
    v40 = 0LL;
    goto LABEL_41;
  }
  return v6;
}
