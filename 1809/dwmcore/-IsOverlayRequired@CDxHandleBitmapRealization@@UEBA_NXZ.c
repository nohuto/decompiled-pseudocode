/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18001D560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this + 31) & 0x80) != 0;
}
