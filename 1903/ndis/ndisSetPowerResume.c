/*
 * XREFs of ndisSetPowerResume @ 0x1C011C25C
 * Callers:
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetPowerResume(PIRP Irp, __int64 a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v5; // rax

  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    return 0LL;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = Irp->Tail.Overlay.CurrentStackLocation;
  v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetPowerResumeComplete;
  v5[-1].Context = (void *)a3;
  v5[-1].Control = -32;
  IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3840), Irp);
  return 259LL;
}
