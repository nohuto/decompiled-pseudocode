/*
 * XREFs of SdbpGetTagHeadSize @ 0x14067E560
 * Callers:
 *     SdbpGetMappedTagData @ 0x14067DFC8 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x14067E100 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x14067E424 (SdbpGetNextTagId.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1405C92F0 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2u) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1, (unsigned int)"SdbpGetTagHeadSize", 94, (unsigned int)"Error reading tag");
  return 0LL;
}
