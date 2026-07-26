/*
 * XREFs of NdisRetreatNetBufferListDataStart @ 0x1C001FCA0
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C007A270 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C007A6A0 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C000F860 (NdisAdvanceNetBufferDataStart.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  NDIS_STATUS v5; // esi
  int v7; // edx
  _NET_BUFFER *FirstNetBuffer; // rbx
  void (__stdcall *v11)(PMDL); // r14
  NET_BUFFER_ALLOCATE_MDL_HANDLER v12; // r15
  unsigned int DataOffset; // ecx
  _MDL *MdlChain; // rdx
  unsigned int v15; // ecx
  ULONG ByteCount; // eax
  PMDL (__stdcall *v18)(PULONG); // rax
  _MDL **v19; // rax
  ULONG v20; // eax
  struct _NET_BUFFER *Alignment; // rdi

  v5 = 0;
  v7 = (int)FreeMdlHandler;
  if ( (FreeMdlHandler == 0LL) == (AllocateMdlHandler == 0LL) )
  {
    FirstNetBuffer = NetBufferList->FirstNetBuffer;
    v11 = ndisFreeMdlInternal;
    v12 = ndisAllocateMdlInternal;
    if ( AllocateMdlHandler )
    {
      v12 = AllocateMdlHandler;
      v11 = FreeMdlHandler;
    }
    while ( FirstNetBuffer )
    {
      DataOffset = FirstNetBuffer->DataOffset;
      if ( DataOffset < DataOffsetDelta )
      {
        LODWORD(FreeMdlHandler) = DataBackFill + DataOffsetDelta - DataOffset;
        v18 = v12;
        if ( !v12 )
          v18 = ndisAllocateMdlInternal;
        v19 = (_MDL **)((__int64 (__fastcall *)(NET_BUFFER_FREE_MDL_HANDLER *))v18)(&FreeMdlHandler);
        MdlChain = (_MDL *)v19;
        if ( !v19 )
        {
          Alignment = NetBufferList->FirstNetBuffer;
          v5 = -1073741670;
          while ( Alignment != FirstNetBuffer )
          {
            NdisAdvanceNetBufferDataStart(Alignment, DataOffsetDelta, 1u, v11);
            Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
          }
          return v5;
        }
        *v19 = FirstNetBuffer->MdlChain;
        v20 = (_DWORD)FreeMdlHandler - DataOffsetDelta;
        FirstNetBuffer->MdlChain = MdlChain;
        FirstNetBuffer->DataOffset += v20;
        FirstNetBuffer->DataLength += DataOffsetDelta;
        v15 = FirstNetBuffer->DataOffset;
      }
      else
      {
        MdlChain = FirstNetBuffer->MdlChain;
        v15 = DataOffset - DataOffsetDelta;
        FirstNetBuffer->DataLength += DataOffsetDelta;
        FirstNetBuffer->DataOffset = v15;
        while ( MdlChain )
        {
          ByteCount = MdlChain->ByteCount;
          if ( v15 < ByteCount )
            break;
          MdlChain = MdlChain->Next;
          v15 -= ByteCount;
        }
      }
      FirstNetBuffer->Link.Region = (unsigned __int64)MdlChain;
      v5 = 0;
      FirstNetBuffer->CurrentMdlOffset = v15;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        21,
        22,
        (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids);
    }
    return -1073741811;
  }
  return v5;
}
