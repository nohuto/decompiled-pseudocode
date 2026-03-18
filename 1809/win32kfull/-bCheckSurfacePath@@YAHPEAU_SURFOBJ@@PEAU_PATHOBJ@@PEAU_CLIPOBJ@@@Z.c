/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0295710
 * Callers:
 *     NtGdiEngFillPath @ 0x1C0296830 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0297A80 (NtGdiEngStrokePath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C015EEF4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v3; // ebx
  BOOL v4; // r9d
  struct _PATHOBJ v5; // rax
  RECTL *p_rclBounds; // rdx
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 right; // r8
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  if ( !a1 || !a2 )
    return 0;
  if ( a3 )
    v4 = a3->iDComplexity == 0;
  else
    v4 = 1;
  if ( v4 )
  {
    v5 = a2[1];
    p_rclBounds = (RECTL *)&v11;
    v7 = *(_OWORD *)(*(_QWORD *)&v5 + 48LL);
    v8 = 0LL;
    v11 = v7;
    do
      *((int *)&v11 + v8++) >>= 4;
    while ( v8 < 4 );
  }
  else
  {
    p_rclBounds = &a3->rclBounds;
    if ( a3 == (struct _CLIPOBJ *)-4LL )
      return v3;
  }
  right = p_rclBounds->right;
  if ( p_rclBounds->left > (int)right || p_rclBounds->top > p_rclBounds->bottom )
  {
    v3 = 0;
  }
  else if ( (int)right > a1->sizlBitmap.cx )
  {
LABEL_19:
    v3 = 0;
    goto LABEL_20;
  }
  if ( p_rclBounds->left < 0 || p_rclBounds->bottom > a1->sizlBitmap.cy || p_rclBounds->top < 0 )
    goto LABEL_19;
LABEL_20:
  if ( v3 && v4 && ((_DWORD)right == a1->sizlBitmap.cx || p_rclBounds->bottom == a1->sizlBitmap.cy) )
    TraceLoggingWriteUnsupportedGdiUsage(&PathFullBoundsCount, 0x1Cu, right, p_rclBounds->bottom);
  return v3;
}
