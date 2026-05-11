/*
 * XREFs of USBHwLogStartFailure @ 0x1C002A740
 * Callers:
 *     USBDeviceStart @ 0x1C0028000 (USBDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_sd @ 0x1C0002AF0 (WPP_RECORDER_SF_sd.c)
 *     memmove @ 0x1C0011080 (memmove.c)
 */

void __fastcall USBHwLogStartFailure(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  unsigned int v4; // ebp
  int v6; // r15d
  __int64 v8; // r12
  _DWORD *PoolWithTag; // rbx
  PIRP v10; // rdi
  int v11; // [rsp+20h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  v4 = a4;
  v6 = a2;
  v8 = (unsigned int)(a4 + 20);
  WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, a4, v11, a3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( (unsigned __int64)(v8 - 4) > 0x1000 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v8, 0x41627845u);
    if ( PoolWithTag )
    {
      v10 = IoBuildDeviceIoControlRequest(
              0x22002Bu,
              *(PDEVICE_OBJECT *)(a1 + 40),
              0LL,
              0,
              0LL,
              0,
              1u,
              &Event,
              &IoStatusBlock);
      if ( v10 )
      {
        *PoolWithTag = v8;
        PoolWithTag[3] = 3;
        PoolWithTag[1] = v6;
        memmove(PoolWithTag + 4, a3, v4);
        v10->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithTag;
        if ( IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), v10) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      ExFreePool(PoolWithTag);
    }
  }
}
