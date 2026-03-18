/*
 * XREFs of SdbReadBinaryTag @ 0x14070ADF0
 * Callers:
 *     SdbGetDatabaseID @ 0x14070C3E8 (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x140775A00 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x140921A8C (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409234E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x140923DA4 (SdbReadGUIDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14070DE7C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  if ( (((__int64 (*)(void))SdbGetTagFromTagID)() & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
