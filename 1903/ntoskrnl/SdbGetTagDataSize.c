/*
 * XREFs of SdbGetTagDataSize @ 0x14070C490
 * Callers:
 *     SdbpGetIndex @ 0x14070BD10 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14070BE90 (SdbpGetFirstIndexedRecord.c)
 *     SdbpReadTagData @ 0x14070C09C (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x14070C408 (SdbpGetNextTagId.c)
 *     SdbpGetNextIndexedRecord @ 0x14074CA80 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1408830BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x140923A88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140923CB0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x14070C578 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v4 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  switch ( v4 )
  {
    case 12288:
      result = 2LL;
      break;
    case 16384:
    case 24576:
      result = 4LL;
      break;
    case 20480:
      result = 8LL;
      break;
    case 4096:
      result = 0LL;
      break;
    case 8192:
      result = 1LL;
      break;
    default:
      v6 = 0;
      if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(v2 + 2), &v6, 4LL) )
        AslLogCallPrintf(1LL);
      result = v6;
      break;
  }
  if ( (int)result + v2 < (unsigned int)result || (unsigned int)(result + v2) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    return 0xFFFFFFFFLL;
  }
  return result;
}
