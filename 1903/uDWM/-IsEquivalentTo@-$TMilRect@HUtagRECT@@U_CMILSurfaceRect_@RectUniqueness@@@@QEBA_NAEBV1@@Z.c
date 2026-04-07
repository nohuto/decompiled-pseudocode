/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007911C
 * Callers:
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18002DC80 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18002F2A8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x18007918C (-IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x180079288 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  char v4; // r8
  char IsInfinite; // al

  if ( *(_QWORD *)a1 == *(_QWORD *)a2
    && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
    && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12)
    || (*(_DWORD *)(a1 + 8) <= *(_DWORD *)a1 || *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 4))
    && (*(_DWORD *)(a2 + 8) <= *(_DWORD *)a2 || *(_DWORD *)(a2 + 12) <= *(_DWORD *)(a2 + 4)) )
  {
    return 1;
  }
  v2 = ((__int64 (*)(void))TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite)();
  v4 = 0;
  if ( v2 )
  {
    IsInfinite = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v3);
    if ( IsInfinite != v4 )
      return 1;
  }
  return v4;
}
