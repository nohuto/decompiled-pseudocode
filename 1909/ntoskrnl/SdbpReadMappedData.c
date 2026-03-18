/*
 * XREFs of SdbpReadMappedData @ 0x14070E358
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x14070AD08 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x14070DE7C (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x14070E1A4 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14070E270 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x1409213F4 (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 || *(_DWORD *)(a1 + 20) < a2 + a4 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
    return 1LL;
  }
}
