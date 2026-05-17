/*
 * XREFs of sub_180043140 @ 0x180043140
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_180043114 @ 0x180043114 (sub_180043114.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 * Callees:
 *     sub_18010361C @ 0x18010361C (sub_18010361C.c)
 */

bool __fastcall sub_180043140(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _DWORD *HotpatchInformation; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 v9; // ax

  v3 = (dword_180166070 & 4) == 0
    && (v9 = *(_WORD *)(a1 + 172), v9 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)word_180120B00[v9]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
  else
    v5 = 2147353482LL;
  if ( *(_BYTE *)v5
    || ((v6 = NtCurrentPeb()->HotpatchInformation) == 0LL || !*v6
      ? (v7 = 2147353472LL)
      : (v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 550),
        *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( v3 )
      sub_18010361C(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a1 + 172));
  }
  return v3;
}
