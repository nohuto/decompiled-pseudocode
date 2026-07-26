/*
 * XREFs of ndisGenerateNetBufferListCorrelationIds @ 0x1C004DF78
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0003CB0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0004520 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004940 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0008370 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C0011D50 (NdisCopySendNetBufferListInfo.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C0012550 (NdisCopyReceiveNetBufferListInfo.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E3A4 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x1C004DF54 (ndisGenerateCorrelationIds.c)
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
