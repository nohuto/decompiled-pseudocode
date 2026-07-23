/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x140295B70
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F83B0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int16 v5; // ax
  __int16 v6; // ax
  unsigned __int16 v7; // dx
  __int64 v8; // r10
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1752);
  v4 = KiSpeculationFeatures;
  if ( !v2 || v2 == *(_QWORD *)(a2 + 2096) || (KiSpeculationFeatures & 0x400) != 0 )
  {
    v6 = *(_WORD *)(a1 + 1760) & 0xFFDB;
  }
  else
  {
    v5 = *(_WORD *)(a1 + 1760) | 4;
    *(_WORD *)(a1 + 1760) = v5;
    if ( (v4 & 8) != 0 )
      goto LABEL_8;
    v6 = v5 | 0x20;
  }
  *(_WORD *)(a1 + 1760) = v6;
LABEL_8:
  v7 = *(_WORD *)(a1 + 1764) | 1;
  *(_WORD *)(a1 + 1766) = 1;
  *(_WORD *)(a1 + 1744) = 1;
  *(_WORD *)(a1 + 1770) = 1;
  v8 = *(_QWORD *)(a2 + 2096);
  if ( (*(_DWORD *)(a2 + 1740) & 0x400000) == 0 )
    v8 = 1LL;
  if ( (v4 & 0x4000000000LL) != 0 && KiSsbdMsr == 72 )
  {
    *(_WORD *)(a1 + 1766) |= 4u;
    *(_WORD *)(a1 + 1770) |= 4u;
    *(_WORD *)(a1 + 1744) |= 4u;
    v7 |= 4u;
  }
  else if ( (v4 & 0x8000000000LL) != 0 )
  {
    if ( v8 )
    {
      *(_WORD *)(a1 + 1766) |= 4u;
      *(_WORD *)(a1 + 1744) |= 4u;
      v7 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 2084) & 0x2000) != 0 )
      *(_WORD *)(a1 + 1770) |= 4u;
  }
  if ( (v4 & 0x40000000000000LL) != 0 )
  {
    *(_WORD *)(a1 + 1766) |= 0x400u;
    *(_WORD *)(a1 + 1744) |= 0x400u;
    *(_WORD *)(a1 + 1770) |= 0x400u;
    *(_WORD *)(a1 + 1768) |= 0x400u;
    v7 |= 0x400u;
  }
  if ( v8 && (*(_BYTE *)(a1 + 1762) & 0x30) != 0 )
  {
    result = 512LL;
    *(_WORD *)(a1 + 1760) |= 0x200u;
  }
  else
  {
    result = 65023LL;
    *(_WORD *)(a1 + 1760) &= ~0x200u;
  }
  if ( !v8 && (v4 & 0x800) != 0 && ((*(_DWORD *)(a2 + 1740) & 0x1000) == 0 || (*(_BYTE *)(a1 + 1764) & 1) == 0) )
  {
    result = 65534LL;
    *(_WORD *)(a1 + 1766) &= ~1u;
    v7 &= ~1u;
    *(_WORD *)(a1 + 1744) &= ~1u;
    *(_WORD *)(a1 + 1770) &= ~1u;
  }
  if ( (v4 & 0x2000) != 0 )
  {
    result = 128LL;
    *(_WORD *)(a1 + 1766) |= 0x80u;
    *(_WORD *)(a1 + 1744) |= 0x80u;
  }
  if ( v7 != *(_WORD *)(a1 + 1764) )
  {
    *(_WORD *)(a1 + 1764) = v7;
    result = v7;
    __writemsr(0x48u, v7);
  }
  return result;
}
