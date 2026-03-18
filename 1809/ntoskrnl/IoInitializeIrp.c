/*
 * XREFs of IoInitializeIrp @ 0x14011A180
 * Callers:
 *     IoInitializeIrpEx @ 0x140166CC0 (IoInitializeIrpEx.c)
 *     IopAllocateBackpocketIrp @ 0x14027E320 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14027E600 (IopAllocateReserveIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140753D0C (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ABA4C (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x140930768 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     IovInitializeIrp @ 0x140924270 (IovInitializeIrp.c)
 */

void __stdcall IoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 )
    IovInitializeIrp(Irp, PacketSize, StackSize, retaddr);
  memset(Irp, 0, PacketSize);
  Irp->Size = PacketSize;
  Irp->Type = 6;
  Irp->CurrentLocation = StackSize + 1;
  Irp->StackCount = StackSize;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 72 * StackSize);
}
