/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180012F14
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800012A0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180011CC0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x180093E10 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x180012F5C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  __int128 *v2; // rdx
  _OWORD *v3; // rcx
  __int64 v4; // r8
  __int128 v5; // xmm0
  __int64 v6; // rcx

  if ( !(unsigned __int8)operator==((char *)this + 32, a2) )
  {
    v5 = *v2;
    *(_DWORD *)(v4 + 96) |= 1u;
    *v3 = v5;
    v6 = *(_QWORD *)(v4 + 80);
    if ( v6 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 4096LL);
  }
}
