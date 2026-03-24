/*
 * XREFs of SdbReadBinaryTag @ 0x1406CE3C8
 * Callers:
 *     SdbGetDatabaseID @ 0x14067CB48 (SdbGetDatabaseID.c)
 *     SdbReadEntryInformation @ 0x140722BA0 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x14072320C (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x1408E7BCC (SdbReadGUIDTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x14067CF40 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
