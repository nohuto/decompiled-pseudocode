/*
 * XREFs of ?GetContentBounds@CRedirectVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x1800EB74C (-ComputeBounds@CRedirectedVisualContent@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRedirectVisual::GetContentBounds(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 256);
  if ( v3 )
  {
    CRedirectedVisualContent::ComputeBounds(*(CRedirectedVisualContent **)(a1 + 256));
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v3 + 208LL))(v3, 0LL, 0LL, a3);
  }
  else
  {
    a3[1] = 0LL;
    *a3 = 0LL;
  }
  return 0LL;
}
