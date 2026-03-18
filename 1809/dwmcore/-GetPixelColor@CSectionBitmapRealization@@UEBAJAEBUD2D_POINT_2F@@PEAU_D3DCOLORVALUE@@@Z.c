/*
 * XREFs of ?GetPixelColor@CSectionBitmapRealization@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x180226330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelColor@CSystemMemoryBitmap@@QEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x180213980 (-GetPixelColor@CSystemMemoryBitmap@@QEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetPixelColor(
        CSectionBitmapRealization *this,
        const struct D2D_POINT_2F *a2,
        struct _D3DCOLORVALUE *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 40);
  result = 2291674884LL;
  if ( v3 )
    return CSystemMemoryBitmap::GetPixelColor((CSystemMemoryBitmap *)(v3 - 224), a2, a3);
  return result;
}
