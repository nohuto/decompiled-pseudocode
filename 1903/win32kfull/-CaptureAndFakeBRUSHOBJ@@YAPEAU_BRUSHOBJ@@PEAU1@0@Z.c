/*
 * XREFs of ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C014A3D4
 * Callers:
 *     NtGdiEngTextOut @ 0x1C0057310 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBltROP @ 0x1C01498A0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0149D70 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1C02AB990 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02ABFD0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02AC1E0 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AC800 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ACB30 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

struct _BRUSHOBJ *__fastcall CaptureAndFakeBRUSHOBJ(struct _BRUSHOBJ *a1, struct _BRUSHOBJ *a2)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (struct _BRUSHOBJ *)MmUserProbeAddress;
  *a2 = *a1;
  if ( a2 && a2->iSolidColor == -1 )
    return 0LL;
  a2->pvRbrush = 0LL;
  return a2;
}
