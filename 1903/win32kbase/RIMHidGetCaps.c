/*
 * XREFs of RIMHidGetCaps @ 0x1C005497C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  __int64 v10; // rsi
  PIRP v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  IRP *v15; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v17; // rbx
  ULONG_PTR v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  NTSTATUS Status; // ebx
  __int64 v22; // r8
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  NTSTATUS v24; // eax
  GUID *v26; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 1886417746LL);
  v10 = (__int64)v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 416) )
    {
      v26 = (GUID *)Win32AllocPoolNonPaged(16LL, 1886417746LL);
      *(_QWORD *)(a1 + 416) = v26;
      if ( !v26 )
        goto LABEL_18;
      *v26 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v15 = v11;
    if ( v11 )
    {
      v11->RequestorMode = 0;
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      v11->IoStatus.Status = -1073741637;
      v17 = CurrentStackLocation - 1;
      if ( !v17 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      v17->MinorFunction = 8;
      v18 = *(_QWORD *)(a1 + 416);
      v17->Parameters.CreatePipe.Parameters = 0LL;
      v17->Parameters.WMI.ProviderId = v18;
      v17->Parameters.Create.Options = 65576;
      v17->Parameters.Read.ByteOffset.QuadPart = v10;
      Status = IofCallDriver(a2, v15);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 3;
          WPP_RECORDER_SF_q(
            (_DWORD)gRimLog,
            v19,
            1,
            37,
            (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
            (char)a2);
        }
      }
      else
      {
        v23 = *(__int64 (__fastcall **)(__int64, __int64))(v10 + 32);
        if ( v23 )
        {
          v24 = v23(a3, a4);
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
          v24 = (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 32))(a3, a4);
        }
        Status = v24;
      }
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 36, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
    }
LABEL_18:
    Status = -1073741670;
LABEL_12:
    Win32FreePool(v10);
    return (unsigned int)Status;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 35, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
  }
  return 3221225626LL;
}
