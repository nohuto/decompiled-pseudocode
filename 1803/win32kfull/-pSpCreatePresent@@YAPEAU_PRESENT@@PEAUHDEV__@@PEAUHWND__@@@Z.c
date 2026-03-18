/*
 * XREFs of ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C02502F4
 * Callers:
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C024B5CC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 */

struct _PRESENT *__fastcall pSpCreatePresent(_QWORD *a1, HWND a2)
{
  struct _PRESENT *result; // rax

  result = (struct _PRESENT *)PALLOCMEM2(0x10uLL, 1701998663LL, 1);
  if ( result )
  {
    *(_QWORD *)result = a2;
    *((_QWORD *)result + 1) = a1[20];
    a1[20] = result;
  }
  return result;
}
