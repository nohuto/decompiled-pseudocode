/*
 * XREFs of NdisMRegisterScatterGatherDma @ 0x1C00353C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0035504 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_SG_DMA_DESCRIPTION DmaDescription,
        PNDIS_HANDLE NdisMiniportDmaHandle)
{
  PNDIS_SG_DMA_DESCRIPTION v4; // rsi
  unsigned __int8 v6; // al
  unsigned int v7; // r8d
  unsigned int Flags; // eax
  NDIS_STATUS v9; // ebx
  char v11; // [rsp+30h] [rbp-28h]

  v4 = DmaDescription;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)DmaDescription;
    LOBYTE(DmaDescription) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)DmaDescription,
      1,
      16,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      (char)MiniportAdapterHandle,
      v11);
  }
  *NdisMiniportDmaHandle = 0LL;
  v6 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v6 < 6u )
  {
    v9 = -1073741637;
    goto LABEL_12;
  }
  if ( !v4->Header.Revision )
  {
    v9 = -1073676284;
    goto LABEL_12;
  }
  v7 = 2;
  if ( v6 > 6u || *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
  {
    Flags = v4->Flags;
    if ( (Flags & 0xFFFFFFFC) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_12;
    }
    if ( (Flags & 2) != 0 )
      v7 = 3;
  }
  v9 = ndisMInitializeScatterGatherDmaInternal(MiniportAdapterHandle, v4->Flags & 1, v7, v4->MaximumPhysicalMapping);
  if ( !v9 )
  {
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x40u;
    DmaDescription = (PNDIS_SG_DMA_DESCRIPTION)*((_QWORD *)MiniportAdapterHandle + 63);
    *(_QWORD *)&DmaDescription->ScatterGatherListSize = v4->ProcessSGListHandler;
    *(_QWORD *)&DmaDescription[1].Header.Type = v4->SharedMemAllocateCompleteHandler;
    DmaDescription[1].MaximumPhysicalMapping = v4->Flags;
    *NdisMiniportDmaHandle = DmaDescription;
    v4->ScatterGatherListSize = (unsigned int)DmaDescription[1].ProcessSGListHandler;
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x200u;
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(DmaDescription) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)DmaDescription,
      1,
      17,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      (char)MiniportAdapterHandle,
      v9);
  }
  return v9;
}
