/*
 * XREFs of ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00AC070
 * Callers:
 *     ?ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00ADB7C (-ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0079C00 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0089A74 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00AE03C (ExAllocateFromNPagedLookasideList.c)
 */

PNET_BUFFER_LIST __fastcall ndisCopyPeriodicReceiveNbl(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        struct _NET_BUFFER_LIST *a3)
{
  _NET_BUFFER *FirstNetBuffer; // r13
  __int64 v5; // rsi
  SIZE_T v6; // r12
  unsigned int v7; // ebx
  struct _NPAGED_LOOKASIDE_LIST *p_WaitListHead; // r15
  struct _MDL *PoolWithTagPriority; // rax
  struct _MDL *v10; // r14
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  _MDL *CurrentMdl; // r13
  char *MappedSystemVa; // rax
  unsigned int ByteCount; // ecx
  __int64 CurrentMdlOffset; // rdx
  unsigned int v16; // ecx
  char *v17; // rdx
  __int64 v18; // rbx
  size_t v19; // r8
  char *v20; // rcx
  char *v21; // rax
  unsigned int Flags; // eax
  void **v23; // rcx
  __int64 v24; // r8
  const struct _EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // r9
  void **v27; // rcx
  __int64 v28; // rax
  unsigned __int8 DataOffset; // [rsp+20h] [rbp-A8h]
  const struct _GUID *DataLength; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-88h]
  _NET_BUFFER *v34; // [rsp+60h] [rbp-68h]
  struct _GUID v35; // [rsp+70h] [rbp-58h] BYREF
  struct _GUID v36; // [rsp+80h] [rbp-48h] BYREF

  FirstNetBuffer = a3->FirstNetBuffer;
  v5 = 0LL;
  v34 = FirstNetBuffer;
  v6 = FirstNetBuffer->DataLength;
  v7 = (MmSizeOfMdl((PVOID)0xFFF, v6) + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v6 <= 0x64 )
  {
    p_WaitListHead = (struct _NPAGED_LOOKASIDE_LIST *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
LABEL_5:
    PoolWithTagPriority = (struct _MDL *)ExAllocateFromNPagedLookasideList(p_WaitListHead);
    goto LABEL_8;
  }
  if ( (unsigned int)v6 <= 0x5EE )
  {
    p_WaitListHead = &Lookaside;
    goto LABEL_5;
  }
  p_WaitListHead = 0LL;
  if ( (v6 + v7) >> 32 )
    return (PNET_BUFFER_LIST)v5;
  PoolWithTagPriority = (struct _MDL *)ExAllocatePoolWithTagPriority(
                                         NonPagedPoolNx,
                                         v7 + (unsigned int)v6,
                                         0x7270444Eu,
                                         LowPoolPriority);
LABEL_8:
  v10 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return (PNET_BUFFER_LIST)v5;
  PoolWithTagPriority->Next = 0LL;
  PoolWithTagPriority->MdlFlags = 0;
  v32 = (unsigned __int64)PoolWithTagPriority + v7;
  PoolWithTagPriority->ByteCount = v6;
  PoolWithTagPriority->ByteOffset = ((_WORD)PoolWithTagPriority + (_WORD)v7) & 0xFFF;
  PoolWithTagPriority->Size = 8 * ((((((unsigned int)PoolWithTagPriority + v7) & 0xFFFLL) + v6 + 4095) >> 12) + 6);
  PoolWithTagPriority->StartVa = (PVOID)(v32 & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(PoolWithTagPriority);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(WPP_MAIN_CB.Dpc.SystemArgument1, 0, 0, v10, 0, v6);
  if ( !NetBufferAndNetBufferList )
    goto LABEL_40;
  CurrentMdl = FirstNetBuffer->CurrentMdl;
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !MappedSystemVa
    || (ByteCount = CurrentMdl->ByteCount,
        CurrentMdlOffset = v34->CurrentMdlOffset,
        (unsigned int)CurrentMdlOffset > ByteCount) )
  {
LABEL_39:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
LABEL_40:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    if ( p_WaitListHead )
      ExFreeToNPagedLookasideList(p_WaitListHead, v10);
    else
      ExFreePoolWithTag(v10, 0x7270444Eu);
    return (PNET_BUFFER_LIST)v5;
  }
  v16 = ByteCount - CurrentMdlOffset;
  if ( v16 >= (unsigned int)v6 )
    v16 = v6;
  v17 = &MappedSystemVa[CurrentMdlOffset];
  v18 = v16;
  v19 = v16;
  v20 = (char *)v32;
  while ( 1 )
  {
    memmove(v20, v17, v19);
    LODWORD(v6) = v6 - v18;
    CurrentMdl = CurrentMdl->Next;
    v20 = (char *)(v18 + v32);
    v32 += v18;
    if ( !CurrentMdl )
      break;
    v18 = CurrentMdl->ByteCount;
    if ( (CurrentMdl->MdlFlags & 5) != 0 )
    {
      v21 = (char *)CurrentMdl->MappedSystemVa;
    }
    else
    {
      v21 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      v20 = (char *)v32;
    }
    if ( !v21 )
      goto LABEL_39;
    v17 = v21;
    if ( (unsigned int)v18 >= (unsigned int)v6 )
      v18 = (unsigned int)v6;
    v19 = (unsigned int)v18;
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
  v23 = &NetBufferAndNetBufferList->NetBufferListInfo[6];
  NetBufferAndNetBufferList->NetBufferListInfo[0] = a3->NetBufferListInfo[0];
  v24 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[1] = a3->NetBufferListInfo[1];
  v25 = (const struct _EVENT_DESCRIPTOR *)((char *)a3 - (char *)NetBufferAndNetBufferList);
  v26 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[2] = a3->NetBufferListInfo[2];
  NetBufferAndNetBufferList->NetBufferListInfo[3] = a3->NetBufferListInfo[3];
  NetBufferAndNetBufferList->NetBufferListInfo[4] = a3->NetBufferListInfo[4];
  do
  {
    *v23 = *(void **)((char *)v23 + (_QWORD)v25);
    ++v23;
    --v26;
  }
  while ( v26 );
  v27 = &NetBufferAndNetBufferList->NetBufferListInfo[11];
  do
  {
    *v27 = *(void **)((char *)&v25->Id + (_QWORD)v27);
    ++v27;
    --v24;
  }
  while ( v24 );
  if ( byte_1C00E5E20 )
  {
    NetBufferAndNetBufferList->NetBufferListInfo[13] = a3->NetBufferListInfo[13];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v28 = (__int64)a3->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    v36 = (struct _GUID)((__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v35 = (struct _GUID)(unsigned __int64)v28;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v25, &v36, &v35, DataOffset, DataLength, 6u);
  }
  return NetBufferAndNetBufferList;
}
