/*
 * XREFs of UsbhQueryParentHubConfig @ 0x1C001F44C
 * Callers:
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhFreeDeviceConfigInfo @ 0x1C001F598 (UsbhFreeDeviceConfigInfo.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhPropagateUxdState @ 0x1C005EB38 (UsbhPropagateUxdState.c)
 */

__int64 __fastcall UsbhQueryParentHubConfig(__int64 a1)
{
  PDEVICE_OBJECT *v2; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rbx
  PIRP v5; // rax
  NTSTATUS v6; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v2 = (PDEVICE_OBJECT *)FdoExt(a1);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xCCuLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag + 2, 0, 0xC4uLL);
  *v4 = 1;
  v4[1] = 204;
  v5 = IoBuildDeviceIoControlRequest(0x22044Fu, v2[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v5 )
  {
    ExFreePoolWithTag(v4, 0);
    return 3221225626LL;
  }
  v5->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4;
  v6 = IofCallDriver(v2[151], v5);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = 0;
  }
  if ( v6 >= 0 && IoStatusBlock.Status >= 0 && (v4[33] & 1) != 0 )
    UsbhPropagateUxdState(a1, v4 + 34);
  UsbhFreeDeviceConfigInfo(v4);
  return (unsigned int)v6;
}
