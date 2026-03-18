/*
 * XREFs of IoInitializeIrp @ 0x1401171C0
 * Callers:
 *     IoInitializeIrpEx @ 0x14016D740 (IoInitializeIrpEx.c)
 *     IopAllocateBackpocketIrp @ 0x140292C10 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140292EF0 (IopAllocateReserveIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14071DD8C (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8400 (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x14096EFF0 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     IovInitializeIrp @ 0x1409633F4 (IovInitializeIrp.c)
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
