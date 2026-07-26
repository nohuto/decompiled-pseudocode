/*
 * XREFs of ndisGenerateNetBufferListCorrelationIds @ 0x1C007AB9C
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000C4C0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C000D0C0 (NdisAllocateNetBufferList.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00112C0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C001F2A0 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C001F980 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007AE78 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     ?ndisGenerateCorrelationIds@@YAKKK@Z @ 0x1C0079EB0 (-ndisGenerateCorrelationIds@@YAKKK@Z.c)
 */

__int64 __fastcall ndisGenerateNetBufferListCorrelationIds(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *i; // r8
  _QWORD *v4; // r8
  __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 248);
  if ( result <= 0 )
  {
    result = ndisGenerateCorrelationIds(a2);
    do
    {
      if ( (__int64)v4[31] <= 0 )
      {
        v5 = (unsigned int)result;
        result = (unsigned int)(result + 1);
        v4[31] = v5;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 );
  }
  else
  {
    for ( i = *(_QWORD **)a1; i; i = (_QWORD *)*i )
    {
      result = i[31];
      if ( result <= 0 )
      {
        result = ndisGenerateCorrelationIds(1u);
        i[31] = (unsigned int)result;
      }
    }
  }
  return result;
}
