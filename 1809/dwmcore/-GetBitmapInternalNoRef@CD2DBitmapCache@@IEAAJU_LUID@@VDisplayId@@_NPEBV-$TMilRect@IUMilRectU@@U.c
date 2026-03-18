/*
 * XREFs of ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180095114
 * Callers:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18001FFF0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180094FFC (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180095070 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 * Callees:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800952E0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800953F8 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x180180F28 (-GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternalNoRef(
        CD2DBitmapCache *this,
        struct _LUID a2,
        int a3,
        char a4,
        __m128i *a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  __int64 v8; // rcx
  char v9; // si
  __int64 v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  char *v15; // rdi
  unsigned int v16; // ebx
  unsigned int v18; // esi
  struct CSecondaryD2DBitmap *v19; // rdi
  _DWORD *v20; // rax
  int updated; // eax
  int v22; // r9d
  unsigned __int32 v23; // r14d
  unsigned __int32 v24; // r15d
  unsigned __int32 v25; // r12d
  unsigned int v26; // esi
  unsigned int v27; // [rsp+20h] [rbp-50h]
  __m128i v29; // [rsp+40h] [rbp-30h] BYREF
  struct CSecondaryD2DBitmap *v30; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int32 v31; // [rsp+58h] [rbp-18h]
  unsigned __int32 v32; // [rsp+5Ch] [rbp-14h]
  unsigned int v33; // [rsp+60h] [rbp-10h] BYREF
  LONG HighPart; // [rsp+ACh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v6 = a6;
  v8 = *((_QWORD *)this + 4);
  v9 = a4;
  *a6 = 0LL;
  if ( !v8 )
  {
    v16 = -2003292412;
    v27 = 161;
LABEL_23:
    v22 = v16;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v22, v27);
    return v16;
  }
  if ( !a5 )
  {
    v33 = 0;
    LODWORD(v30) = 0;
    (*(void (__fastcall **)(__int64, unsigned int *, struct CSecondaryD2DBitmap **))(*(_QWORD *)v8 + 32LL))(
      v8,
      &v33,
      &v30);
    v29.m128i_i64[1] = __PAIR64__((unsigned int)v30, v33);
    v29.m128i_i64[0] = 0LL;
    goto LABEL_4;
  }
  v29 = *a5;
  v23 = v29.m128i_i32[1] - 1;
  v24 = v29.m128i_i32[2] + 1;
  v25 = v29.m128i_i32[3] + 1;
  v26 = _mm_cvtsi128_si32(v29) - 1;
  CD2DBitmapCache::GetBitmapRect(this, (struct MilRectU *)&v30);
  if ( (unsigned int)v30 > v26 )
    v26 = (unsigned int)v30;
  v29.m128i_i32[0] = v26;
  if ( HIDWORD(v30) > v23 )
    v23 = HIDWORD(v30);
  v29.m128i_i32[1] = v23;
  if ( v31 < v24 )
    v24 = v31;
  v29.m128i_i32[2] = v24;
  if ( v32 < v25 )
    v25 = v32;
  v29.m128i_i32[3] = v25;
  if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v29) )
    v29 = 0uLL;
  if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v29) )
  {
    v16 = -2147024809;
    v27 = 192;
    goto LABEL_23;
  }
  v6 = a6;
  v9 = a4;
LABEL_4:
  v12 = *((_QWORD *)this + 5);
  if ( !v12
    || (v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, struct CSecondaryD2DBitmap **))(*(_QWORD *)v12 + 48LL))(
                          v12,
                          &v30),
        *v13 != a2.LowPart)
    || v13[1] != HighPart
    || (v14 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)this + 4) + 40LL))(
                          *((_QWORD *)this + 4),
                          &v30),
        *v14 != DisplayId::None)
    && *v14 != a3
    && a3 != DisplayId::All
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5)) && !v9 )
  {
    v18 = 0;
    v30 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      while ( 1 )
      {
        v19 = *(struct CSecondaryD2DBitmap **)(*((_QWORD *)this + 7) + 8LL * v18);
        v20 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)v19 + 13) + 48LL))(
                          (__int64)v19 + 104,
                          &v33);
        if ( *v20 == a2.LowPart && v20[1] == HighPart )
          break;
        if ( ++v18 >= *((_DWORD *)this + 20) )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      updated = CD2DBitmapCache::CreateAndCacheBitmap(this, a2, &v30);
      v16 = updated;
      if ( updated < 0 )
      {
        v27 = 235;
LABEL_45:
        v22 = updated;
        goto LABEL_46;
      }
      v19 = v30;
    }
    updated = CD2DBitmapCache::UpdateCachedBitmap(this);
    v16 = updated;
    if ( updated >= 0 )
    {
      if ( v19 )
        v15 = (char *)v19 + 104;
      else
        v15 = 0LL;
      goto LABEL_10;
    }
    v27 = 238;
    goto LABEL_45;
  }
  v15 = (char *)*((_QWORD *)this + 5);
  v16 = 0;
LABEL_10:
  *v6 = v15;
  return v16;
}
