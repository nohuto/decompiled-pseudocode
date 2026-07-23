/*
 * XREFs of CcSetReadAheadGranularityEx @ 0x140269F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CcSetReadAheadGranularityEx(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // eax
  int v4; // eax

  v2 = *(_DWORD **)(a1 + 48);
  if ( a2 )
  {
    v2[1] = a2[1] - 1;
    v3 = a2[2];
    if ( v3 )
    {
      *v2 |= 0x200000u;
      v2[22] = v3;
    }
    else
    {
      v3 = v2[22];
    }
    if ( v3 > 0x800000 )
      v2[22] = 0x800000;
    v4 = 50;
    if ( a2[3] )
      v4 = a2[3];
    v2[23] = v4;
  }
}
