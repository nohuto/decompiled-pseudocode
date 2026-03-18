/*
 * XREFs of SdbpGetTagHeadSize @ 0x14070C3C4
 * Callers:
 *     SdbpGetMappedTagData @ 0x14070BF64 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x14070C09C (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x14070C408 (SdbpGetNextTagId.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14070C578 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, __int64 a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1LL);
  return 0LL;
}
