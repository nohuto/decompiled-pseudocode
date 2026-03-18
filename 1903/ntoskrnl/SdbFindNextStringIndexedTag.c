/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140925D54
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14070BB84 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14070C760 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x14074C7DC (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x14074CA80 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
