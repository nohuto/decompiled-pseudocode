/*
 * XREFs of ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01CB24C
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall _ValidateInjectionTime(int a1, int a2, unsigned int a3, int a4, int a5)
{
  return a4 && !a1
      || !a2 && !a1
      || (a4 || (a2 || !a1 || a5) && a1 != a2 && a1 - a2 <= a3)
      && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - a1 <= 0x1388;
}
