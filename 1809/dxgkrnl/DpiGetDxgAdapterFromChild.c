/*
 * XREFs of DpiGetDxgAdapterFromChild @ 0x1C0262ED0
 * Callers:
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01DCA80 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01DCB50 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapterFromChild(__int64 DeviceObject, _QWORD *a2)
{
  __int64 v3; // rbx
  PIRP v4; // rax
  IRP *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v3 = DeviceObject;
  if ( !DeviceObject || !a2 )
  {
    v9 = WdLogNewEntry5_WdError(DeviceObject);
    v3 = -1073741811LL;
    goto LABEL_17;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, (PDEVICE_OBJECT)v3, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v5 = v4;
  if ( !v4 )
  {
    LODWORD(v3) = -1073741670;
    return (unsigned int)v3;
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 7;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  v5->IoStatus.Status = -1073741637;
  LODWORD(v3) = IofCallDriver((PDEVICE_OBJECT)v3, v5);
  if ( (_DWORD)v3 == 259 )
  {
    v8 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v3 = v8;
    if ( v8 )
    {
      v9 = WdLogNewEntry5_WdError(v7);
LABEL_17:
      *(_QWORD *)(v9 + 24) = v3;
      goto LABEL_18;
    }
    LODWORD(v3) = IoStatusBlock.Status;
  }
  if ( (int)v3 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = (int)v3;
LABEL_18:
    WdLogEvent5_WdError(v9);
    return (unsigned int)v3;
  }
  v10 = *(_QWORD **)(IoStatusBlock.Information + 8);
  ExFreePoolWithTag((PVOID)IoStatusBlock.Information, 0);
  v14 = v10[8];
  if ( v14 && *(_DWORD *)(v14 + 16) == 1953656900 && *(_DWORD *)(v14 + 20) == 5 )
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 64LL) + 3792LL);
    ObfDereferenceObject(v10);
  }
  else
  {
    LODWORD(v3) = -1073741808;
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v10;
    WdLogEvent5_WdWarning(v15);
  }
  return (unsigned int)v3;
}
