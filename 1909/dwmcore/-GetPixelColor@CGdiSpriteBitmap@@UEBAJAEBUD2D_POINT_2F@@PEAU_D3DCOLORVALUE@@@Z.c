/*
 * XREFs of ?GetPixelColor@CGdiSpriteBitmap@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x180213160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetPixelColor(
        CGdiSpriteBitmap *this,
        const struct D2D_POINT_2F *a2,
        struct _D3DCOLORVALUE *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  *(struct _D3DCOLORVALUE *)&a3->r = *(const struct _D3DCOLORVALUE *)&stru_1802E26F8.r;
  if ( *((_QWORD *)this + 40) )
  {
    v4 = *((_QWORD *)this + 50);
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64, const struct D2D_POINT_2F *))(*(_QWORD *)v4 + 112LL))(v4, a2);
  }
  return result;
}
