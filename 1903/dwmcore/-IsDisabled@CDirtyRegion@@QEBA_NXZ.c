/*
 * XREFs of ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x180085BA8
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085B28 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     <none>
 */

char __fastcall CDirtyRegion::IsDisabled(CDirtyRegion *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 2883) || *((_DWORD *)this + 714) )
    return 1;
  return result;
}
