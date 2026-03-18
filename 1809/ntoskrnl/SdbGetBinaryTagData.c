/*
 * XREFs of SdbGetBinaryTagData @ 0x1408E7B78
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E761C (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14067CE28 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  SdbGetTagFromTagID(a1, v2);
  AslLogCallPrintf(1LL);
  return 0LL;
}
