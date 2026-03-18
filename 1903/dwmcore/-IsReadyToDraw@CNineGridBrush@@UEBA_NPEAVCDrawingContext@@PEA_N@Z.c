/*
 * XREFs of ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800C78C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CNineGridBrush::IsReadyToDraw(CNineGridBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v3; // rcx

  *a3 = 0;
  v3 = *((_QWORD *)this + 10);
  return v3 && (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *))(*(_QWORD *)v3 + 336LL))(v3, a2);
}
