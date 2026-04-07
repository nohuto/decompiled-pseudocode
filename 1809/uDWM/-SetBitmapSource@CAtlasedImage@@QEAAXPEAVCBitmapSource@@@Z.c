/*
 * XREFs of ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800252B0
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180025104 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180086408 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18008F190 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetBitmapSource(CAtlasedImage *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx
  __int64 v5; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v4 != a2 )
  {
    if ( v4 )
      CBaseObject::Release(v4);
    *((_QWORD *)this + 9) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *((_DWORD *)this + 24) |= 1u;
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 0x2000LL);
  }
}
