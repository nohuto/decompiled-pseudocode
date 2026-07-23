/*
 * XREFs of HvlpCompareActiveLpcbs @ 0x1401B3BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpCompareActiveLpcbs(_BYTE *a1, _BYTE *a2)
{
  char v2; // al
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v2 = a2[112];
  if ( a1[112] )
  {
    if ( !v2 )
      return 0xFFFFFFFFLL;
  }
  else if ( v2 )
  {
    return 1LL;
  }
  v3 = *((_DWORD *)a1 + 1);
  v4 = *((_DWORD *)a2 + 1);
  if ( v3 < v4 )
    return 0xFFFFFFFFLL;
  return v3 > v4;
}
