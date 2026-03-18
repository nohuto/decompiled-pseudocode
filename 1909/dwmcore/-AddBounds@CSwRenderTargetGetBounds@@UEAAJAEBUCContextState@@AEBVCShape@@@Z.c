/*
 * XREFs of ?AddBounds@CSwRenderTargetGetBounds@@UEAAJAEBUCContextState@@AEBVCShape@@@Z @ 0x1800C9060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x1800C90E0 (-AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::AddBounds(
        CSwRenderTargetGetBounds *this,
        const struct CContextState *a2,
        const struct CShape *a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __m128 v10; // [rsp+30h] [rbp-38h] BYREF

  v5 = (*(__int64 (__fastcall **)(const struct CShape *, __m128 *, char *))(*(_QWORD *)a3 + 32LL))(
         a3,
         &v10,
         (char *)a2 + 208);
  v7 = v5;
  if ( v5 == -2003304438 )
  {
    v7 = 0;
    v10 = _mm_shuffle_ps((__m128)0xFFFFFFFF, (__m128)0xFFFFFFFF, 0);
  }
  else if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x33Du, 0LL);
    if ( (v7 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0xA8u, 0LL);
      return v7;
    }
  }
  CSwRenderTargetGetBounds::AddBounds((char *)this - 16, &v10, (char *)a2 + 68);
  return v7;
}
