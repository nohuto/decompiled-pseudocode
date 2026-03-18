/*
 * XREFs of ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVisualContent::GetBounds(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v4; // xmm0_4

  *(_QWORD *)a4 = 0LL;
  if ( a3 )
  {
    *(_DWORD *)(a4 + 8) = *a3;
    v4 = a3[1];
  }
  else
  {
    *(_DWORD *)(a4 + 8) = 0;
    v4 = 0;
  }
  *(_DWORD *)(a4 + 12) = v4;
  return 0LL;
}
