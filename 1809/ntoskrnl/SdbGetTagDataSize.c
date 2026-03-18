/*
 * XREFs of SdbGetTagDataSize @ 0x14067D30C
 * Callers:
 *     SdbpGetIndex @ 0x14067CAFC (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14067CCD0 (SdbpGetFirstIndexedRecord.c)
 *     SdbpReadTagData @ 0x14067CF60 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x14067D284 (SdbpGetNextTagId.c)
 *     SdbpGetNextIndexedRecord @ 0x140721938 (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407229A4 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x140847C28 (KsepDbReadKData.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73F4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E761C (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x1405C82F0 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
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
      if ( !(unsigned int)SdbpReadMappedData(a1, v2 + 2, &v6, 4u) )
        AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 278, (unsigned int)"Error reading size data");
      result = v6;
      break;
  }
  if ( (int)result + v2 < (unsigned int)result || (unsigned int)(result + v2) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 289, (unsigned int)"Error reading size data");
    return 0xFFFFFFFFLL;
  }
  return result;
}
