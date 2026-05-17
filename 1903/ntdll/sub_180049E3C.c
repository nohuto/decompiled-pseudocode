/*
 * XREFs of sub_180049E3C @ 0x180049E3C
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 * Callees:
 *     sub_180049EE0 @ 0x180049EE0 (sub_180049EE0.c)
 */

void __fastcall sub_180049E3C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= sub_180049EE0(a1, a2);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)sub_180049EE0(v4, v3);
  }
}
