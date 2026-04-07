/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18002FF04
 * Callers:
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002F840 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180033720 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800091E0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18003010C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18003201C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800AACA8 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        struct CAnimationComponent **a6)
{
  __int64 v7; // rdx
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
  int v21; // ecx
  int v22; // eax
  struct tagRECT *p_rc; // rcx
  __int64 v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // rcx
  struct tagRECT *v31; // [rsp+28h] [rbp-51h]
  CBaseObject *v32; // [rsp+50h] [rbp-29h] BYREF
  const struct tagRECT *v33; // [rsp+58h] [rbp-21h]
  struct tagRECT v34; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-9h] BYREF

  v7 = *((unsigned int *)a2 + 153);
  v8 = a5;
  v11 = *(__int64 (__fastcall **)(CSlide *, __int64))(*(_QWORD *)this + 112LL);
  v33 = a3;
  v32 = 0LL;
  v12 = v11(this, v7);
  v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v12, 0LL, 0LL, -1, 1, &v32);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v13, 0x11Cu, v31);
    v15 = v32;
    goto LABEL_13;
  }
  v15 = v32;
  if ( !a5 )
    v8 = (__m128i *)((char *)v32 + 88);
  v16 = _mm_cvtsi128_si32(*v8);
  v34 = (struct tagRECT)*v8;
  right = v33->right;
  v18 = v33->left - v16;
  rc = v34;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v34, 8));
  if ( (int)abs32(right - v19) >= (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) )
    v20 = v33->left - v19;
  else
    v20 = right - v16;
  v21 = *((_DWORD *)a2 + 153);
  v22 = v21 & 0xFFF;
  if ( a4 )
  {
    if ( v22 == 42 )
    {
      v26 = 0LL;
      v27 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      v28 = *(_DWORD *)(v27 + 40);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v27 + 16);
        while ( 1 )
        {
          v30 = *(_QWORD *)(v29 + 8 * v26);
          if ( *(_DWORD *)(v30 + 72) == 16 && *(_DWORD *)(v30 + 24) != 4 )
            break;
          v26 = (unsigned int)(v26 + 1);
          if ( (unsigned int)v26 >= v28 )
            goto LABEL_26;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
        v20 -= *(_DWORD *)(v30 + 120);
        CStoryboard::Release((CStoryboard *)v30);
        v15 = v32;
      }
    }
LABEL_26:
    if ( (*((_DWORD *)a2 + 153) & 0x1000000) != 0 )
    {
      v34 = *(struct tagRECT *)((char *)a2 + 632);
      goto LABEL_12;
    }
    p_rc = &v34;
  }
  else
  {
    if ( v22 == 24 )
    {
      *((_DWORD *)this + 30) = v20;
      v21 = *((_DWORD *)a2 + 153);
    }
    if ( (v21 & 0x800000) != 0 )
    {
      rc = *(struct tagRECT *)((char *)a2 + 664);
      goto LABEL_12;
    }
    p_rc = &rc;
  }
  OffsetRect(p_rc, v20, 0);
LABEL_12:
  CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v15 + 5), &v34);
  v24 = *((_QWORD *)v15 + 5);
  *(struct tagRECT *)(v24 + 872) = rc;
  CVisual::SetDirtyFlags((CVisual *)(v24 + 8), 4096);
LABEL_13:
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
      v15 = v32;
    }
  }
  if ( v15 )
    CBaseObject::Release(v15);
  return (unsigned int)v14;
}
