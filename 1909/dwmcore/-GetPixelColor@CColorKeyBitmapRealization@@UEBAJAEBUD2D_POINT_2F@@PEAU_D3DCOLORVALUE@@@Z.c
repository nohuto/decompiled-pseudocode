/*
 * XREFs of ?GetPixelColor@CColorKeyBitmapRealization@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x180255380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmapRealization::GetPixelColor(
        CColorKeyBitmapRealization *this,
        const struct D2D_POINT_2F *a2,
        struct _D3DCOLORVALUE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct D2D_POINT_2F *, struct _D3DCOLORVALUE *))(**(_QWORD **)(*((_QWORD *)this + 1) + 24LL)
                                                                                                 + 112LL))(
           *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
           a2,
           a3);
}
