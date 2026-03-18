/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140720324
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14067C980 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14067D58C (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140721684 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140721938 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, (unsigned int)result, a2);
  return result;
}
