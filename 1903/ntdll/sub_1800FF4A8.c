/*
 * XREFs of sub_1800FF4A8 @ 0x1800FF4A8
 * Callers:
 *     sub_1800FFEAC @ 0x1800FFEAC (sub_1800FFEAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FF4A8(int a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  _DWORD *i; // r9
  unsigned int v4; // eax

  v1 = 0;
  if ( (a1 & 0x18) != 0 && (a1 & 7) != 0 )
  {
    v2 = 0;
    for ( i = &unk_180138E30; *i != (a1 & *i); ++i )
    {
      if ( ++v2 >= 8 )
      {
        if ( (a1 & 1) != 0 || (a1 & 2) != 0 )
        {
          v4 = 0;
          if ( (a1 & 0x10) == 0 )
            return (unsigned int)-1073741811;
          return v4;
        }
        return v1;
      }
    }
  }
  return (unsigned int)-1073741811;
}
