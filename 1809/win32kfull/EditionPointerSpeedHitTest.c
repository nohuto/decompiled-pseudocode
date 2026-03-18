/*
 * XREFs of EditionPointerSpeedHitTest @ 0x1C01EF970
 * Callers:
 *     <none>
 * Callees:
 *     xxxPointerSpeedHitTest @ 0x1C01F0534 (xxxPointerSpeedHitTest.c)
 */

struct tagINPUTDEST *__fastcall EditionPointerSpeedHitTest(
        struct tagINPUTDEST *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        BOOL *a5,
        __int64 a6,
        unsigned int *a7)
{
  BOOL v8; // ecx

  v8 = xxxPointerSpeedHitTest(a4, a7, a1) != 0;
  if ( a5 )
    *a5 = v8;
  return a1;
}
