/*
 * XREFs of ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C0139CE0
 * Callers:
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C013A4F0 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C013A654 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C013A7A0 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C013AF34 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C013AB4C (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02B1BD4 (-vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bIntersectWall(XCLIPOBJ *this, int a2, struct _POINTL *a3, struct _POINTL *a4, int *a5)
{
  __int64 v5; // rbx
  int v6; // r11d
  int v7; // r10d

  v5 = *((_QWORD *)this + 18);
  v6 = 1 - a2;
  v7 = *(_DWORD *)(v5 + 64);
  if ( (v7 & 0x20) == 0 )
    v6 = a2;
  if ( (v7 & 5) != 0 )
    vIntersectHorizontal((struct DDA_CLIPLINE *)(v5 + 64), v6, a3, a4, a5);
  else
    vIntersectVertical((struct DDA_CLIPLINE *)(v5 + 64), v6, a3, a4, a5);
  return 1LL;
}
