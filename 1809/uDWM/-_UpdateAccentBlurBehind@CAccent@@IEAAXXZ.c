/*
 * XREFs of ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180022CA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180004C18 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008550C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180085CF0 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x180085D24 (-_HasBlurBehind@CAccent@@IEAA_NXZ.c)
 */

void __fastcall CAccent::_UpdateAccentBlurBehind(CAccent *this)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // ecx
  __m128i v5; // xmm0
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  struct CVisual *v9; // rbx
  int inserted; // eax
  int v11; // xmm0_4
  _DWORD *v12; // rcx
  int updated; // eax
  __m128i v14; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 42) && *((_BYTE *)this + 397) )
  {
    CRenderDataVisual::ClearInstructions(this);
    CAccentBlurBehind::UpdateAccentBlurBehind(
      *((CAccentBlurBehind **)this + 42),
      (const struct tagRECT *)((char *)this + 616),
      *((_QWORD *)this + 51),
      *((HWND *)this + 50));
    v2 = 0;
    v3 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
    v4 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
    v14.m128i_i64[0] = 0LL;
    if ( v4 >= 0 )
      v2 = v4;
    v5 = _mm_cvtsi32_si128(v2);
    v6 = 0;
    LODWORD(v7) = _mm_cvtepi32_ps(v5).m128_u32[0];
    if ( v3 >= 0 )
      v6 = v3;
    *(float *)&v14.m128i_i32[2] = v7 + 0.0;
    *(float *)&v14.m128i_i32[3] = (float)v6 + 0.0;
    if ( CAccent::_HasBlurBehind(this)
      && (v8 = VisualCollection::InsertRelative(
                 (CAccent *)((char *)this + 32),
                 *((struct CVisual **)this + 42),
                 0LL,
                 0,
                 1),
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6A3u);
    }
    else if ( (*((_BYTE *)this + 284) & 2) != 0 )
    {
      v9 = *(struct CVisual **)(*((_QWORD *)this + 42) + 280LL);
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v9, 0LL, 0, 1);
      if ( inserted >= 0 )
      {
        *(float *)&v11 = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(v12, v9, *((_DWORD *)this + 94), &v14, v11);
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x6ACu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x6ABu);
      }
    }
  }
}
