/*
 * XREFs of ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C006C458
 * Callers:
 *     ?ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C006CF9C (-ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004940 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0005F90 (NdisFreeNetBufferList.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004D1FC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0055588 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C006D2CC (ExAllocateFromNPagedLookasideList.c)
 */

PNET_BUFFER_LIST __fastcall ndisCopyPeriodicReceiveNbl(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        struct _NET_BUFFER_LIST *a3)
{
  __int64 v4; // rsi
  SIZE_T v5; // r13
  unsigned int v6; // ebx
  struct _NPAGED_LOOKASIDE_LIST *p_WaitListHead; // r12
  struct _MDL *PoolWithTagPriority; // rax
  struct _MDL *v9; // r14
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  _NET_BUFFER *v11; // rbx
  _MDL *CurrentMdl; // rcx
  char *MappedSystemVa; // rax
  unsigned int ByteCount; // edx
  __int64 CurrentMdlOffset; // rcx
  unsigned int v16; // edx
  __int64 v17; // rbx
  size_t v18; // r8
  char *v19; // rdx
  void *v20; // rcx
  char *v21; // rax
  char *v22; // r9
  struct _MDL *Next; // rcx
  unsigned int Flags; // eax
  void **v25; // rcx
  __int64 v26; // r8
  const struct _EVENT_DESCRIPTOR *v27; // rdx
  __int64 v28; // r9
  void **v29; // rcx
  __int64 v30; // rax
  unsigned __int8 DataOffset; // [rsp+28h] [rbp-49h]
  const struct _GUID *DataLength; // [rsp+30h] [rbp-41h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+48h] [rbp-29h]
  _MDL *v35; // [rsp+48h] [rbp-29h]
  unsigned __int64 v36; // [rsp+58h] [rbp-19h]
  struct _GUID v38; // [rsp+78h] [rbp+7h] BYREF
  struct _GUID v39; // [rsp+88h] [rbp+17h] BYREF

  v4 = 0LL;
  FirstNetBuffer = a3->FirstNetBuffer;
  v5 = FirstNetBuffer->DataLength;
  v6 = (MmSizeOfMdl((PVOID)0xFFF, v5) + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v5 <= 0x64 )
  {
    p_WaitListHead = (struct _NPAGED_LOOKASIDE_LIST *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
LABEL_5:
    PoolWithTagPriority = (struct _MDL *)ExAllocateFromNPagedLookasideList(p_WaitListHead);
    goto LABEL_8;
  }
  if ( (unsigned int)v5 <= 0x5EE )
  {
    p_WaitListHead = &Lookaside;
    goto LABEL_5;
  }
  p_WaitListHead = 0LL;
  if ( (v5 + v6) >> 32 )
    return (PNET_BUFFER_LIST)v4;
  PoolWithTagPriority = (struct _MDL *)ExAllocatePoolWithTagPriority(
                                         NonPagedPoolNx,
                                         v6 + (unsigned int)v5,
                                         0x7270444Eu,
                                         LowPoolPriority);
LABEL_8:
  v9 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return (PNET_BUFFER_LIST)v4;
  PoolWithTagPriority->Next = 0LL;
  PoolWithTagPriority->MdlFlags = 0;
  v36 = (unsigned __int64)PoolWithTagPriority + v6;
  PoolWithTagPriority->ByteCount = v5;
  PoolWithTagPriority->ByteOffset = ((_WORD)PoolWithTagPriority + (_WORD)v6) & 0xFFF;
  PoolWithTagPriority->Size = 8 * ((((((unsigned int)PoolWithTagPriority + v6) & 0xFFFLL) + v5 + 4095) >> 12) + 6);
  PoolWithTagPriority->StartVa = (PVOID)(v36 & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(PoolWithTagPriority);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(WPP_MAIN_CB.Dpc.SystemArgument1, 0, 0, v9, 0, v5);
  if ( !NetBufferAndNetBufferList )
    goto LABEL_38;
  v11 = FirstNetBuffer;
  CurrentMdl = FirstNetBuffer->CurrentMdl;
  v35 = CurrentMdl;
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    CurrentMdl = v35;
  }
  if ( !MappedSystemVa
    || (ByteCount = CurrentMdl->ByteCount,
        CurrentMdlOffset = v11->CurrentMdlOffset,
        (unsigned int)CurrentMdlOffset > ByteCount) )
  {
LABEL_37:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
LABEL_38:
    if ( (v9->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v9->MappedSystemVa, v9);
    if ( p_WaitListHead )
      ExFreeToNPagedLookasideList(p_WaitListHead, v9);
    else
      ExFreePoolWithTag(v9, 0x7270444Eu);
    return (PNET_BUFFER_LIST)v4;
  }
  v16 = ByteCount - CurrentMdlOffset;
  if ( v16 >= (unsigned int)v5 )
    v16 = v5;
  v17 = v16;
  v18 = v16;
  v19 = &MappedSystemVa[CurrentMdlOffset];
  v20 = (void *)v36;
  while ( 1 )
  {
    memmove(v20, v19, v18);
    LODWORD(v5) = v5 - v17;
    v22 = (char *)(v17 + v36);
    v36 += v17;
    Next = v35->Next;
    v35 = Next;
    if ( !Next )
      break;
    v17 = Next->ByteCount;
    if ( (Next->MdlFlags & 5) != 0 )
    {
      v21 = (char *)Next->MappedSystemVa;
    }
    else
    {
      v21 = (char *)MmMapLockedPagesSpecifyCache(Next, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      v22 = (char *)v36;
    }
    if ( !v21 )
      goto LABEL_37;
    v19 = v21;
    v20 = v22;
    if ( (unsigned int)v17 >= (unsigned int)v5 )
      v17 = (unsigned int)v5;
    v18 = (unsigned int)v17;
  }
  LODWORD(NetBufferAndNetBufferList->ProtocolReserved[0]) = a2;
  NetBufferAndNetBufferList->MiniportReserved[1] = p_WaitListHead;
  NetBufferAndNetBufferList->SourceHandle = a3->SourceHandle;
  Flags = a3->Flags;
  if ( (Flags & 0x80u) != 0 )
  {
    NetBufferAndNetBufferList->Flags |= 0x80u;
    NetBufferAndNetBufferList->NblFlags |= 0x8000u;
    Flags = a3->Flags;
  }
  if ( (Flags & 0x200) != 0 )
    NetBufferAndNetBufferList->Flags |= 0x200u;
  v25 = &NetBufferAndNetBufferList->NetBufferListInfo[6];
  NetBufferAndNetBufferList->NetBufferListInfo[0] = a3->NetBufferListInfo[0];
  v26 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[1] = a3->NetBufferListInfo[1];
  v27 = (const struct _EVENT_DESCRIPTOR *)((char *)a3 - (char *)NetBufferAndNetBufferList);
  v28 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[2] = a3->NetBufferListInfo[2];
  NetBufferAndNetBufferList->NetBufferListInfo[3] = a3->NetBufferListInfo[3];
  NetBufferAndNetBufferList->NetBufferListInfo[4] = a3->NetBufferListInfo[4];
  do
  {
    *v25 = *(void **)((char *)v25 + (_QWORD)v27);
    ++v25;
    --v28;
  }
  while ( v28 );
  v29 = &NetBufferAndNetBufferList->NetBufferListInfo[11];
  do
  {
    *v29 = *(void **)((char *)&v27->Id + (_QWORD)v29);
    ++v29;
    --v26;
  }
  while ( v26 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v30 = (__int64)a3->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    v39 = (struct _GUID)((__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v38 = (struct _GUID)(unsigned __int64)v30;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v27, &v39, &v38, DataOffset, DataLength, 6u);
  }
  return NetBufferAndNetBufferList;
}
