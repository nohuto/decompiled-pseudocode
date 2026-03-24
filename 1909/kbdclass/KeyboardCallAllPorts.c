/*
 * XREFs of KeyboardCallAllPorts @ 0x1C0004A90
 * Callers:
 *     KeyboardClassDeviceControl @ 0x1C000D180 (KeyboardClassDeviceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardCallAllPorts(__int64 a1, IRP *a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  __int64 v10; // rdi
  struct _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // ebx
  __int64 result; // rax

  v3 = a3[1];
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  CurrentStackLocation[-1].MajorFunction = 15;
  v7 = a3[1];
  v8 = *a3;
  if ( v7 >= *a3 )
    goto LABEL_15;
  v9 = a3[1];
  do
  {
    if ( LOBYTE(a3[6 * v9 + 6]) && !HIBYTE(a3[6 * v9 + 6]) )
      break;
    a3[1] = ++v9;
    v7 = v9;
  }
  while ( v9 < v8 );
  if ( v7 >= v8 )
  {
LABEL_15:
    if ( a2->PendingReturned )
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 32LL), a2, 0x20u);
    ExFreePoolWithTag(a3, 0);
    return 0LL;
  }
  else
  {
    v10 = *(_QWORD *)&a3[6 * v7 + 4];
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)&a3[6 * v7 + 2];
    ++a3[1];
    v11 = a2->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&KeyboardCallAllPorts;
    v11[-1].Context = a3;
    v11[-1].Control = -32;
    v12 = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 16), a2);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 32), a2, 0x20u);
    result = 3221225494LL;
    if ( !v3 )
      return v12;
  }
  return result;
}
