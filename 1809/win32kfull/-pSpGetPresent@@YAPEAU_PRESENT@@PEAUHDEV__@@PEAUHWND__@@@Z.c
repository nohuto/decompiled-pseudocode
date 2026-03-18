/*
 * XREFs of ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C001D614
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C001D580 (GreDeleteSpriteOverlapPresent.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0262B10 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _PRESENT *__fastcall pSpGetPresent(_QWORD *a1, HWND a2)
{
  struct _PRESENT *result; // rax

  result = 0LL;
  if ( a2 )
  {
    for ( result = (struct _PRESENT *)a1[21];
          result && *(HWND *)result != a2;
          result = (struct _PRESENT *)*((_QWORD *)result + 1) )
    {
      ;
    }
  }
  return result;
}
