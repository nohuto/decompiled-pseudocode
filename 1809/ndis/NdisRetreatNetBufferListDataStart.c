/*
 * XREFs of NdisRetreatNetBufferListDataStart @ 0x1C0012710
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C004D310 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C004D730 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C0007AE0 (NdisAdvanceNetBufferDataStart.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  NDIS_STATUS v5; // esi
  _NET_BUFFER *FirstNetBuffer; // rbx
  void (__stdcall *v10)(PMDL); // r14
  NET_BUFFER_ALLOCATE_MDL_HANDLER v11; // r15
  unsigned int DataOffset; // ecx
  _MDL *MdlChain; // rdx
  unsigned int v14; // ecx
  ULONG ByteCount; // eax
  PMDL (__stdcall *v17)(PULONG); // rax
  _MDL **v18; // rax
  ULONG v19; // eax
  struct _NET_BUFFER *Alignment; // rdi

  v5 = 0;
  if ( (FreeMdlHandler == 0LL) == (AllocateMdlHandler == 0LL) )
  {
    FirstNetBuffer = NetBufferList->FirstNetBuffer;
    v10 = ndisFreeMdl;
    v11 = ndisAllocateMdl;
    if ( AllocateMdlHandler )
    {
      v11 = AllocateMdlHandler;
      v10 = FreeMdlHandler;
    }
    while ( FirstNetBuffer )
    {
      DataOffset = FirstNetBuffer->DataOffset;
      if ( DataOffset < DataOffsetDelta )
      {
        LODWORD(FreeMdlHandler) = DataBackFill + DataOffsetDelta - DataOffset;
        v17 = v11;
        if ( !v11 )
          v17 = ndisAllocateMdl;
        v18 = (_MDL **)((__int64 (__fastcall *)(NET_BUFFER_FREE_MDL_HANDLER *))v17)(&FreeMdlHandler);
        MdlChain = (_MDL *)v18;
        if ( !v18 )
        {
          Alignment = NetBufferList->FirstNetBuffer;
          v5 = -1073741670;
          while ( Alignment != FirstNetBuffer )
          {
            NdisAdvanceNetBufferDataStart(Alignment, DataOffsetDelta, 1u, v10);
            Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
          }
          return v5;
        }
        *v18 = FirstNetBuffer->MdlChain;
        v19 = (_DWORD)FreeMdlHandler - DataOffsetDelta;
        FirstNetBuffer->MdlChain = MdlChain;
        FirstNetBuffer->DataOffset += v19;
        FirstNetBuffer->DataLength += DataOffsetDelta;
        v14 = FirstNetBuffer->DataOffset;
      }
      else
      {
        MdlChain = FirstNetBuffer->MdlChain;
        v14 = DataOffset - DataOffsetDelta;
        FirstNetBuffer->DataLength += DataOffsetDelta;
        FirstNetBuffer->DataOffset = v14;
        while ( MdlChain )
        {
          ByteCount = MdlChain->ByteCount;
          if ( v14 < ByteCount )
            break;
          MdlChain = MdlChain->Next;
          v14 -= ByteCount;
        }
      }
      FirstNetBuffer->Link.Region = (unsigned __int64)MdlChain;
      v5 = 0;
      FirstNetBuffer->CurrentMdlOffset = v14;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A0264 >= 4u )
      WPP_SF_(22LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids);
    return -1073741811;
  }
  return v5;
}
