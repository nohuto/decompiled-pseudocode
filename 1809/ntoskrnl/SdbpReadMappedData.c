/*
 * XREFs of SdbpReadMappedData @ 0x1405C92F0
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1405A32C0 (SdbpOpenDatabaseInMemory.c)
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x14067E100 (SdbpReadTagData.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x14067E560 (SdbpGetTagHeadSize.c)
 *     SdbOpenDatabaseEx @ 0x1408E6C94 (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      683,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + a4 )
    {
      memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
      return 1LL;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      688,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)");
  }
  return 0LL;
}
