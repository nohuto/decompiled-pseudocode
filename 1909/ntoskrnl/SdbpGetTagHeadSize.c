/*
 * XREFs of SdbpGetTagHeadSize @ 0x14070E1A4
 * Callers:
 *     SdbpGetMappedTagData @ 0x14070DD44 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x14070DE7C (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x14070E1E8 (SdbpGetNextTagId.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14070E358 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, __int64 a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1LL);
  return 0LL;
}
