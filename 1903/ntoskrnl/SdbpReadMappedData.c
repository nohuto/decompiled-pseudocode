/*
 * XREFs of SdbpReadMappedData @ 0x14070C578
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140708F28 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x14070C09C (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x14070C3C4 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14070C490 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x140921994 (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
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
