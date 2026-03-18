/*
 * XREFs of CmpRecordParseWalkResult @ 0x1406CA2F8
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseWalkResult(__int64 a1, __int64 a2)
{
  if ( a1 )
  {
    ++*(_BYTE *)(a1 + 257);
    *(_QWORD *)(a1 + 240) = a2;
    *(_QWORD *)(a1 + 248) = a2;
  }
}
