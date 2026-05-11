/*
 * XREFs of UsbAudioIrpDispatcher @ 0x1C00211F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     IsSidebandIrp @ 0x1C0007904 (IsSidebandIrp.c)
 *     SidebandDispatchIrp @ 0x1C0007B68 (SidebandDispatchIrp.c)
 */

__int64 __fastcall UsbAudioIrpDispatcher(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PKSDEVICE DeviceForDeviceObject; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  char *Context; // rbp
  __int64 v9; // rdx
  unsigned int v11; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
  if ( DeviceForDeviceObject )
  {
    Context = (char *)DeviceForDeviceObject->Context;
    if ( (unsigned int)IsSidebandIrp(FunctionalDeviceObject, (__int64)Irp) )
    {
      return (unsigned int)SidebandDispatchIrp(FunctionalDeviceObject, Irp);
    }
    else
    {
      if ( CurrentStackLocation->MajorFunction == 27 && CurrentStackLocation->MinorFunction == 20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v9,
            9u,
            0x1Fu,
            (__int64)&WPP_eb5248a9c5fb3f92ddde8b69ed047f7b_Traceguids);
        KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
        v11 = *((_DWORD *)Context + 244);
        if ( v11 )
          Irp->IoStatus.Information = LODWORD(Irp->IoStatus.Information) | (unsigned __int64)v11;
        KeReleaseMutex((PRKMUTEX)(Context + 744), 0);
      }
      return (unsigned int)KsDispatchIrp(FunctionalDeviceObject, Irp);
    }
  }
  else
  {
    v7 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        9u,
        0x1Eu,
        (__int64)&WPP_eb5248a9c5fb3f92ddde8b69ed047f7b_Traceguids,
        -1073741811);
  }
  return v7;
}
