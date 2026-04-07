/*
 * XREFs of ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18008975C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800231B4 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x180086B24 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowData::CreateOrUpdateGDIClientAreaBrush(
        CWindowData *this,
        const struct CResource *a2,
        struct CResource **a3)
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
  int v21; // edx
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
  int v33; // eax
  __int64 v34; // r9
  unsigned int v35; // edx
  int v36; // eax
  CBaseObject *v38; // [rsp+90h] [rbp+7h] BYREF
  struct tagRECT v39; // [rsp+98h] [rbp+Fh] BYREF
  float v40; // [rsp+A8h] [rbp+1Fh] BYREF
  float v41; // [rsp+ACh] [rbp+23h]
  float v42; // [rsp+B0h] [rbp+27h]
  float v43; // [rsp+B4h] [rbp+2Bh]
  __int128 v44; // [rsp+B8h] [rbp+2Fh] BYREF

  v3 = 0LL;
  v4 = 0;
  v38 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    v7 = (*((_BYTE *)this + 596) & 0x40) == 0;
    v44 = _xmm;
    if ( v7 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)this + 5), &v39) )
    {
      ShiftViewPortOrigin(&v39);
      bottom = v39.bottom;
      right = v39.right;
      top = v39.top;
      left = v39.left;
    }
    else
    {
      v12 = 0;
      v13 = *((_DWORD *)this + 47);
      v14 = 0;
      if ( (*((_BYTE *)this + 599) & 2) != 0 )
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
      v39.bottom = bottom;
      v39.left = left;
      v39.right = right;
      v39.top = top;
    }
    v21 = right - left;
    v22 = _mm_cvtsi32_si128(left);
    v23 = 0;
    v24 = _mm_cvtsi32_si128(top);
    if ( v21 >= 0 )
      v23 = v21;
    v25 = bottom - top;
    v26 = _mm_cvtsi32_si128(v23);
    v27 = 0;
    v28 = _mm_cvtepi32_ps(v22).m128_f32[0] + 0.60000002;
    LODWORD(v29) = _mm_cvtepi32_ps(v26).m128_u32[0];
    if ( v25 >= 0 )
      v27 = v25;
    v40 = v28;
    v41 = _mm_cvtepi32_ps(v24).m128_f32[0] + 0.60000002;
    v42 = fmaxf(v29 - 1.2, 0.0) + v28;
    v30 = _mm_cvtsi32_si128(v27);
    v31 = *a3;
    v38 = v31;
    v43 = fmaxf(_mm_cvtepi32_ps(v30).m128_f32[0] - 1.2, 0.0) + v41;
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
    }
    else
    {
      v33 = CResource::Create(0x11u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v38);
      v4 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x1C04u);
LABEL_36:
        v3 = v38;
        goto LABEL_37;
      }
    }
    v3 = v38;
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD))(**((_QWORD **)v38 + 2) + 1200LL))(
            *((_QWORD *)v38 + 2),
            *((unsigned int *)v38 + 6),
            *((_QWORD *)v38 + 2),
            &v44,
            &v40,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            1,
            1,
            *(_DWORD *)(*((_QWORD *)this + 47) + 24LL));
    v4 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x1C17u);
LABEL_37:
      if ( v3 )
        CBaseObject::Release(v3);
      return v4;
    }
    v34 = 0LL;
    v35 = 0;
    if ( (*((_BYTE *)this + 368) & 2) != 0 )
    {
      v34 = *((_DWORD *)this + 93) & 0xFFFFFF;
      v35 = *((_DWORD *)this + 93) | 0xFF000000;
    }
    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int))(**((_QWORD **)v3 + 2) + 344LL))(
            *((_QWORD *)v3 + 2),
            *((unsigned int *)v3 + 6),
            *((unsigned int *)this + 92),
            v34,
            v35);
    v4 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x1C2Du);
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
