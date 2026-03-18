/*
 * XREFs of CmpKeyNodeNeedsAccessBitUpdate @ 0x1405D8B0C
 * Callers:
 *     CmpGetKeyNodeForKcb @ 0x1405AA400 (CmpGetKeyNodeForKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpKeyNodeNeedsAccessBitUpdate(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0;
}
