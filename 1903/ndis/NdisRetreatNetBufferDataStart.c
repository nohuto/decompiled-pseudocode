/*
 * XREFs of NdisRetreatNetBufferDataStart @ 0x1C000F8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler)
{
  unsigned int DataOffset; // ecx
  unsigned int v7; // ecx
  _MDL *MdlChain; // rdx
  ULONG ByteCount; // eax
  NDIS_STATUS result; // eax
  _MDL *v11; // rax
  ULONG v12; // eax
  ULONG v13; // [rsp+38h] [rbp+10h] BYREF

  DataOffset = NetBuffer->DataOffset;
  if ( DataOffset >= DataOffsetDelta )
  {
    NetBuffer->DataLength += DataOffsetDelta;
    v7 = DataOffset - DataOffsetDelta;
    MdlChain = NetBuffer->MdlChain;
    for ( NetBuffer->DataOffset = v7; MdlChain; v7 -= ByteCount )
    {
      ByteCount = MdlChain->ByteCount;
      if ( v7 < ByteCount )
        break;
      MdlChain = MdlChain->Next;
    }
    goto LABEL_4;
  }
  v13 = DataBackFill + DataOffsetDelta - DataOffset;
  if ( !AllocateMdlHandler )
    AllocateMdlHandler = ndisAllocateMdlInternal;
  v11 = (_MDL *)((__int64 (__fastcall *)(ULONG *))AllocateMdlHandler)(&v13);
  MdlChain = v11;
  if ( v11 )
  {
    v11->Next = NetBuffer->MdlChain;
    v12 = v13 - DataOffsetDelta;
    NetBuffer->MdlChain = MdlChain;
    NetBuffer->DataOffset += v12;
    NetBuffer->DataLength += DataOffsetDelta;
    v7 = NetBuffer->DataOffset;
LABEL_4:
    NetBuffer->Link.Region = (unsigned __int64)MdlChain;
    result = 0;
    NetBuffer->CurrentMdlOffset = v7;
    return result;
  }
  return -1073741670;
}
