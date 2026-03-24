/*
 * XREFs of CmpIsKcbDiscarded @ 0x1405810B4
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1405D73A0 (CmpConstructNameWithStatus.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmpVEExecuteParseLogic @ 0x140640F60 (CmpVEExecuteParseLogic.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x140698120 (CmpIsKeyDeleted.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbDiscarded(__int64 a1)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0;
}
