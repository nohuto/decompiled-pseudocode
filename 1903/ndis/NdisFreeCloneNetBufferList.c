/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C00123A0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000C4C0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000D4D8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C000EAA0 (NdisFreeNetBuffer.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0015024 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     NdisFreeNetBufferListContext @ 0x1C001E9A0 (NdisFreeNetBufferListContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  bool v3; // r14
  _DWORD *NdisPoolHandle; // rsi
  bool v5; // r15
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v9; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v11; // r14
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  char *v14; // rbx
  _SLIST_HEADER *v15; // rsi
  _SLIST_HEADER *v16; // rcx
  char *v17; // r14
  __int64 v18; // r8
  __int64 v19; // r12
  PNET_BUFFER_LIST Alignment; // r15
  void *v21; // rbx
  char *SourceHandle; // rcx
  __int64 v23; // rax
  char v24; // [rsp+80h] [rbp+8h] BYREF
  char v25; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v3 = (FreeCloneFlags & 2) != 0;
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_2;
  v18 = 0LL;
  v19 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0;
  v25 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    v18 = 0LL;
  }
  Alignment = CloneNetBufferList;
  do
  {
    v21 = Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == v21 )
    {
      if ( !v21 && !Alignment->SourceHandle )
        Alignment->SourceHandle = 0LL;
      if ( ((unsigned __int8)v21 & 4) != 0 )
        goto LABEL_50;
      SourceHandle = (char *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        *(_QWORD *)&FreeCloneFlags = (unsigned __int8)*SourceHandle;
        if ( (unsigned __int8)(FreeCloneFlags - 17) <= 1u || (_BYTE)FreeCloneFlags == 5 )
        {
          if ( SourceHandle != (char *)136 || Alignment->ParentNetBufferList )
          {
            ++v19;
            v23 = 136LL;
          }
          else
          {
            ++v18;
            v23 = 24LL;
            v26 = v18;
            ++v19;
          }
          goto LABEL_40;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(FreeCloneFlags) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            FreeCloneFlags,
            27,
            12,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment,
            *SourceHandle);
          goto LABEL_49;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(FreeCloneFlags) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          FreeCloneFlags,
          27,
          11,
          (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
          (char)Alignment);
LABEL_49:
        v18 = v26;
      }
LABEL_50:
      v23 = 140LL;
LABEL_40:
      Alignment->NetBufferListInfo[27] = (void *)v23;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v21 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v21, v27 - v19, &v24, &v25);
    v18 = v26;
    v27 = v19;
  }
  while ( Alignment );
LABEL_2:
  v5 = (NdisPoolHandle[15] & 1) == 0;
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v3 )
      {
        MdlChain = FirstNetBuffer->MdlChain;
        if ( MdlChain )
        {
          do
          {
            Next = MdlChain->Next;
            IoFreeMdl(MdlChain);
            MdlChain = Next;
          }
          while ( Next );
        }
      }
      v9 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v5 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v9;
    }
    while ( v9 );
  }
  Context = CloneNetBufferList->Context;
  v11 = (char *)CloneNetBufferList->NdisPoolHandle;
  if ( Context && (CloneNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(CloneNetBufferList, Context->Size - Context->Offset);
  CloneNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)CloneNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(FreeCloneFlags) = 1;
    WfpNblInfoCleanup(CloneNetBufferList, *(_QWORD *)&FreeCloneFlags);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v12 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    v13 = (unsigned __int64)v12 << 8;
    v14 = &v11[v13 + 384];
    if ( !v14[216] )
    {
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v11[v13 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v11 + 128));
      v12 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    }
    if ( v12 == KeGetPcr()->Prcb.Number )
      v15 = (_SLIST_HEADER *)*((_QWORD *)v14 + 24);
    else
      v15 = (_SLIST_HEADER *)*((_QWORD *)v14 + 25);
    ++*((_DWORD *)v14 + 7);
    if ( ExQueryDepthSList(v15) < *((_WORD *)v14 + 8) )
    {
      v16 = v15;
      goto LABEL_21;
    }
    ++*((_DWORD *)v14 + 8);
  }
  v17 = v11 + 128;
  ++*((_DWORD *)v17 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v17) >= *((_WORD *)v17 + 8) )
  {
    ++*((_DWORD *)v17 + 8);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v17 + 7))(CloneNetBufferList, v17);
  }
  else
  {
    v16 = (_SLIST_HEADER *)v17;
LABEL_21:
    ExpInterlockedPushEntrySList(v16, (PSLIST_ENTRY)CloneNetBufferList);
  }
}
