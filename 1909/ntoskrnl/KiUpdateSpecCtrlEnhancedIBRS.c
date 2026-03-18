/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x1402ABF9C
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F1C20 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v4; // dl
  int v5; // eax
  __int64 v6; // r9
  int v8; // [rsp+0h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 240);
  v8 = KiSpeculationFeatures;
  if ( !v2 || v2 == *(_QWORD *)(a2 + 2144) || (KiSpeculationFeatures & 0x400) != 0 )
    *(_BYTE *)(a1 + 248) &= ~4u;
  else
    *(_BYTE *)(a1 + 248) |= 4u;
  v4 = *(_BYTE *)(a1 + 250) | 1;
  *(_BYTE *)(a1 + 251) = 1;
  *(_BYTE *)(a1 + 1744) = 1;
  *(_BYTE *)(a1 + 253) = 1;
  v5 = *(_DWORD *)(a2 + 1788);
  v6 = *(_QWORD *)(a2 + 2144);
  if ( (v5 & 0x400000) == 0 )
    v6 = 1LL;
  if ( (v8 & 0x800000) != 0 )
  {
    if ( v6 )
    {
      *(_BYTE *)(a1 + 251) |= 4u;
      *(_BYTE *)(a1 + 1744) |= 4u;
      v4 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 2132) & 0x2000) != 0 )
      *(_BYTE *)(a1 + 253) |= 4u;
  }
  if ( !v6 && (v8 & 0x800) != 0 && ((*(_DWORD *)(a2 + 1788) & 0x1000) == 0 || (*(_BYTE *)(a1 + 250) & 1) == 0) )
  {
    LOBYTE(v5) = -2;
    *(_BYTE *)(a1 + 251) &= ~1u;
    v4 &= ~1u;
    *(_BYTE *)(a1 + 1744) &= ~1u;
    *(_BYTE *)(a1 + 253) &= ~1u;
  }
  if ( v4 != *(_BYTE *)(a1 + 250) )
  {
    *(_BYTE *)(a1 + 250) = v4;
    LOBYTE(v5) = v4;
    __writemsr(0x48u, v4);
  }
  return v5;
}
