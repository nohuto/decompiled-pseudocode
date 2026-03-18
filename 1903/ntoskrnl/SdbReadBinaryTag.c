/*
 * XREFs of SdbReadBinaryTag @ 0x140709010
 * Callers:
 *     SdbGetDatabaseID @ 0x14070A608 (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x140772420 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x14092202C (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x140923A88 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x140924344 (SdbReadGUIDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14070C09C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
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
