/*
 * XREFs of rand @ 0x1C00B86EC
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00524BC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C020CE20 = 214013 * dword_1C020CE20 + 2531011;
  return (dword_1C020CE20 >> 16) & 0x7FFF;
}
