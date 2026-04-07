/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180004A70 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180004C18 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18000B628 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x18000B670 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180024B68 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180044790 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180085BA0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180085CF0 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180085F84 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180086408 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this, bool a2)
{
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rcx
  int updated; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  int v15; // ecx
  __m128i v16; // xmm0
  int v17; // eax
  float v18; // xmm0_4
  int v19; // xmm0_4
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __m128i v26; // [rsp+30h] [rbp-20h] BYREF

  v4 = *((_DWORD *)this + 70);
  if ( (unsigned int)(v4 - 2) > 3 )
  {
    updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x21Bu);
      return v6;
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
        v12 = CAccent::_UpdateAcrylicBlurBehind(this);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x223u);
          return v6;
        }
        break;
      case 5:
        v5 = CAccent::UpdateAcrylicBackgroundBrush(this);
        v6 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x227u);
          return v6;
        }
        break;
      default:
        v13 = 0;
        v14 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
        v15 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
        v26.m128i_i64[0] = 0LL;
        if ( v15 >= 0 )
          v13 = v15;
        v16 = _mm_cvtsi32_si128(v13);
        v17 = 0;
        LODWORD(v18) = _mm_cvtepi32_ps(v16).m128_u32[0];
        if ( v14 >= 0 )
          v17 = v14;
        *(float *)&v26.m128i_i32[2] = v18 + 0.0;
        *(float *)&v26.m128i_i32[3] = (float)v17 + 0.0;
        *(float *)&v19 = CAccent::_GetSolidFillOpacity(this);
        v21 = CAccent::_UpdateSolidFill(v20, this, *((_DWORD *)this + 94), &v26, v19);
        v6 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x232u);
          return v6;
        }
        break;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    v22 = CAccent::_EnsureBorderShadowAtlas(this);
    v6 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x237u);
      return v6;
    }
    v23 = CAccent::_UpdateBorderShadowParts(this);
    v6 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x238u);
      return v6;
    }
    v24 = CAccent::_UpdateBorderShadowForAccent(this);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x239u);
      return v6;
    }
  }
  v7 = CCanvasVisual::UpdateLayout(this, a2);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x23Cu);
  }
  else
  {
    v8 = *((_QWORD *)this + 54);
    if ( v8
      && (v25 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 96LL))(v8, (char *)this + 120),
          v6 = v25,
          v25 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x241u);
    }
    else
    {
      v26.m128i_i32[2] = -1;
      v26.m128i_i16[6] = 0;
      v26.m128i_i64[0] = (__int64)this + 32;
      while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v26) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v26.m128i_i64[0] + 16) + 8LL * v26.m128i_u32[2]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 2LL);
      }
    }
  }
  return v6;
}
