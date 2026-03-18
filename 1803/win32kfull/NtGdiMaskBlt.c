/*
 * XREFs of NtGdiMaskBlt @ 0x1C00ADD60
 * Callers:
 *     <none>
 * Callees:
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 */

__int64 __fastcall NtGdiMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  return GreMaskBlt(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
