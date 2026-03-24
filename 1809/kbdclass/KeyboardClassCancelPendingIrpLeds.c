/*
 * XREFs of KeyboardClassCancelPendingIrpLeds @ 0x1C00047A8
 * Callers:
 *     KeyboardPnP @ 0x1C0001ED0 (KeyboardPnP.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001880 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall KeyboardClassCancelPendingIrpLeds(__int64 a1)
{
  char v1; // di
  IRP *v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+20h] [rbp-28h]

  v1 = 0;
  v3 = (IRP *)_InterlockedExchange64((volatile __int64 *)(a1 + 368), 0LL);
  if ( v3 )
  {
    WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 4u, 0x57u, v5);
    IoCancelIrp(v3);
    v1 = 1;
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 376), 2) == 3 )
    {
      WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 4u, 0x58u, v6);
      IoFreeIrp(v3);
    }
  }
  return v1;
}
