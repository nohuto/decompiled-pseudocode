/*
 * XREFs of KiMayStealStandbyThread @ 0x140042220
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiMayStealStandbyThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  return *(_BYTE *)(a1 + 24225) == *(_BYTE *)(a2 + 24225)
      && (v2 = *(_QWORD *)(a1 + 16)) != 0
      && v2 != *(_QWORD *)(a1 + 24)
      && **(_BYTE **)(a1 + 56) >= 16;
}
