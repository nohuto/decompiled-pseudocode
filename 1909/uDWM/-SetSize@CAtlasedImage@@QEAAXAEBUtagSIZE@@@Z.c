/*
 * XREFs of ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800379E4
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800017C4 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001C48 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18003796C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x180093AB0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetSize(CAtlasedImage *this, const struct tagSIZE *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *((_DWORD *)this + 6) != a2->cx || *((_DWORD *)this + 7) != a2->cy )
  {
    v2 = (__int64)*a2;
    *((_DWORD *)this + 24) |= 1u;
    *((_QWORD *)this + 3) = v2;
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 0x2000LL);
  }
}
