/*
 * XREFs of NdisAdvanceNetBufferListDataStart @ 0x1C001FDC0
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x1C007A820 (NdisFreeFragmentNetBufferList.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C007A9E0 (NdisFreeReassembledNetBufferList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisAdvanceNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlMdlHandler)
{
  _NET_BUFFER *FirstNetBuffer; // rbx
  NET_BUFFER_FREE_MDL_HANDLER v7; // rsi
  _NET_BUFFER *MdlChain; // rdx
  _MDL *CurrentMdl; // rcx
  _MDL *v10; // rax
  unsigned int DataOffset; // r8d
  ULONG i; // eax
  ULONG ByteCount; // edx

  FirstNetBuffer = NetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    v7 = ndisFreeMdlInternal;
    if ( FreeMdlMdlHandler )
      v7 = FreeMdlMdlHandler;
    do
    {
      FirstNetBuffer->DataOffset += DataOffsetDelta;
      FirstNetBuffer->DataLength -= DataOffsetDelta;
      MdlChain = (_NET_BUFFER *)FirstNetBuffer->MdlChain;
      if ( FreeMdl )
      {
        CurrentMdl = FirstNetBuffer->MdlChain;
        if ( MdlChain )
        {
          v10 = FirstNetBuffer->MdlChain;
          do
          {
            DataOffset = FirstNetBuffer->DataOffset;
            CurrentMdl = v10;
            if ( MdlChain->DataOffset > DataOffset )
              break;
            if ( MdlChain == &FirstNetBuffer[1] )
              break;
            FirstNetBuffer->MdlChain = (_MDL *)MdlChain->Link.Alignment;
            FirstNetBuffer->DataOffset = DataOffset - MdlChain->DataOffset;
            ((void (__fastcall *)(_NET_BUFFER *))v7)(MdlChain);
            MdlChain = (_NET_BUFFER *)FirstNetBuffer->MdlChain;
            v10 = (_MDL *)MdlChain;
            CurrentMdl = (_MDL *)MdlChain;
          }
          while ( MdlChain );
        }
        i = FirstNetBuffer->DataOffset;
      }
      else
      {
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        for ( i = DataOffsetDelta + FirstNetBuffer->CurrentMdlOffset; CurrentMdl; i -= ByteCount )
        {
          ByteCount = CurrentMdl->ByteCount;
          if ( ByteCount > i )
            break;
          CurrentMdl = CurrentMdl->Next;
        }
      }
      FirstNetBuffer->Link.Region = (unsigned __int64)CurrentMdl;
      FirstNetBuffer->CurrentMdlOffset = i;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
  }
}
