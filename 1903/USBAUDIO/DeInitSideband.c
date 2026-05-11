/*
 * XREFs of DeInitSideband @ 0x1C0007788
 * Callers:
 *     DeviceStart @ 0x1C0020270 (DeviceStart.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0020690 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     DeviceStop @ 0x1C0020900 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0020AD0 (DeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeInitSideband(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  NTSTATUS v7; // [rsp+28h] [rbp-20h]

  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0xEu,
      (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v4 + 856);
  if ( v5 )
  {
    v3 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 712), 0LL, File, 1u, 0x20u);
    if ( v3 >= 0 )
    {
      KeSetEvent((PRKEVENT)(v4 + 824), 0, 0);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v4 + 712), 0LL, 0x20u);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0xFu,
      (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids,
      v7);
  }
  return (unsigned int)v3;
}
