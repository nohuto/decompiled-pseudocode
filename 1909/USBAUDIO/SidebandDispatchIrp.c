/*
 * XREFs of SidebandDispatchIrp @ 0x1C0007B68
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x1C0021210 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SidebandDispatchIrp(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  int v3; // r15d
  unsigned int v5; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PKSDEVICE DeviceForDeviceObject; // rax
  __int64 v8; // rdx
  char *Context; // rbx
  struct _KMUTANT *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  struct _IO_REMOVE_LOCK *v15; // r12
  NTSTATUS v16; // eax
  unsigned int v17; // eax
  unsigned __int16 v18; // r9
  __int64 v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+28h] [rbp-30h]

  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      9u,
      0x13u,
      (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids);
  if ( Irp->RequestorMode )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)Irp,
        9u,
        0x14u,
        (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids);
    v5 = -1073741637;
    goto LABEL_15;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
  if ( !DeviceForDeviceObject )
  {
    v5 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v8,
        9u,
        0x15u,
        (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids,
        -1073741811);
    goto LABEL_15;
  }
  Context = (char *)DeviceForDeviceObject->Context;
  v10 = (struct _KMUTANT *)(Context + 744);
  KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
  v12 = *((_QWORD *)Context + 107);
  if ( v12 )
  {
    if ( CurrentStackLocation->MajorFunction == 2 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v12 + 72LL))(
             *((_QWORD *)Context + 107),
             FunctionalDeviceObject,
             Irp);
      goto LABEL_14;
    }
    v15 = (struct _IO_REMOVE_LOCK *)(Context + 712);
    v16 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 712), 0LL, File, 1u, 0x20u);
    v5 = v16;
    if ( v16 >= 0 )
    {
      if ( CurrentStackLocation->MajorFunction )
      {
        if ( CurrentStackLocation->MajorFunction == 14 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v12 + 88LL))(
                  v12,
                  FunctionalDeviceObject,
                  Irp);
        }
        else
        {
          if ( CurrentStackLocation->MajorFunction != 15 )
          {
            v5 = -1073741811;
LABEL_30:
            IoReleaseRemoveLockEx(v15, 0LL, 0x20u);
            goto LABEL_14;
          }
          v17 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v12 + 96LL))(
                  v12,
                  FunctionalDeviceObject,
                  Irp);
        }
        v3 = 1;
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v12 + 80LL))(
                v12,
                FunctionalDeviceObject,
                Irp);
      }
      v5 = v17;
      goto LABEL_30;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 22;
      v20 = v16;
LABEL_33:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v11,
        9u,
        v18,
        (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids,
        v20);
    }
  }
  else
  {
    v5 = -1073741437;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 23;
      v20 = -1073741437;
      goto LABEL_33;
    }
  }
LABEL_14:
  KeReleaseMutex(v10, 0);
  if ( !v3 )
  {
LABEL_15:
    Irp->IoStatus.Status = v5;
    IofCompleteRequest(Irp, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v5;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      0x18u,
      (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids,
      v19);
  }
  return v5;
}
