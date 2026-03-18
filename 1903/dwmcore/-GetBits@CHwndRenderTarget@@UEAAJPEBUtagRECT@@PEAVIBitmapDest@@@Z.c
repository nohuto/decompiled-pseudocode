/*
 * XREFs of ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800B1370
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800B11A0 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800B1288 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B44D0 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18016344C (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x18025232C (-UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetBits(
        CHwndRenderTarget *this,
        const struct tagRECT *a2,
        __int64 (__fastcall ***a3)(struct IBitmapDest *, GUID *, __int64 *))
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
  __int64 (__fastcall **v15)(struct IBitmapDest *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v16)(struct IBitmapDest *, GUID *, __int64 *); // rbx
  signed int v17; // eax
  __int64 v18; // rcx
  float v19; // xmm0_4
  unsigned int v20; // r12d
  int v21; // r13d
  int (__fastcall **v22)(struct IBitmapDest *, GUID *, __int64 *); // rax
  signed int v23; // eax
  __int64 v24; // rcx
  int v25; // esi
  int v26; // r14d
  int v27; // edx
  int v28; // r8d
  signed int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v33; // ecx
  signed int v34; // r14d
  signed int v35; // esi
  signed int v36; // eax
  __int64 v37; // rcx
  signed int v38; // eax
  __int64 v39; // rcx
  signed int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // [rsp+38h] [rbp-69h] BYREF
  struct IBitmapDest *v43; // [rsp+40h] [rbp-61h] BYREF
  __int64 v44; // [rsp+48h] [rbp-59h] BYREF
  float v45; // [rsp+50h] [rbp-51h] BYREF
  float v46; // [rsp+54h] [rbp-4Dh]
  float v47; // [rsp+58h] [rbp-49h]
  float v48; // [rsp+5Ch] [rbp-45h]
  __int128 v49; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v50[16]; // [rsp+70h] [rbp-31h] BYREF

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
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x88980006, 0x57Au, 0LL);
    return v6;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), &v45);
  v11 = v45;
  if ( left > v45 )
  {
    v11 = left;
    v45 = left;
  }
  v12 = v46;
  if ( top > v46 )
  {
    v46 = top;
    v12 = top;
  }
  v13 = v47;
  if ( v47 > right )
  {
    v47 = right;
    v13 = right;
  }
  v14 = v48;
  if ( v48 > bottom )
  {
    v48 = bottom;
    v14 = bottom;
  }
  if ( v13 > v11 && v14 > v12 )
  {
    v15 = *a3;
    v44 = 0LL;
    v16 = *v15;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v44);
    v17 = v16((struct IBitmapDest *)a3, &GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b, &v44);
    v6 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x584u, 0LL);
      goto LABEL_22;
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v44 + 24LL))(v44, v50);
    v19 = (float)(v45 - left) + 6291456.25;
    v20 = (int)(LODWORD(v19) << 10) >> 11;
    *(float *)&v43 = (float)(v46 - top) + 6291456.25;
    v21 = (int)((_DWORD)v43 << 10) >> 11;
    CHwndRenderTarget::DesktopRectToRenderTargetRect((__int64)this - 64, 0, (__int64)&v45, &v49);
    v22 = (int (__fastcall **)(struct IBitmapDest *, GUID *, __int64 *))*a3;
    v42 = 0LL;
    if ( (*v22)((struct IBitmapDest *)a3, &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4, &v42) >= 0 )
    {
      if ( ((*((_DWORD *)this + 36) - 2) & 0xFFFFFFFD) == 0 )
      {
        v27 = DWORD1(v49);
        v28 = v49;
        v33 = DWORD2(v49) - v49;
        if ( DWORD2(v49) - (int)v49 >= HIDWORD(v49) - DWORD1(v49) )
          v33 = HIDWORD(v49) - DWORD1(v49);
        v26 = v33 + v49;
        v25 = v33 + DWORD1(v49);
        DWORD2(v49) = v33 + v49;
        HIDWORD(v49) = v33 + DWORD1(v49);
        goto LABEL_18;
      }
    }
    else
    {
      v23 = CHwndRenderTarget::RenderForCapture((char *)this - 64, &v45);
      v6 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x5A6u, 0LL);
        v31 = v42;
        if ( !v42 )
        {
LABEL_22:
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v44);
          return v6;
        }
        v42 = 0LL;
LABEL_42:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        goto LABEL_22;
      }
    }
    v25 = HIDWORD(v49);
    v26 = DWORD2(v49);
    v27 = DWORD1(v49);
    v28 = v49;
LABEL_18:
    if ( *((_DWORD *)this + 36) == 1 || v42 )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *), _QWORD, int))(**((_QWORD **)this + 14) + 64LL))(
              *((_QWORD *)this + 14),
              &v49,
              a3,
              v20,
              v21);
      v6 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x5B3u, 0LL);
    }
    else
    {
      v34 = v26 - v28;
      v35 = v25 - v27;
      if ( v34 > 0 && v35 > 0 )
      {
        v43 = 0LL;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
        v36 = HrCreateDestBitmap(v34, v35, (const struct PixelFormatInfo *)v50, &v43);
        v6 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x5C1u, 0LL);
        }
        else
        {
          v38 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, _DWORD))(**((_QWORD **)this + 14) + 64LL))(
                  *((_QWORD *)this + 14),
                  &v49,
                  v43,
                  0LL,
                  0);
          v6 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x5C6u, 0LL);
          }
          else
          {
            v40 = UnRotateBits(v43, (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 36), (struct IBitmapDest *)a3, v20, v21);
            v6 = v40;
            if ( v40 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x5CEu, 0LL);
          }
        }
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
      }
    }
    v31 = v42;
    if ( !v42 )
      goto LABEL_22;
    v42 = 0LL;
    goto LABEL_42;
  }
  return v6;
}
