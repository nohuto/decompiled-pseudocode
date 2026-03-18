/*
 * XREFs of bIndexToWcharKern @ 0x1C021E9A0
 * Callers:
 *     cQueryKerningPairs @ 0x1C021F068 (cQueryKerningPairs.c)
 * Callees:
 *     bIndexToWchar @ 0x1C021E758 (bIndexToWchar.c)
 */

__int64 __fastcall bIndexToWcharKern(__int64 a1, unsigned __int16 *a2, unsigned __int16 a3, int a4)
{
  unsigned int v6; // r8d
  int v7; // edx
  unsigned __int16 v8; // cx

  v6 = bIndexToWchar(a1, a2, a3, a4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 300);
    if ( (v7 & 0x30) != 0 )
    {
      v8 = *a2;
      if ( *a2 == 160 )
      {
        if ( (v7 & 0x10) == 0 )
          return v6;
        *a2 = 32;
        v8 = 32;
      }
      if ( v8 == 173 && (*(_DWORD *)(a1 + 300) & 0x20) != 0 )
        *a2 = 45;
    }
  }
  return v6;
}
