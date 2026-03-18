/*
 * XREFs of UsbhFdoPower_WaitWake @ 0x1C0005850
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 */

__int64 __fastcall UsbhFdoPower_WaitWake(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  int v9; // r9d
  _IO_STACK_LOCATION *v10; // rax
  int RemlockSize; // [rsp+20h] [rbp-28h]

  Log((_DWORD)DeviceObject, 16, 1716999979, 0, (__int64)Tag);
  v4 = FdoExt(DeviceObject);
  UsbhEtwLogHubIrpEvent(DeviceObject, Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_DISPATCH, 0, 0);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 1224), Tag, File, 1u, 0x20u);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Tag->IoStatus.Status = v5;
    Log((_DWORD)DeviceObject, 16, 1717000050, v5, (__int64)Tag);
    UsbhEtwLogHubIrpEvent(DeviceObject, Tag, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, v5);
    IofCompleteRequest(Tag, 0);
    return v5;
  }
  else
  {
    *(_QWORD *)(v4 + 4888) = Tag;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4884), 4, 2) == 3 )
    {
      *(_DWORD *)(v4 + 4884) = 7;
      Log((_DWORD)DeviceObject, 16, 1716999985, 0, (__int64)Tag);
      UsbhEtwLogHubIrpEvent(
        DeviceObject,
        Tag,
        0LL,
        &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE,
        v9 & RemlockSize,
        -1073741536);
      Tag->IoStatus.Status = -1073741536;
      IofCompleteRequest(Tag, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 1224), Tag, 0x20u);
      return 3221225760LL;
    }
    else
    {
      Tag->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(DeviceObject, Tag, UsbhFdoWaitWake_IoCompletion, 0LL, 1u, 1u, 1u) < 0 )
      {
        v10 = Tag->Tail.Overlay.CurrentStackLocation;
        v10[-1].Context = 0LL;
        v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoWaitWake_IoCompletion;
        v10[-1].Control = -32;
      }
      Log((_DWORD)DeviceObject, 16, 1716999986, 0, (__int64)Tag);
      v7 = *(struct _DEVICE_OBJECT **)(v4 + 1208);
      *(_DWORD *)(v4 + 2560) &= ~0x20000u;
      PoCallDriver(v7, Tag);
      return 259LL;
    }
  }
}
