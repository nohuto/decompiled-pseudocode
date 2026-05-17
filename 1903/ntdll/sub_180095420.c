/*
 * XREFs of sub_180095420 @ 0x180095420
 * Callers:
 *     sub_180094590 @ 0x180094590 (sub_180094590.c)
 *     sub_1800946BC @ 0x1800946BC (sub_1800946BC.c)
 *     sub_180094DA0 @ 0x180094DA0 (sub_180094DA0.c)
 *     sub_180095454 @ 0x180095454 (sub_180095454.c)
 * Callees:
 *     _errno @ 0x180084320 (_errno.c)
 */

int *__fastcall sub_180095420(int a1)
{
  int *result; // rax

  if ( a1 == 1 )
  {
    result = errno();
    *result = 33;
  }
  else
  {
    result = (int *)(unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = errno();
      *result = 34;
    }
  }
  return result;
}
