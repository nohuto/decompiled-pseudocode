/*
 * XREFs of DpiFdoDetectVgaDeviceInCapabilities @ 0x1C015E3EC
 * Callers:
 *     DpiGetVgaStatus @ 0x1C015E3A4 (DpiGetVgaStatus.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DpiFdoDetectVgaDeviceInCapabilities(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  PIRP v3; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // eax
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v14[16]; // [rsp+70h] [rbp-9h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v3 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v1 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v3 )
  {
    memset(v14, 0, sizeof(v14));
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741637;
    v14[3] = -1;
    v14[2] = -1;
    CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
    v14[0] = 65600;
    CurrentStackLocation[-1].MinorFunction = 9;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v14;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v1 + 152), v3);
    if ( Status == 259 )
    {
      v8 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v8;
      if ( v8 )
      {
        v11 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v11 + 24) = v10;
        WdLogEvent5_WdError(v11);
      }
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 && (v14[1] & 0x400000) != 0 )
      return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v2);
    *(_QWORD *)(v7 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v7);
  }
  return 3221225473LL;
}
