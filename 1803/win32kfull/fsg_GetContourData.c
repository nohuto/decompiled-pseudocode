/*
 * XREFs of fsg_GetContourData @ 0x1C02BD7DC
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 * Callees:
 *     scl_ScaleDownFromSubPixelOverscale @ 0x1C02B5490 (scl_ScaleDownFromSubPixelOverscale.c)
 */

_WORD *__fastcall fsg_GetContourData(
        __int64 a1,
        int a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _WORD *a10)
{
  __int64 v10; // r11
  _WORD *result; // rax
  __int64 v13; // r11

  v10 = *(_QWORD *)(a1 + 16);
  *a4 = *(_QWORD *)v10;
  *a5 = *(_QWORD *)(v10 + 8);
  *a6 = *(_QWORD *)(v10 + 56);
  *a7 = *(_QWORD *)(v10 + 64);
  *a8 = *(_QWORD *)(v10 + 48);
  *a9 = *(_QWORD *)(v10 + 88);
  result = a10;
  *a10 = *(_WORD *)(v10 + 80);
  if ( a2 )
  {
    result = (_WORD *)scl_ScaleDownFromSubPixelOverscale(v10, a3);
    *a4 = *(_QWORD *)(v13 + 16);
  }
  return result;
}
