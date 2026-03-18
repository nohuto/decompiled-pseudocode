/*
 * XREFs of CmpKeyNodeNeedsAccessBitUpdate @ 0x1406522DC
 * Callers:
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140656ACC (CmpGetKeyNodeForKcb.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpKeyNodeNeedsAccessBitUpdate(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0;
}
