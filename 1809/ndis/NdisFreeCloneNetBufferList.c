/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0001440
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0003CB0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0004CB4 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C00089E0 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferListContext @ 0x1C00118F0 (NdisFreeNetBufferListContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  bool v3; // r15
  _DWORD *NdisPoolHandle; // rsi
  bool v5; // r14
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
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // r13
  PNET_BUFFER_LIST Alignment; // r14
  void *v21; // rbx
  unsigned __int8 *SourceHandle; // rcx
  __int64 v23; // rax
  char *v24; // r14
  char v25; // [rsp+70h] [rbp+8h] BYREF
  char v26; // [rsp+78h] [rbp+10h] BYREF
  __int64 v27; // [rsp+80h] [rbp+18h]

  v3 = (FreeCloneFlags & 2) != 0;
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_2;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v27 = 0LL;
  v25 = 0;
  v26 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    v17 = 0LL;
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
        goto LABEL_48;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        *(_QWORD *)&FreeCloneFlags = *SourceHandle;
        if ( (unsigned __int8)(FreeCloneFlags - 17) <= 1u || (_BYTE)FreeCloneFlags == 5 )
        {
          if ( SourceHandle != (unsigned __int8 *)136 || Alignment->ParentNetBufferList )
          {
            ++v18;
            v23 = 136LL;
          }
          else
          {
            ++v17;
            v23 = 24LL;
            v27 = v17;
            ++v18;
          }
          goto LABEL_33;
        }
        if ( (unsigned __int8)byte_1C00A026A >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)FreeCloneFlags);
          goto LABEL_50;
        }
      }
      else if ( (unsigned __int8)byte_1C00A026A >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment);
LABEL_50:
        v17 = v27;
      }
LABEL_48:
      v23 = 140LL;
LABEL_33:
      Alignment->NetBufferListInfo[27] = (void *)v23;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v21 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v21, v19 - v18, &v25, &v26);
      v17 = v27;
    }
    v19 = v18;
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
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 4u, 0LL, 0);
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
  v24 = v11 + 128;
  ++*((_DWORD *)v24 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v24) >= *((_WORD *)v24 + 8) )
  {
    ++*((_DWORD *)v24 + 8);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v24 + 7))(CloneNetBufferList, v24);
  }
  else
  {
    v16 = (_SLIST_HEADER *)v24;
LABEL_21:
    ExpInterlockedPushEntrySList(v16, (PSLIST_ENTRY)CloneNetBufferList);
  }
}
