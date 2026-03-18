/*
 * XREFs of iHipot @ 0x1C022308C
 * Callers:
 *     fxPtSize @ 0x1C0223028 (fxPtSize.c)
 *     vCheckForSingularXform @ 0x1C022354C (vCheckForSingularXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iHipot(int a1, int a2)
{
  unsigned int v2; // r10d
  char v3; // r11
  int v4; // r9d
  __int64 result; // rax
  unsigned int v6; // ecx
  int v7; // eax

  v2 = 0;
  v3 = 0;
  v4 = abs32(a1);
  result = abs32(a2);
  if ( v4 )
  {
    if ( (_DWORD)result )
    {
      while ( v4 > 0x8000 || (int)result > 0x8000 )
      {
        v4 >>= 1;
        LODWORD(result) = (int)result >> 1;
        ++v3;
      }
      if ( v4 <= (int)result )
        v6 = v4 * v4;
      else
        v6 = result * result;
      if ( v4 <= (int)result )
        v4 = result;
      if ( v6 )
      {
        v7 = 2 * v4;
        do
        {
          ++v4;
          v2 += v7 + 1;
          v7 += 2;
        }
        while ( v2 < v6 );
      }
      v4 <<= v3;
    }
    return (unsigned int)v4;
  }
  return result;
}
