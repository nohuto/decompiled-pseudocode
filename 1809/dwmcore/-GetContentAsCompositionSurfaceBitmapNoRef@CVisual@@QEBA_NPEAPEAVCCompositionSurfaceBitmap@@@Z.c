/*
 * XREFs of ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@QEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1800605E0
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180060500 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetContentAsCompositionSurfaceBitmapNoRef(
        CVisual *this,
        struct CCompositionSurfaceBitmap **a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 32);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 37LL) )
  {
    v3 = 1;
    *a2 = (struct CCompositionSurfaceBitmap *)*((_QWORD *)this + 32);
  }
  return v3;
}
