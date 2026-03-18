/*
 * XREFs of EditionSpeedHitTest @ 0x1C0205CD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSpeedHitTest @ 0x1C002CB10 (xxxSpeedHitTest.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void *__fastcall EditionSpeedHitTest(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct tagPOINT *a5,
        struct _SUBPIXELS *a6,
        BOOL *a7,
        __int64 a8)
{
  BOOL v12; // ecx

  memset(a1, 0, 0x78uLL);
  v12 = xxxSpeedHitTest(0, a2, a3, a4, a5, a6, a8, (__int64)a1) != 0;
  if ( a7 )
    *a7 = v12;
  return a1;
}
