/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000AB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  _QWORD *v10; // r8
  _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // rbp
  unsigned __int8 MinorFunction; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(unsigned __int64, _IRP *, _QWORD *); // r11
  _QWORD *v17; // r10
  __int64 v18; // rcx
  NTSTATUS v19; // esi
  unsigned int v21; // r9d
  unsigned int v22; // ecx
  __int16 v23; // dx
  NTSTATUS v24; // eax
  _IO_STACK_LOCATION *v25; // rax
  _IO_STACK_LOCATION *v26; // rax
  unsigned __int64 v27; // rcx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction < 0x16u )
    goto LABEL_2;
  if ( MajorFunction <= 0x17u )
    goto LABEL_20;
  if ( MajorFunction != 27 )
  {
LABEL_2:
    v6 = 3;
    goto LABEL_3;
  }
  if ( CurrentStackLocation->MinorFunction == 2 )
    v6 = 2;
  else
LABEL_20:
    v6 = 1;
LABEL_3:
  v7 = v6 - 1;
  if ( !v7 )
  {
    v19 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v19 >= 0 )
      goto LABEL_7;
    goto LABEL_45;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v19 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v19 >= 0 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
      goto LABEL_7;
    }
    goto LABEL_45;
  }
  if ( v8 != 1 || ((__int64)DeviceObject[1].CurrentIrp & 1) == 0 )
    goto LABEL_7;
  v19 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
  if ( v19 < 0 )
  {
LABEL_45:
    Irp->IoStatus.Status = v19;
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v19;
  }
  v25 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v25[-1].MajorFunction = *(_OWORD *)&v25->MajorFunction;
  *(_OWORD *)&v25[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v25->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v25[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v25->Parameters.SetQuota + 6);
  v25[-1].FileObject = v25->FileObject;
  v25[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         Irp,
         FxDevice::_CompletionRoutineForRemlockMaintenance,
         DeviceObject,
         1u,
         1u,
         1u) < 0 )
  {
    v26 = Irp->Tail.Overlay.CurrentStackLocation;
    v26[-1].CompletionRoutine = FxDevice::_CompletionRoutineForRemlockMaintenance;
    v26[-1].Context = DeviceObject;
    v26[-1].Control = -32;
  }
  --Irp->CurrentLocation;
  --Irp->Tail.Overlay.CurrentStackLocation;
LABEL_7:
  v9 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v10 = *(_QWORD **)(v9 + 368);
  if ( v10 == (_QWORD *)(v9 + 368) )
  {
LABEL_11:
    if ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 27 )
    {
LABEL_14:
      v18 = *(_QWORD *)(v9 + 648);
      if ( !v18 )
LABEL_51:
        v18 = *(_QWORD *)(v9 + 672);
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          v18 = *(_QWORD *)(v9 + 656);
          break;
        case 3u:
        case 4u:
        case 0xEu:
        case 0xFu:
          v18 = *(_QWORD *)(v9 + 640);
          break;
        case 0x16u:
          goto LABEL_14;
        case 0x17u:
          v18 = *(_QWORD *)(v9 + 664);
          break;
        default:
          goto LABEL_51;
      }
    }
    return (unsigned int)(*(__int64 (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v18 + 64LL))(v18, Irp);
  }
  else
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = v11->MajorFunction;
    MinorFunction = v11->MinorFunction;
    v14 = 0LL;
    v15 = 3 * v12;
    while ( 1 )
    {
      v16 = (__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v10[v15 + 2];
      v17 = v10;
      v10 = (_QWORD *)*v10;
      if ( v16 )
        break;
LABEL_10:
      if ( v10 == (_QWORD *)(v9 + 368) )
        goto LABEL_11;
    }
    v21 = v17[v15 + 3];
    if ( v21 )
    {
      v22 = 0;
      while ( *(_BYTE *)(v22 + v17[v15 + 4]) != MinorFunction )
      {
        if ( ++v22 >= v21 )
          goto LABEL_10;
      }
    }
    v23 = *(_WORD *)(v9 + 10);
    if ( *((_BYTE *)v17 + 688) )
    {
      v27 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v23 )
        v27 = 0LL;
      v24 = v16(v27, Irp, v10);
    }
    else
    {
      if ( v23 )
        v14 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v24 = v16(v14, Irp, v10);
    }
    v19 = v24;
    if ( (unsigned __int8)v12 >= 0x16u && ((unsigned __int8)v12 <= 0x17u || (_BYTE)v12 == 27 && MinorFunction != 2) )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v9 + 144) + 336LL), Irp, 0x20u);
  }
  return (unsigned int)v19;
}
