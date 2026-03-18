/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180013CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x1800A5950 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(CDropShadow *this, struct CDrawingContext *a2, bool *a3)
{
  char v3; // di
  char v6; // bl
  __int64 v7; // rcx
  CVisual *CurrentVisual; // rax
  struct CSpriteVisualContent *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0;
  v6 = 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 23)) & _xmm) < 0.0000011920929 )
  {
    *a3 = 1;
    return 0;
  }
  else if ( *((_DWORD *)this + 31) == 1 )
  {
    if ( a2 )
    {
      v10 = 0LL;
      CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
      CVisual::GetContentAsSpriteNoRef(CurrentVisual, &v10);
      if ( !v10
        || !(*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, bool *))(*(_QWORD *)v10 + 280LL))(
              v10,
              a2,
              a3) )
      {
        return 0;
      }
    }
    return v6;
  }
  else
  {
    v7 = *((_QWORD *)this + 17);
    if ( !v7 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL))(v7) )
      return 1;
    return v3;
  }
}
