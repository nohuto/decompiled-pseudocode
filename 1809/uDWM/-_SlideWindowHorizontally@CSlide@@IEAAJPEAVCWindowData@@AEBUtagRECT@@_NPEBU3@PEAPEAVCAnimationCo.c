/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800034B4
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800028C0 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002AD0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002DC7C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180030484 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800A6674 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        struct CAnimationComponent **a6)
{
  __int64 bottom; // rdx
  __m128i *v8; // rdi
  __int64 (__fastcall *v11)(CSlide *, __int64); // rax
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  CBaseObject *v15; // rbx
  int v16; // r8d
  LONG right; // edi
  __int64 v18; // kr00_8
  int v19; // r9d
  int v20; // edi
  LONG v21; // ecx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rcx
  struct tagRECT *p_rc; // rcx
  __int64 v29; // rcx
  CBaseObject *v31; // [rsp+50h] [rbp-29h] BYREF
  const struct tagRECT *v32; // [rsp+58h] [rbp-21h]
  struct tagRECT rc; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v34; // [rsp+70h] [rbp-9h] BYREF

  bottom = (unsigned int)a2[37].bottom;
  v8 = a5;
  v11 = *(__int64 (__fastcall **)(CSlide *, __int64))(*(_QWORD *)this + 112LL);
  v32 = a3;
  v31 = 0LL;
  v12 = v11(this, bottom);
  v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          this,
          (struct CWindowData *)a2,
          1,
          v12,
          0LL,
          0LL,
          -1,
          1,
          &v31);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v13, 0x11Du);
    v15 = v31;
    goto LABEL_16;
  }
  v15 = v31;
  if ( !a5 )
    v8 = (__m128i *)((char *)v31 + 88);
  v16 = _mm_cvtsi128_si32(*v8);
  rc = (struct tagRECT)*v8;
  right = v32->right;
  v18 = v32->left - v16;
  v34 = rc;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8));
  if ( (int)abs32(right - v19) >= (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) )
    v20 = v32->left - v19;
  else
    v20 = right - v16;
  v21 = a2[37].bottom;
  v22 = v21 & 0xFFF;
  if ( a4 )
  {
    if ( v22 == 42 )
    {
      v23 = 0LL;
      v24 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      v25 = *(_DWORD *)(v24 + 40);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v24 + 16);
        while ( 1 )
        {
          v27 = *(_QWORD *)(v26 + 8 * v23);
          if ( *(_DWORD *)(v27 + 72) == 16 && *(_DWORD *)(v27 + 24) != 4 )
            break;
          v23 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v23 >= v25 )
            goto LABEL_12;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
        v20 -= *(_DWORD *)(v27 + 120);
        CStoryboard::Release((CStoryboard *)v27);
        v15 = v31;
      }
    }
LABEL_12:
    if ( (a2[37].bottom & 0x1000000) != 0 )
    {
      rc = a2[39];
      goto LABEL_15;
    }
    p_rc = &rc;
  }
  else
  {
    if ( v22 == 24 )
    {
      *((_DWORD *)this + 30) = v20;
      v21 = a2[37].bottom;
    }
    if ( (v21 & 0x800000) != 0 )
    {
      v34 = a2[41];
      goto LABEL_15;
    }
    p_rc = &v34;
  }
  OffsetRect(p_rc, v20, 0);
LABEL_15:
  CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v15 + 5), &rc);
  v29 = *((_QWORD *)v15 + 5);
  *(struct tagRECT *)(v29 + 872) = v34;
  CVisual::SetDirtyFlags((CVisual *)(v29 + 8), 0x1000u);
LABEL_16:
  if ( v14 < 0 && v15 )
    CStoryboard::_RemoveAnimationComponent(this, v15);
  if ( a6 )
  {
    if ( v14 < 0 )
    {
      *a6 = 0LL;
    }
    else
    {
      *a6 = v15;
      if ( !v15 )
        return (unsigned int)v14;
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
      v15 = v31;
    }
  }
  if ( v15 )
    CBaseObject::Release(v15);
  return (unsigned int)v14;
}
