/*
 * XREFs of EditionSpeedHitTest @ 0x1C01EFB40
 * Callers:
 *     <none>
 * Callees:
 *     xxxSpeedHitTest @ 0x1C006E608 (xxxSpeedHitTest.c)
 */

_OWORD *__fastcall EditionSpeedHitTest(
        _OWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct tagPOINT *a5,
        struct _SUBPIXELS *a6,
        BOOL *a7,
        __int64 a8,
        __int64 a9)
{
  BOOL v10; // ecx

  v10 = xxxSpeedHitTest(0, a2, a3, a4, a5, a6, a8, a9, a1) != 0;
  if ( a7 )
    *a7 = v10;
  return a1;
}
