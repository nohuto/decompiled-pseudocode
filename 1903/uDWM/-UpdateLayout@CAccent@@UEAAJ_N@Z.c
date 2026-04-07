/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180028630
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800012A0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001724 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180001E8C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18000298C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000D29C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180028188 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x1800287C0 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180028980 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800404DC (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18008C65C (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18008C6B0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this, bool a2)
{
  int v4; // ecx
  int updated; // edi
  __int64 v6; // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  __m128i v12; // xmm0
  int v13; // eax
  float v14; // xmm0_4
  int v15; // xmm0_4
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-30h]
  __m128i v19; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v4 = *((_DWORD *)this + 70);
  if ( (unsigned int)(v4 - 2) > 3 )
  {
    updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    if ( updated < 0 )
    {
      v17 = 542LL;
      goto LABEL_23;
    }
  }
  else
  {
    switch ( v4 )
    {
      case 3:
        CAccent::_UpdateAccentBlurBehind(this);
        break;
      case 4:
        updated = CAccent::_UpdateAcrylicBlurBehind(this);
        if ( updated < 0 )
        {
          v17 = 550LL;
          goto LABEL_23;
        }
        break;
      case 5:
        updated = CAccent::UpdateAcrylicBackgroundBrush((struct Windows::UI::Composition::ICompositionBrush **)this);
        if ( updated < 0 )
        {
          v17 = 554LL;
          goto LABEL_23;
        }
        break;
      default:
        v9 = 0;
        v10 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
        v11 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
        v19.m128i_i64[0] = 0LL;
        if ( v11 >= 0 )
          v9 = v11;
        v12 = _mm_cvtsi32_si128(v9);
        v13 = 0;
        LODWORD(v14) = _mm_cvtepi32_ps(v12).m128_u32[0];
        if ( v10 >= 0 )
          v13 = v10;
        *(float *)&v19.m128i_i32[2] = v14 + 0.0;
        *(float *)&v19.m128i_i32[3] = (float)v13 + 0.0;
        *(float *)&v15 = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(v16, this, *((_DWORD *)this + 94), &v19, v15);
        if ( updated < 0 )
        {
          v17 = 565LL;
          goto LABEL_23;
        }
        break;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    if ( updated < 0 )
    {
      v17 = 570LL;
      goto LABEL_23;
    }
    updated = CAccent::_UpdateBorderShadowParts((CAtlasedRectsVisual **)this);
    if ( updated < 0 )
    {
      v17 = 571LL;
      goto LABEL_23;
    }
    updated = CAccent::_UpdateBorderShadowForAccent(this);
    if ( updated < 0 )
    {
      v17 = 572LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)updated,
        v18);
      return (unsigned int)updated;
    }
  }
  updated = CCanvasVisual::UpdateLayout(this, a2);
  if ( updated < 0 )
  {
    v17 = 575LL;
    goto LABEL_23;
  }
  v6 = *((_QWORD *)this + 54);
  if ( v6 )
  {
    updated = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 96LL))(v6, (char *)this + 120);
    if ( updated < 0 )
    {
      v17 = 580LL;
      goto LABEL_23;
    }
  }
  v19.m128i_i32[2] = -1;
  v19.m128i_i16[6] = 0;
  v19.m128i_i64[0] = (__int64)this + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v19) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v19.m128i_i64[0] + 16) + 8LL * v19.m128i_u32[2]);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, 2LL);
  }
  return 0LL;
}
