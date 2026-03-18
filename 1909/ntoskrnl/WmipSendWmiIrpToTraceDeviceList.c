/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x14071DD8C
 * Callers:
 *     WmiTraceRundownNotify @ 0x14071DCA0 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1408F1184 (WmiSetNetworkNotify.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     IoAllocateIrp @ 0x1400ED860 (IoAllocateIrp.c)
 *     IoInitializeIrp @ 0x1401171C0 (IoInitializeIrp.c)
 *     WmipForwardWmiIrp @ 0x140696C4C (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrpToTraceDeviceList(__int64 a1, unsigned int a2, UCHAR a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  CCHAR StackSize; // di
  CCHAR v10; // r14
  PIRP Irp; // rsi
  USHORT v12; // di

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  StackSize = WmipServiceDeviceObject->StackSize;
  v10 = StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(StackSize + 1, 0);
  if ( Irp )
  {
    if ( (_DWORD)v6 )
    {
      v12 = 72 * StackSize + 280;
      do
      {
        IoInitializeIrp(Irp, v12, v10);
        --Irp->Tail.Overlay.CurrentStackLocation;
        --Irp->CurrentLocation;
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
        Irp->Tail.Overlay.Thread = KeGetCurrentThread();
        WmipForwardWmiIrp(Irp, a3, *(_DWORD *)(*(_QWORD *)a1 + 56LL), 0LL, a4, a5);
        a1 += 16LL;
        --v6;
      }
      while ( v6 );
      v8 = 0;
    }
    IoFreeIrp(Irp);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
