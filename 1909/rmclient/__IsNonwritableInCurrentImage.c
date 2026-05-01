/*
 * XREFs of __IsNonwritableInCurrentImage @ 0x1000CBF0
 * Callers:
 *     __CRT_INIT@12 @ 0x1000C492 (__CRT_INIT@12.c)
 * Callees:
 *     __FindPESection @ 0x1000CBA0 (__FindPESection.c)
 *     __ValidateImageBase @ 0x1000CCB0 (__ValidateImageBase.c)
 */

BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(&_ImageBase)
      && (PESection = _FindPESection((int)&_ImageBase, a1 - (_DWORD)&_ImageBase)) != 0
      && *(int *)(PESection + 36) >= 0;
}
