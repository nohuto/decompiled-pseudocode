/*
 * XREFs of AlpcpAllocateCompletionPacketLookaside @ 0x14068B8B4
 * Callers:
 *     AlpcpAssociateIoCompletionPort @ 0x1406B26EC (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x1405EAC20 (IopFreeMiniCompletionPacket.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068B990 (IoAllocateMiniCompletionPacket.c)
 */

char *__fastcall AlpcpAllocateCompletionPacketLookaside(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char *PoolWithTag; // rax
  char *v7; // rbx
  __int64 v8; // rdi
  _QWORD *i; // rsi
  __int64 MiniCompletionPacket; // rax
  char *v12; // rsi
  __int64 v13; // rcx

  v3 = a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * a1 + 56, 0x6E496C41u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24 * v3 + 56);
    *(_QWORD *)v7 = 0LL;
    v8 = 0LL;
    *((_DWORD *)v7 + 2) = v3;
    *((_QWORD *)v7 + 5) = a2;
    *((_QWORD *)v7 + 6) = a3;
    if ( !(_DWORD)v3 )
      return v7;
    for ( i = v7 + 56; ; i += 3 )
    {
      i[2] = v7;
      MiniCompletionPacket = IoAllocateMiniCompletionPacket(AlpcpLookasidePacketCallbackRoutine);
      i[1] = MiniCompletionPacket;
      if ( !MiniCompletionPacket )
        break;
      v8 = (unsigned int)(v8 + 1);
      *i = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = i;
      if ( (unsigned int)v8 >= (unsigned int)v3 )
        return v7;
    }
    if ( (_DWORD)v8 )
    {
      v12 = &v7[16 * v8 + 64 + 8 * v8];
      do
      {
        v12 -= 24;
        v13 = *(_QWORD *)v12;
        *(_QWORD *)(v13 + 56) = 0LL;
        IopFreeMiniCompletionPacket((_SLIST_ENTRY *)v13);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
