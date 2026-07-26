/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x1C001EA90
 * Callers:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C000D0C0 (NdisAllocateNetBufferList.c)
 * Callees:
 *     ?ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C001EBF8 (-ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z.c)
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  NDIS_STATUS v4; // ebp
  __int64 v9; // rcx
  __int64 v10; // r8
  _NET_BUFFER_LIST_CONTEXT *v11; // r10
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v15; // edx
  unsigned __int16 v16; // si
  _NET_BUFFER_LIST_CONTEXT *PoolWithTag; // rax

  v4 = 0;
  if ( ContextSize )
  {
    if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    {
      return -1073676267;
    }
    else
    {
      if ( !ndisIsCurrentNblContextBlockPreallocated(NetBufferList) || *(_WORD *)(v10 + 10) < ContextSize )
      {
        *(_WORD *)(v9 + 56) += ContextSize;
        v12 = *(unsigned __int16 *)(v9 + 56);
        if ( v12 <= ndisMaxCachedNblContextSize )
        {
          if ( (unsigned __int16)v12 <= WORD1(NetBufferList->NdisReserved[1]) )
            LOWORD(v12) = WORD1(NetBufferList->NdisReserved[1]);
          WORD1(NetBufferList->NdisReserved[1]) = v12;
        }
      }
      if ( v10 && (v13 = *(_WORD *)(v10 + 10), v13 >= ContextSize) )
      {
        *(_WORD *)(v10 + 10) = v13 - ContextSize;
      }
      else if ( v11 && v11->Size >= ContextSize )
      {
        v11->Offset -= ContextSize;
        v11->Next = NetBufferList->Context;
        NetBufferList->Context = v11;
        NetBufferList->NetBufferListInfo[28] = 0LL;
      }
      else
      {
        v15 = LOWORD(NetBufferList->NdisReserved[1]);
        v16 = ContextBackFill + ContextSize;
        if ( v15 <= ndisMaxCachedNblContextSize )
        {
          if ( v11 )
          {
            NetBufferList->NetBufferListInfo[28] = 0LL;
            ExFreePoolWithTag(v11, 0);
            LOWORD(v15) = NetBufferList->NdisReserved[1];
          }
          if ( v16 <= ContextSize + WORD1(NetBufferList->NdisReserved[1]) - (unsigned __int16)v15 )
            v16 = ContextSize + WORD1(NetBufferList->NdisReserved[1]) - v15;
          if ( v16 > ContextSize + (unsigned int)ContextBackFill )
            PoolTag = 1668170830;
        }
        PoolWithTag = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePoolWithTag(NonPagedPoolNx, v16 + 16LL, PoolTag);
        if ( PoolWithTag )
        {
          PoolWithTag->Size = v16;
          PoolWithTag->Offset = v16 - ContextSize;
          PoolWithTag->Next = NetBufferList->Context;
          NetBufferList->Context = PoolWithTag;
        }
        else
        {
          LOWORD(NetBufferList->NdisReserved[1]) -= ContextSize;
          return -1073741670;
        }
      }
    }
  }
  return v4;
}
