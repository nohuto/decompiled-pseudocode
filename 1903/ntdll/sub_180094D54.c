/*
 * XREFs of sub_180094D54 @ 0x180094D54
 * Callers:
 *     sub_180094DA0 @ 0x180094DA0 (sub_180094DA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180094D54(char a1)
{
  if ( (a1 & 0x20) != 0 )
  {
    return 5;
  }
  else if ( (a1 & 8) != 0 )
  {
    return 1;
  }
  else if ( (a1 & 4) != 0 )
  {
    return 2;
  }
  else if ( (a1 & 1) != 0 )
  {
    return 3;
  }
  else
  {
    return (unsigned int)(2 * (a1 & 2));
  }
}
