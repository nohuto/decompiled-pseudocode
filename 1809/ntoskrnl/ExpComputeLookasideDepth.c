/*
 * XREFs of ExpComputeLookasideDepth @ 0x1401073F0
 * Callers:
 *     ExpScanSystemLookasideList @ 0x140107278 (ExpScanSystemLookasideList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpComputeLookasideDepth(__int64 a1, int a2, int a3)
{
  unsigned __int16 v4; // r11
  unsigned int v5; // r10d
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // kr00_4
  unsigned int v10; // edx

  v4 = *(_WORD *)(a1 + 18);
  v5 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 20);
  result = 0xFFFFLL;
  if ( v4 != 0xFFFF )
  {
    v7 = *(unsigned __int16 *)(a1 + 16);
    result = (unsigned int)(25 * a3);
    if ( v5 >= (unsigned int)result )
    {
      result = 1000 * a2 / v5;
      if ( (unsigned int)result >= 5 )
      {
        v9 = result * (v4 - v7);
        result = 274877907 * v9;
        v10 = v9 / 0x7D0 + 5;
        if ( v10 > 0x1E )
          v10 = 30;
        v8 = v10 + v7;
        if ( v8 > v4 )
          LOWORD(v8) = v4;
      }
      else
      {
        v8 = v7 - 1;
        if ( v8 < 4 )
        {
          *(_WORD *)(a1 + 16) = 4;
          return result;
        }
      }
    }
    else
    {
      v8 = v7 - 10;
      if ( v8 < 4 )
        LOWORD(v8) = 4;
    }
    *(_WORD *)(a1 + 16) = v8;
  }
  return result;
}
