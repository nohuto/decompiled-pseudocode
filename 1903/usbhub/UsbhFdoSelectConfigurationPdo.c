/*
 * XREFs of UsbhFdoSelectConfigurationPdo @ 0x1C002A43C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0041E08 (WPP_RECORDER_SF_qd.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoSelectConfigurationPdo(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  PDEVICE_OBJECT *v6; // r13
  __int64 PortData; // rax
  __int64 v8; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  char v11; // cl
  int v12; // eax
  int Length_low; // ebp
  int v14; // eax
  unsigned int v15; // ecx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v18; // edi
  _IO_STACK_LOCATION *v19; // rax
  int v20; // [rsp+48h] [rbp-40h]
  _DWORD *v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+A8h] [rbp+20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      BugCheckParameter3);
  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  v21 = PdoExt(BugCheckParameter3);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((_WORD *)v21 + 714));
  v8 = PortData;
  if ( !PortData )
  {
    v18 = -1073741811;
    goto LABEL_25;
  }
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = SecurityContext[1].SecurityQos;
  if ( SecurityQos )
  {
    v11 = 1;
    if ( BYTE1(SecurityQos->Length) == 2 )
    {
      v12 = v22;
    }
    else
    {
      v11 = 0;
      v12 = -1073737984;
    }
    Length_low = 9;
    if ( LOBYTE(SecurityQos->Length) < 9u )
    {
      v11 = 0;
      v12 = -1073737984;
    }
    if ( v11 )
    {
      v14 = 2 * SecurityQos->ContextTrackingMode;
      *(_DWORD *)(v8 + 432) = v14;
      v15 = v14;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)WPP_GLOBAL_Control,
          0,
          18,
          (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
          BugCheckParameter3,
          v14);
        v15 = *(_DWORD *)(v8 + 432);
      }
      if ( v15 <= *((_DWORD *)v6 + 758) )
        goto LABEL_15;
      HIDWORD(SecurityContext->SecurityQos) = -1073737728;
      _InterlockedExchange((volatile __int32 *)(v8 + 428), 5);
      v18 = -1073741670;
      LOBYTE(v20) = 0;
      UsbhException(
        (int)DeviceObject,
        *((unsigned __int16 *)v21 + 714),
        35,
        (int)SecurityQos,
        9,
        -1073741670,
        HIDWORD(SecurityContext->SecurityQos),
        usbfile_hub_c,
        2573,
        v20);
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) = v12;
      if ( LOBYTE(SecurityQos->Length) < 9u )
        Length_low = LOBYTE(SecurityQos->Length);
      LOBYTE(v20) = 0;
      v18 = -1073741811;
      UsbhException(
        (int)DeviceObject,
        *((unsigned __int16 *)v21 + 714),
        33,
        (int)SecurityQos,
        Length_low,
        -1073741811,
        v12,
        usbfile_hub_c,
        2550,
        v20);
    }
LABEL_25:
    BugCheckParameter4->IoStatus.Status = v18;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v18;
  }
  *(_DWORD *)(PortData + 432) = 0;
LABEL_15:
  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         BugCheckParameter4,
         UsbhSelectConfigOrInterfaceComplete,
         (PVOID)BugCheckParameter3,
         1u,
         1u,
         1u) < 0 )
  {
    v19 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    v19[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v19[-1].Context = (void *)BugCheckParameter3;
    v19[-1].Control = -32;
  }
  return IofCallDriver(v6[152], BugCheckParameter4);
}
