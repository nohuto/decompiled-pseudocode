/*
 * XREFs of ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01484C4
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngBitBlt @ 0x1C0147840 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngFillPath @ 0x1C0296830 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C0296EB0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0297120 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0297A80 (NtGdiEngStrokePath.c)
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
