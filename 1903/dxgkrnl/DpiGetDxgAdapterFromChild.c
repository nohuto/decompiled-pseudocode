/*
 * XREFs of DpiGetDxgAdapterFromChild @ 0x1C029C9B8
 * Callers:
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C020AFC0 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C020B090 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapterFromChild(__int64 DeviceObject, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  PIRP v5; // rax
  IRP *v6; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  NTSTATUS v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  v4 = DeviceObject;
  IoStatusBlock.Information = 0LL;
  if ( !DeviceObject || !a2 )
  {
    v12 = WdLogNewEntry5_WdError(DeviceObject, a2, a3);
    v4 = -1073741811LL;
    goto LABEL_17;
  }
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v5 = IoBuildSynchronousFsdRequest(0x1Bu, (PDEVICE_OBJECT)v4, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
  {
    LODWORD(v4) = -1073741670;
    return (unsigned int)v4;
  }
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 7;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  v6->IoStatus.Status = -1073741637;
  LODWORD(v4) = IofCallDriver((PDEVICE_OBJECT)v4, v6);
  if ( (_DWORD)v4 == 259 )
  {
    v11 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v4 = v11;
    if ( v11 )
    {
      v12 = WdLogNewEntry5_WdError(v9, v8, v10);
LABEL_17:
      *(_QWORD *)(v12 + 24) = v4;
      goto LABEL_18;
    }
    LODWORD(v4) = IoStatusBlock.Status;
  }
  if ( (int)v4 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = (int)v4;
LABEL_18:
    WdLogEvent5_WdError(v12);
    return (unsigned int)v4;
  }
  v13 = *(_QWORD **)(IoStatusBlock.Information + 8);
  ExFreePoolWithTag((PVOID)IoStatusBlock.Information, 0);
  v17 = v13[8];
  if ( v17 && *(_DWORD *)(v17 + 16) == 1953656900 && *(_DWORD *)(v17 + 20) == 5 )
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 64LL) + 3896LL);
    ObfDereferenceObject(v13);
  }
  else
  {
    LODWORD(v4) = -1073741808;
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v13;
    WdLogEvent5_WdWarning(v18);
  }
  return (unsigned int)v4;
}
