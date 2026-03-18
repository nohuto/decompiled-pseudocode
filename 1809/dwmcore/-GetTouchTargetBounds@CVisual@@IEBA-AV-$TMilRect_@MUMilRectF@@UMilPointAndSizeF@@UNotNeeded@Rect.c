/*
 * XREFs of ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800A1964
 * Callers:
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180029A00 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180029AB0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1800A189C (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETTOUCHTARGETREC.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CVisual::GetTouchTargetBounds(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(v2 + 4) & 0x100000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *a2 = *(_OWORD *)(i + 4);
  }
  else
  {
    *a2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  return a2;
}
