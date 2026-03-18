/*
 * XREFs of ?AddBounds@CSwRenderTargetGetBounds@@UEAAJAEBUCContextState@@AEBVCShape@@@Z @ 0x1800A1740
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x1800A17C0 (-AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::AddBounds(
        CSwRenderTargetGetBounds *this,
        const struct CContextState *a2,
        const struct CShape *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  unsigned int v9; // ecx
  __m128 v10; // [rsp+30h] [rbp-38h] BYREF

  v5 = (*(__int64 (__fastcall **)(const struct CShape *, __m128 *, char *))(*(_QWORD *)a3 + 32LL))(
         a3,
         &v10,
         (char *)a2 + 208);
  v7 = v5;
  if ( v5 == -2003304438 )
  {
    v7 = 0;
    v10 = _mm_shuffle_ps((__m128)LODWORD(CFloatFPU::sc_NaN), (__m128)LODWORD(CFloatFPU::sc_NaN), 0);
  }
  else if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x341u);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0xABu);
      return (unsigned int)v7;
    }
  }
  CSwRenderTargetGetBounds::AddBounds((char *)this - 16, &v10, (char *)a2 + 68);
  return (unsigned int)v7;
}
