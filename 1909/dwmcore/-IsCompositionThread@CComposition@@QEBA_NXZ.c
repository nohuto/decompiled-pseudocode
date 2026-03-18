/*
 * XREFs of ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x180176004
 * Callers:
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180023C20 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::IsCompositionThread(CComposition *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 104LL))(*((_QWORD *)this + 69));
}
