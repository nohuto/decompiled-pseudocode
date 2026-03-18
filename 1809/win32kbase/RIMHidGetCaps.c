/*
 * XREFs of RIMHidGetCaps @ 0x1C0051804
 * Callers:
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rdi
  PIRP v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  IRP *v14; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v16; // rbx
  ULONG_PTR v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS Status; // ebx
  __int64 v21; // r8
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  NTSTATUS v23; // eax
  GUID *v25; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 0x70707352u);
  v9 = (__int64)v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 416) )
    {
      v25 = (GUID *)Win32AllocPoolNonPaged(16LL, 0x70707352u);
      *(_QWORD *)(a1 + 416) = v25;
      if ( !v25 )
        goto LABEL_17;
      *v25 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v14 = v10;
    if ( v10 )
    {
      CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
      v10->RequestorMode = 0;
      v10->IoStatus.Status = -1073741637;
      v16 = CurrentStackLocation - 1;
      if ( !v16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
      v16->MinorFunction = 8;
      v17 = *(_QWORD *)(a1 + 416);
      v16->Parameters.CreatePipe.Parameters = 0LL;
      v16->Parameters.WMI.ProviderId = v17;
      v16->Parameters.Create.Options = 65576;
      v16->Parameters.Read.ByteOffset.QuadPart = v9;
      Status = IofCallDriver(a2, v14);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        WPP_RECORDER_SF_q(gRimLog, 3u, 0x14u, 0x25u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a2);
      }
      else
      {
        v22 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 32);
        if ( v22 )
        {
          v23 = v22(a3, a4);
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
          v23 = (*(__int64 (__fastcall **)(__int64, __int64))(v9 + 32))(a3, a4);
        }
        Status = v23;
      }
      goto LABEL_12;
    }
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x24u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
LABEL_17:
    Status = -1073741670;
LABEL_12:
    Win32FreePool(v9);
    return (unsigned int)Status;
  }
  WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x23u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
  return 3221225626LL;
}
