/*
 * XREFs of RIMHidGetCaps @ 0x1C00EFC5C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rdi
  GUID *v11; // rax
  NTSTATUS Status; // ebx
  PIRP v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  IRP *v16; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v18; // rbx
  ULONG_PTR v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 0x70707352u);
  v9 = (__int64)v8;
  if ( !v8 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x20u,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
    return 3221225626LL;
  }
  *v8 = 65576;
  if ( !*(_QWORD *)(a1 + 400) )
  {
    v11 = (GUID *)Win32AllocPoolNonPaged(16LL, 0x70707352u);
    *(_QWORD *)(a1 + 400) = v11;
    if ( !v11 )
      goto LABEL_5;
    *v11 = GUID_HID_INTERFACE_HIDPARSE;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v13 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v16 = v13;
  if ( v13 )
  {
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    v13->RequestorMode = 0;
    v13->IoStatus.Status = -1073741637;
    v18 = CurrentStackLocation - 1;
    if ( !v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
    v18->MinorFunction = 8;
    v19 = *(_QWORD *)(a1 + 400);
    v18->Parameters.CreatePipe.Parameters = 0LL;
    v18->Parameters.WMI.ProviderId = v19;
    v18->Parameters.Create.Options = 65576;
    v18->Parameters.Read.ByteOffset.QuadPart = v9;
    Status = IofCallDriver(a2, v16);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x22u,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        a2);
    }
    else
    {
      v22 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 32);
      if ( !v22 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
        v22 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 32);
      }
      Status = v22(a3, a4);
    }
    goto LABEL_18;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x21u,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
LABEL_5:
  Status = -1073741670;
LABEL_18:
  Win32FreePool(v9);
  return (unsigned int)Status;
}
