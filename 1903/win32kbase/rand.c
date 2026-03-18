/*
 * XREFs of rand @ 0x1C00BB74C
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0066D2C (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C020FE20 = 214013 * dword_1C020FE20 + 2531011;
  return (dword_1C020FE20 >> 16) & 0x7FFF;
}
