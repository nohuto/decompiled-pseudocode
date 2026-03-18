/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x1800C7420
 * Callers:
 *     ?IsHardwareProtected@CD2DBitmap@@W7EBA_NXZ @ 0x1800F0A10 (-IsHardwareProtected@CD2DBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DBitmap::IsHardwareProtected(CD2DBitmap *this)
{
  return (*((_DWORD *)this + 26) & 0x80000) != 0;
}
