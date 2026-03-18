/*
 * XREFs of CmpRecordParseStartingKcb @ 0x1406BD1A0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseStartingKcb(__int64 a1, __int64 a2)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 224) = a2;
    *(_QWORD *)(a1 + 248) = a2;
  }
}
