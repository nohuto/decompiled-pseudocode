/*
 * XREFs of CmpIsKcbDiscarded @ 0x1405820B4
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpVEExecuteParseLogic @ 0x140641F80 (CmpVEExecuteParseLogic.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x1406992E0 (CmpIsKeyDeleted.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbDiscarded(__int64 a1)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0;
}
