/*
 * XREFs of NdisAllocateBuffer @ 0x1C00809C0
 * Callers:
 *     ndisMAllocSGList @ 0x1C00790F0 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C0079544 (ndisMAllocSGListS.c)
 *     ?ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z @ 0x1C00895AC (-ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z.c)
 *     ?ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z @ 0x1C00ACEC8 (-ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocateBuffer(
        PNDIS_STATUS Status,
        PNDIS_BUFFER *Buffer,
        NDIS_HANDLE PoolHandle,
        PVOID VirtualAddress,
        UINT Length)
{
  PMDL Mdl; // rax

  *Status = -1073741823;
  Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
  *Buffer = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    (*Buffer)->Next = 0LL;
    *Status = 0;
  }
}
