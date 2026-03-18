/*
 * XREFs of ?GetTextureSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800D9F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CD2DBitmap::GetTextureSize(CD2DBitmap *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 16);
  a2[1] = *((_DWORD *)this + 17);
  return (struct D2D_SIZE_U)a2;
}
