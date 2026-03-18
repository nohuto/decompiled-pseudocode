/*
 * XREFs of CalcWindowRgn @ 0x1C006F268
 * Callers:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     NtUserRedrawWindow @ 0x1C003AE70 (NtUserRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C003B9D4 (InternalInvalidate3.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C0072AE4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWindowRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r8

  SetRectRgnIndirect(a2, *(_QWORD *)(a1 + 40) + (a3 != 0 ? 104LL : 88LL));
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL);
  if ( v5 )
    return GreCombineRgn(a2, a2, v5, 1LL);
  else
    return 2LL;
}
