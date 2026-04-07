/*
 * XREFs of ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18008F8E4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180017008 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180031C84 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003D31C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18008C8F4 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowData::CreateOrUpdateGDIClientAreaBrush(
        CWindowData *this,
        const struct CResource *a2,
        struct CImageLegacyMilBrushProxy **a3)
{
  CBaseObject *v3; // rdi
  unsigned int v4; // esi
  bool v7; // zf
  LONG bottom; // ecx
  LONG right; // edx
  LONG top; // r8d
  LONG left; // r9d
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // r9d
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __m128i v22; // xmm3
  unsigned int v23; // eax
  __m128i v24; // xmm4
  int v25; // ecx
  __m128i v26; // xmm0
  unsigned int v27; // eax
  float v28; // xmm3_4
  float v29; // xmm0_4
  __m128i v30; // xmm0
  CBaseObject *v31; // rax
  int v32; // eax
  unsigned int v33; // r8d
  int v34; // eax
  __int64 v35; // r9
  int v36; // eax
  __int64 v38; // [rsp+50h] [rbp-19h]
  CBaseObject *v39; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v40; // [rsp+78h] [rbp+Fh] BYREF
  float v41; // [rsp+88h] [rbp+1Fh] BYREF
  float v42; // [rsp+8Ch] [rbp+23h]
  float v43; // [rsp+90h] [rbp+27h]
  float v44; // [rsp+94h] [rbp+2Bh]
  __int128 v45; // [rsp+98h] [rbp+2Fh] BYREF

  v3 = 0LL;
  v4 = 0;
  v39 = 0LL;
  if ( *((_QWORD *)this + 48) )
  {
    v7 = (*((_BYTE *)this + 604) & 0x40) == 0;
    v45 = _xmm;
    if ( v7 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)this + 5), &v40) )
    {
      ShiftViewPortOrigin(&v40);
      bottom = v40.bottom;
      right = v40.right;
      top = v40.top;
      left = v40.left;
    }
    else
    {
      v12 = 0;
      v13 = *((_DWORD *)this + 47);
      v14 = 0;
      if ( (*((_BYTE *)this + 607) & 2) != 0 )
      {
        v15 = v13 - *((_DWORD *)this + 45);
        v16 = *((_DWORD *)this + 61);
        v17 = *((_DWORD *)this + 63);
        if ( v15 >= 0 )
          v12 = v15;
        v18 = v12 - *((_DWORD *)this + 62);
        if ( *((_DWORD *)this + 48) - *((_DWORD *)this + 46) >= 0 )
          v14 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
        v19 = v14 - *((_DWORD *)this + 64);
      }
      else
      {
        v16 = 0;
        v17 = 0;
        v20 = v13 - *((_DWORD *)this + 45);
        if ( v20 >= 0 )
          v12 = v20;
        v18 = v12 - *((_DWORD *)this + 62) - *((_DWORD *)this + 61);
        if ( *((_DWORD *)this + 48) - *((_DWORD *)this + 46) >= 0 )
          v14 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
        v19 = v14 - *((_DWORD *)this + 64) - *((_DWORD *)this + 63);
      }
      left = *((_DWORD *)this + 20) + v16;
      right = v18 - *((_DWORD *)this + 21);
      top = *((_DWORD *)this + 22) + v17;
      bottom = v19 - *((_DWORD *)this + 23);
      v40.bottom = bottom;
      v40.left = left;
      v40.right = right;
      v40.top = top;
    }
    v21 = (unsigned int)(right - left);
    v22 = _mm_cvtsi32_si128(left);
    v23 = 0;
    v24 = _mm_cvtsi32_si128(top);
    if ( (int)v21 >= 0 )
      v23 = v21;
    v25 = bottom - top;
    v26 = _mm_cvtsi32_si128(v23);
    v27 = 0;
    v28 = _mm_cvtepi32_ps(v22).m128_f32[0] + 0.60000002;
    LODWORD(v29) = _mm_cvtepi32_ps(v26).m128_u32[0];
    if ( v25 >= 0 )
      v27 = v25;
    v41 = v28;
    v42 = _mm_cvtepi32_ps(v24).m128_f32[0] + 0.60000002;
    v43 = fmaxf(v29 - 1.2, 0.0) + v28;
    v30 = _mm_cvtsi32_si128(v27);
    v31 = *a3;
    v39 = v31;
    v44 = fmaxf(_mm_cvtepi32_ps(v30).m128_f32[0] - 1.2, 0.0) + v42;
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
    }
    else
    {
      v34 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (__int64 *)&v39);
      v4 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x1CADu);
LABEL_36:
        v3 = v39;
        goto LABEL_37;
      }
    }
    v3 = v39;
    v32 = CImageLegacyMilBrushProxy::Update(
            (__int64)v39,
            v21,
            (__int64)&v45,
            (__int64)&v41,
            0,
            1,
            0,
            0,
            0,
            1,
            v38,
            1,
            1,
            *((_QWORD *)this + 48));
    v33 = 0;
    v4 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x1CBDu);
LABEL_37:
      if ( v3 )
        CBaseObject::Release(v3);
      return v4;
    }
    v35 = 0LL;
    if ( (*((_BYTE *)this + 376) & 2) != 0 )
    {
      v35 = *((_DWORD *)this + 95) & 0xFFFFFF;
      v33 = *((_DWORD *)this + 95) | 0xFF000000;
    }
    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int))(**(_QWORD **)(*((_QWORD *)v3 + 2)
                                                                                                 + 16LL)
                                                                                   + 352LL))(
            *(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)v3 + 2) + 24LL),
            *((unsigned int *)this + 94),
            v35,
            v33);
    v4 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x1CD3u);
      goto LABEL_37;
    }
  }
  if ( *a3 )
    CBaseObject::Release(*a3);
  *a3 = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    goto LABEL_36;
  }
  return v4;
}
