/*
 * XREFs of rand @ 0x1C00A6B0C
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C003CB48 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C01C8120 = 214013 * dword_1C01C8120 + 2531011;
  return (dword_1C01C8120 >> 16) & 0x7FFF;
}
