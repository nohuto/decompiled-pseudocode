/*
 * XREFs of SdbpGetIndex @ 0x14070BD10
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070B9EC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074B684 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14070BF64 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x14070C490 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, v4) / 0xC;
    return SdbpGetMappedTagData(a1, v4);
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
