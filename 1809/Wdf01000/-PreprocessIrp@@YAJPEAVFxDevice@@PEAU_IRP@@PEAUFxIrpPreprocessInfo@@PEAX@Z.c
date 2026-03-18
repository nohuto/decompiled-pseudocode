/*
 * XREFs of ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C00543AC
 * Callers:
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C00013C0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C0053C28 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C0054E48 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 */

__int64 __fastcall PreprocessIrp(unsigned __int64 Device, _IRP *Irp, FxIrpPreprocessInfo *Info, void *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int16 v6; // dx
  unsigned __int64 v8; // rcx
  __int64 MajorFunction; // rbp
  unsigned __int8 MinorFunction; // r14
  int (__fastcall *EvtDevicePreprocess)(WDFDEVICE__ *, _IRP *); // rax
  unsigned int v12; // eax
  unsigned int v13; // edi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = *(_WORD *)(Device + 10);
  v8 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
  MajorFunction = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  EvtDevicePreprocess = Info->Dispatch[MajorFunction].EvtDevicePreprocess;
  if ( Info->ClassExtension )
  {
    if ( !v6 )
      v8 = 0LL;
    v12 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, void *))EvtDevicePreprocess)(v8, Irp, DispatchContext);
  }
  else
  {
    if ( !v6 )
      v8 = 0LL;
    v12 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, FxIrpPreprocessInfo *, void *))EvtDevicePreprocess)(
            v8,
            Irp,
            Info,
            DispatchContext);
  }
  v13 = v12;
  if ( FxDevice::_RequiresRemLock(MajorFunction, MinorFunction) == FxDeviceRemLockRequired )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(Device + 144) + 336LL), Irp, 0x20u);
  return v13;
}
