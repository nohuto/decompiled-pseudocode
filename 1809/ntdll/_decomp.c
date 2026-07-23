/*
 * XREFs of _decomp @ 0x180098C90
 * Callers:
 *     _handle_exc @ 0x1800985F8 (_handle_exc.c)
 * Callees:
 *     <none>
 */

void __fastcall decomp(double a1, int *a2)
{
  int v3; // ecx
  int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // eax

  if ( a1 == 0.0 )
  {
    v3 = 0;
  }
  else if ( (HIWORD(a1) & 0x7FF0) == 0 && ((v4 = LODWORD(a1), (HIDWORD(a1) & 0xFFFFF) != 0) || LODWORD(a1)) )
  {
    v3 = -1021;
    if ( (BYTE6(a1) & 0x10) == 0 )
    {
      v5 = HIDWORD(a1);
      do
      {
        v5 *= 2;
        v6 = HIWORD(v5);
        if ( v4 < 0 )
        {
          v5 |= 1u;
          v6 = HIWORD(v5);
        }
        v4 *= 2;
        --v3;
      }
      while ( (v6 & 0x10) == 0 );
    }
  }
  else
  {
    v3 = ((HIWORD(a1) >> 4) & 0x7FF) - 1022;
  }
  *a2 = v3;
}
