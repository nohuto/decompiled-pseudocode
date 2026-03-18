/*
 * XREFs of UsbhPdoPnp_DeviceUsageNotification @ 0x1C00592E0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C005D0A8 (UsbhRegisterBootDeviceNotification.c)
 *     UsbhUpdateSqmFlags @ 0x1C0077008 (UsbhUpdateSqmFlags.c)
 *     UsbhPdo_IsDeviceExternal @ 0x1C00777B4 (UsbhPdo_IsDeviceExternal.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceUsageNotification(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  _DWORD *v6; // rbx
  unsigned int Options; // r14d
  unsigned __int8 Lock; // r13
  NTSTATUS Status; // esi
  PIRP v10; // rax
  IRP *v11; // r15
  _IO_STACK_LOCATION *v12; // rax
  _IO_STACK_LOCATION *v13; // rcx
  unsigned int Flags; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  char IsDeviceExternal; // [rsp+98h] [rbp+10h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+18h]

  v4 = PdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  IsDeviceExternal = UsbhPdo_IsDeviceExternal(DeviceObject);
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 || !IsDeviceExternal || Options != 1 )
  {
    if ( Options - 1 > 3 )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(*((PDEVICE_OBJECT *)v6 + 148), Irp);
      goto LABEL_34;
    }
LABEL_7:
    DeviceObjecta = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v6 + 148));
    v10 = IoAllocateIrp(DeviceObjecta->StackSize, 0);
    v11 = v10;
    if ( v10 )
    {
      v10->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v12 = v11->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
      v12[-1].Context = &Event;
      v12[-1].Control = -32;
      v13 = v11->Tail.Overlay.CurrentStackLocation;
      v13[-1].MajorFunction = CurrentStackLocation->MajorFunction;
      v13[-1].MinorFunction = CurrentStackLocation->MinorFunction;
      v13[-1].FileObject = CurrentStackLocation->FileObject;
      v13[-1].Parameters.SetLock.Lock = Lock;
      v13[-1].Parameters.Create.Options = Options;
      if ( IofCallDriver(DeviceObjecta, v11) == 259 )
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = v11->IoStatus.Status;
      IoFreeIrp(v11);
      if ( Status >= 0 )
      {
        if ( Options - 1 <= 2 )
        {
          if ( Lock )
            _InterlockedIncrement(v6 + 684);
          else
            _InterlockedDecrement(v6 + 684);
          if ( Options == 2 )
          {
            if ( Lock )
              _InterlockedIncrement(v6 + 700);
            else
              _InterlockedDecrement(v6 + 700);
          }
          Flags = DeviceObject->Flags;
          if ( v6[684] )
            v15 = Flags & 0xFFFFDFFF;
          else
            v15 = Flags | 0x2000;
          DeviceObject->Flags = v15;
        }
        if ( Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock )
          goto LABEL_27;
      }
    }
    else
    {
      Status = -1073741670;
    }
    if ( Options != 4 )
      goto LABEL_32;
LABEL_27:
    if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0 && !*((_BYTE *)v6 + 2740) )
    {
      if ( IsDeviceExternal == 1 )
      {
        v17 = UsbhRegisterBootDeviceNotification(DeviceObject, v16, v6 + 688);
        Log(*((_QWORD *)v6 + 148), 256, 1431454276, v17, (__int64)DeviceObject);
      }
      *((_BYTE *)v6 + 2740) = 1;
    }
    goto LABEL_32;
  }
  if ( *((_BYTE *)v6 + 2740) )
    goto LABEL_7;
  Status = -1073741637;
LABEL_32:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
LABEL_34:
  if ( v6[684] )
  {
    v18 = v6[701];
    if ( (v18 & 0x10) == 0 )
    {
      v6[701] = v18 | 0x10;
      UsbhUpdateSqmFlags(DeviceObject);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
      Status);
  return (unsigned int)Status;
}
