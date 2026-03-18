/*
 * XREFs of NtGdiCreateBitmapFromDxSurface2 @ 0x1C02A74B0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateBitmapFromDxSurface @ 0x1C0299AEC (GreCreateBitmapFromDxSurface.c)
 */

__int64 __fastcall NtGdiCreateBitmapFromDxSurface2(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  return GreCreateBitmapFromDxSurface(a1, a2, a3, a4, a5, a6, a7);
}
