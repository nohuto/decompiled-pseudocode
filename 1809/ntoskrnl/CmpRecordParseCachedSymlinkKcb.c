/*
 * XREFs of CmpRecordParseCachedSymlinkKcb @ 0x1406418F0
 * Callers:
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseCachedSymlinkKcb(__int64 a1, __int64 a2)
{
  if ( a1 )
    *(_QWORD *)(a1 + 216) = a2;
}
