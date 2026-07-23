/*
 * XREFs of IoSetCompletionRoutineEx @ 0x140131AD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoSetCompletionRoutineEx(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        PIO_COMPLETION_ROUTINE CompletionRoutine,
        PVOID Context,
        BOOLEAN InvokeOnSuccess,
        BOOLEAN InvokeOnError,
        BOOLEAN InvokeOnCancel)
{
  _QWORD *PoolWithTag; // rax
  PVOID v12; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  if ( !InvokeOnError && !InvokeOnCancel && !InvokeOnSuccess )
    return -1073741811;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x73556F49u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  *PoolWithTag = DeviceObject;
  PoolWithTag[2] = CompletionRoutine;
  PoolWithTag[1] = Context;
  *((_BYTE *)PoolWithTag + 24) = InvokeOnError;
  *((_BYTE *)PoolWithTag + 25) = InvokeOnSuccess;
  *((_BYTE *)PoolWithTag + 26) = InvokeOnCancel;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&IopUnloadSafeCompletion;
  CurrentStackLocation[-1].Context = v12;
  CurrentStackLocation[-1].Control = -32;
  return 0;
}
