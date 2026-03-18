/*
 * XREFs of DpiGetDeviceInstanceId @ 0x1C0268A28
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0045A40 (DpiMiracastInterfaceChange.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C026ED40 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDeviceInstanceId(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  __int64 v5; // rcx
  IRP *v6; // rdx
  __int64 v7; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v3 = DeviceObject;
  if ( DeviceObject && a2 )
  {
    *a2 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = IoBuildSynchronousFsdRequest(0x1Bu, v3, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v6 = v4;
    if ( !v4 )
    {
      v7 = WdLogNewEntry5_WdLowResource(v5);
      LODWORD(v3) = -1073741670;
      *(_QWORD *)(v7 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v7);
      return (unsigned int)v3;
    }
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 19;
    CurrentStackLocation[-1].Parameters.Read.Length = 3;
    LODWORD(v3) = IofCallDriver(v3, v6);
    if ( (_DWORD)v3 == 259 )
    {
      v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v3 = (struct _DEVICE_OBJECT *)v11;
      if ( v11 )
      {
        v12 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v12 + 24) = v3;
LABEL_9:
        WdLogEvent5_WdError(v12);
        return (unsigned int)v3;
      }
      LODWORD(v3) = IoStatusBlock.Status;
    }
    if ( (int)v3 >= 0 )
    {
      *a2 = IoStatusBlock.Information;
      return (unsigned int)v3;
    }
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = (int)v3;
    goto LABEL_9;
  }
  return 3221225485LL;
}
