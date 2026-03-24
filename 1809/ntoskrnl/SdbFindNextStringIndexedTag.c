/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140720304
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14067C960 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14067D56C (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140721664 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140721918 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, (unsigned int)result, a2);
  return result;
}
