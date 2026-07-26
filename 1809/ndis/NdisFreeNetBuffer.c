/*
 * XREFs of NdisFreeNetBuffer @ 0x1C00089E0
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C0001440 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C004DA80 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0004CB4 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeNetBuffer(PNET_BUFFER NetBuffer)
{
  char *NdisPoolHandle; // rbp
  _MDL *MdlChain; // rcx
  unsigned int SharedMemoryInfo; // ecx
  unsigned __int64 v5; // rax
  char *v6; // rbx
  _SLIST_HEADER *v7; // rsi
  _SLIST_HEADER *v8; // rcx

  NdisPoolHandle = (char *)NetBuffer->NdisPoolHandle;
  if ( (*((_DWORD *)NdisPoolHandle + 22) & 1) != 0 )
  {
    MdlChain = NetBuffer->MdlChain;
    if ( (MdlChain->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(MdlChain->MappedSystemVa, MdlChain);
  }
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    SharedMemoryInfo = (unsigned int)NetBuffer[-1].SharedMemoryInfo;
    v5 = (unsigned __int64)SharedMemoryInfo << 8;
    v6 = &NdisPoolHandle[v5 + 384];
    if ( !v6[216] )
    {
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v5 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
      SharedMemoryInfo = (unsigned int)NetBuffer[-1].SharedMemoryInfo;
    }
    if ( SharedMemoryInfo == KeGetPcr()->Prcb.Number )
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
    else
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 25);
    ++*((_DWORD *)v6 + 7);
    if ( ExQueryDepthSList(v7) < *((_WORD *)v6 + 8) )
    {
      v8 = v7;
      goto LABEL_13;
    }
    ++*((_DWORD *)v6 + 8);
  }
  ++*((_DWORD *)NdisPoolHandle + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)NdisPoolHandle + 8) < *((_WORD *)NdisPoolHandle + 72) )
  {
    v8 = (_SLIST_HEADER *)(NdisPoolHandle + 128);
LABEL_13:
    ExpInterlockedPushEntrySList(v8, (PSLIST_ENTRY)NetBuffer);
    return;
  }
  ++*((_DWORD *)NdisPoolHandle + 40);
  (*((void (__fastcall **)(PNET_BUFFER, char *))NdisPoolHandle + 23))(NetBuffer, NdisPoolHandle + 128);
}
