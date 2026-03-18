/*
 * XREFs of ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18006FC40
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 */

__int64 __fastcall CColorBrush::GetBrushParameters(CColorBrush *this, struct CBrushDrawListGenerator *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  CBrushDrawListGenerator::Reset(a2);
  v4 = *(_OWORD *)((char *)this + 72);
  result = 0LL;
  *((_BYTE *)a2 + 76) = 0;
  *(_OWORD *)((char *)a2 + 20) = v4;
  return result;
}
