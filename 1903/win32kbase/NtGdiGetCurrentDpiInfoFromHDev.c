/*
 * XREFs of NtGdiGetCurrentDpiInfoFromHDev @ 0x1C0125580
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C003A18C (DrvGetCurrentDpiInfoFromHDev.c)
 */

__int64 __fastcall NtGdiGetCurrentDpiInfoFromHDev(__int64 a1, __int64 a2)
{
  return DrvGetCurrentDpiInfoFromHDev(a1, a2);
}
