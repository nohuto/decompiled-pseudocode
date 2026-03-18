/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceStateWorker @ 0x1C02B0460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoSetMonitorDriverInterfaceStateWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  PIRP v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  IRP *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS Status; // edi
  __int64 v21; // r8
  NTSTATUS v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_1C00A2AE0, Executive, 0, 0, 0LL);
    v4 = (PDEVICE_OBJECT *)qword_1C00A2B18;
    if ( (__int64 *)qword_1C00A2B18 == &qword_1C00A2B18 )
    {
      v4 = 0LL;
      byte_1C00A2AD8 = 0;
    }
    else
    {
      if ( *(__int64 **)(qword_1C00A2B18 + 8) != &qword_1C00A2B18
        || (v5 = *(_QWORD *)qword_1C00A2B18, *(_QWORD *)(*(_QWORD *)qword_1C00A2B18 + 8LL) != qword_1C00A2B18) )
      {
        __fastfail(3u);
      }
      qword_1C00A2B18 = *(_QWORD *)qword_1C00A2B18;
      *(_QWORD *)(v5 + 8) = &qword_1C00A2B18;
    }
    KeReleaseMutex(&stru_1C00A2AE0, 0);
    if ( !v4 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4[2]);
    if ( !AttachedDeviceReference )
    {
      v10 = WdLogNewEntry5_WdError(v7, v6, v9);
      *(_QWORD *)(v10 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v10);
      goto LABEL_20;
    }
    v11 = IoBuildDeviceIoControlRequest(
            0x232437u,
            AttachedDeviceReference,
            v4 + 3,
            1u,
            0LL,
            0,
            1u,
            &Object,
            &IoStatusBlock);
    v16 = v11;
    if ( v11 )
    {
      v11->IoStatus.Status = -1073741637;
      KeClearEvent(&Object);
      Status = IofCallDriver(AttachedDeviceReference, v16);
      if ( Status == 259 )
      {
        v22 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v23 = v22;
        if ( v22 )
        {
          v24 = WdLogNewEntry5_WdError(v19, v18, v21);
          *(_QWORD *)(v24 + 24) = v23;
LABEL_18:
          WdLogEvent5_WdError(v24);
          goto LABEL_19;
        }
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v19, v18, v21);
        *(_QWORD *)(v24 + 24) = Status;
        goto LABEL_18;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v17);
    }
LABEL_19:
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_20:
    ObfDereferenceObject(v4[2]);
    ExFreePoolWithTag(v4, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}
