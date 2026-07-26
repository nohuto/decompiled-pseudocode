/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x1C00119E0
 * Callers:
 *     NdisAllocateNetBufferList @ 0x1C0004520 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004940 (NdisAllocateNetBufferAndNetBufferList.c)
 * Callees:
 *     ?ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0011B50 (-ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z.c)
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  _NET_BUFFER_LIST_CONTEXT *v10; // r10
  int v11; // ecx
  NDIS_STATUS result; // eax
  unsigned __int16 v13; // cx
  int v14; // edx
  unsigned __int16 v15; // bp
  _NET_BUFFER_LIST_CONTEXT *PoolWithTag; // rax
  _NET_BUFFER_LIST_CONTEXT *v17; // rcx

  if ( !ContextSize )
    return 0;
  if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return -1073676267;
  if ( !ndisIsCurrentNblContextBlockPreallocated(NetBufferList) || *(_WORD *)(v9 + 10) < ContextSize )
  {
    *(_WORD *)(v8 + 56) += ContextSize;
    v11 = *(unsigned __int16 *)(v8 + 56);
    if ( v11 <= ndisMaxCachedNblContextSize )
    {
      if ( (unsigned __int16)v11 <= WORD1(NetBufferList->NdisReserved[1]) )
        LOWORD(v11) = WORD1(NetBufferList->NdisReserved[1]);
      WORD1(NetBufferList->NdisReserved[1]) = v11;
    }
  }
  if ( v9 )
  {
    v13 = *(_WORD *)(v9 + 10);
    if ( v13 >= ContextSize )
    {
      *(_WORD *)(v9 + 10) = v13 - ContextSize;
      return 0;
    }
  }
  if ( v10 && v10->Size >= ContextSize )
  {
    v10->Offset -= ContextSize;
    v10->Next = NetBufferList->Context;
    NetBufferList->Context = v10;
    NetBufferList->NetBufferListInfo[28] = 0LL;
    return 0;
  }
  v14 = LOWORD(NetBufferList->NdisReserved[1]);
  v15 = ContextBackFill + ContextSize;
  if ( v14 <= ndisMaxCachedNblContextSize )
  {
    if ( v10 )
    {
      NetBufferList->NetBufferListInfo[28] = 0LL;
      ExFreePoolWithTag(v10, 0);
      LOWORD(v14) = NetBufferList->NdisReserved[1];
    }
    if ( v15 <= ContextSize + WORD1(NetBufferList->NdisReserved[1]) - (unsigned __int16)v14 )
      v15 = ContextSize + WORD1(NetBufferList->NdisReserved[1]) - v14;
    if ( v15 > ContextSize + (unsigned int)ContextBackFill )
      PoolTag = 1668170830;
  }
  PoolWithTag = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 16LL, PoolTag);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Size = v15;
    PoolWithTag->Offset = v15 - ContextSize;
    PoolWithTag->Next = NetBufferList->Context;
    result = 0;
    NetBufferList->Context = v17;
  }
  else
  {
    LOWORD(NetBufferList->NdisReserved[1]) -= ContextSize;
    return -1073741670;
  }
  return result;
}
