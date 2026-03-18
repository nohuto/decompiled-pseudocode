/*
 * XREFs of EditionPointerSpeedHitTest @ 0x1C0205AC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxPointerSpeedHitTest @ 0x1C0206614 (xxxPointerSpeedHitTest.c)
 */

void *__fastcall EditionPointerSpeedHitTest(void *a1, __int64 a2, __int64 a3, int a4, BOOL *a5)
{
  BOOL v7; // ecx

  memset(a1, 0, 0x78uLL);
  v7 = xxxPointerSpeedHitTest(a4, (__int64)a1) != 0;
  if ( a5 )
    *a5 = v7;
  return a1;
}
