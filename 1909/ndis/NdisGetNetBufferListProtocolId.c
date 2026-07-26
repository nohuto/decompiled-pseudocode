/*
 * XREFs of NdisGetNetBufferListProtocolId @ 0x1C007AC10
 * Callers:
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B5CC (ndisXlateSendNetBufferListsToPacketArray.c)
 * Callees:
 *     <none>
 */

UCHAR __stdcall NdisGetNetBufferListProtocolId(PNET_BUFFER_LIST NetBufferList)
{
  UCHAR result; // al

  result = (__int64)NetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !result )
    return *((_BYTE *)NetBufferList->NdisPoolHandle + 32);
  return result;
}
