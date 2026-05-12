/*
 * XREFs of RaidAdapterDeviceUsageNotificationIrp @ 0x1C0016E3C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C0016EF0 (RaForwardIrpSynchronous.c)
 */

__int64 __fastcall RaidAdapterDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  volatile signed __int32 *v3; // rbx
  unsigned __int8 Lock; // r14
  signed int v7; // ebp

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  switch ( CurrentStackLocation->Parameters.Create.Options )
  {
    case 1u:
      v3 = (volatile signed __int32 *)(a1 + 92);
      break;
    case 2u:
      v3 = (volatile signed __int32 *)(a1 + 100);
      break;
    case 3u:
      v3 = (volatile signed __int32 *)(a1 + 96);
      break;
  }
  v7 = RaForwardIrpSynchronous(*(_QWORD *)(a1 + 24));
  if ( v7 >= 0 && v3 )
  {
    if ( Lock )
      _InterlockedIncrement(v3);
    else
      _InterlockedDecrement(v3);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  return RaidCompleteRequestEx(a2, 0, v7);
}
