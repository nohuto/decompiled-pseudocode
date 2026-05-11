/*
 * XREFs of UsbAudioIrpDispatcher @ 0x1C00200F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     IsSidebandIrp @ 0x1C00077C8 (IsSidebandIrp.c)
 *     SidebandDispatchIrp @ 0x1C00079FC (SidebandDispatchIrp.c)
 */

__int64 __fastcall UsbAudioIrpDispatcher(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PKSDEVICE DeviceForDeviceObject; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  char *Context; // rbp
  __int64 v9; // rdx
  __int64 v11; // rax
  int v13; // [rsp+28h] [rbp-10h]

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
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v9,
          9u,
          0x1Fu,
          (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids);
        KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
        v11 = *((unsigned int *)Context + 244);
        if ( (_DWORD)v11 )
          Irp->IoStatus.Information = v11 | LODWORD(Irp->IoStatus.Information);
        KeReleaseMutex((PRKMUTEX)(Context + 744), 0);
      }
      return (unsigned int)KsDispatchIrp(FunctionalDeviceObject, Irp);
    }
  }
  else
  {
    v7 = -1073741811;
    v13 = -1073741811;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      9u,
      0x1Eu,
      (__int64)&WPP_a3347710d2973a45f8be84d1c67ff8d9_Traceguids,
      v13);
  }
  return v7;
}
