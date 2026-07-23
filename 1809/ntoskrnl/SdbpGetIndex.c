/*
 * XREFs of SdbpGetIndex @ 0x14067DC9C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067D988 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407223F8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14067DFC8 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
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
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetIndex",
      1109,
      (unsigned int)"Index tagid 0x%lx is not referring to the index bits");
    return 0LL;
  }
}
