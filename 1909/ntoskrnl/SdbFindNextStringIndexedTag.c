/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x1409257B4
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14070D964 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14070E540 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x14074D26C (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x14074D510 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
