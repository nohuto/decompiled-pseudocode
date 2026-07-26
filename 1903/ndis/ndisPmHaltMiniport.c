/*
 * XREFs of ndisPmHaltMiniport @ 0x1C013B334
 * Callers:
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisResetEvent @ 0x1C00114E0 (NdisResetEvent.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009F8A4 (ndisMDeregisterBugCheckHandler.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00C2854 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisPmHaltMiniport(ULONG_PTR a1)
{
  KIRQL v2; // al
  KIRQL v3; // si
  KSPIN_LOCK *v4; // rcx
  bool v5; // zf
  KIRQL v6; // al
  int v7; // ecx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      44,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a1);
  NdisTraceLoggingDeviceRemoved();
  ndisReferencePackage((__int64)&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v3 = v2;
  NdisResetEvent((PNDIS_EVENT)(a1 + 3728));
  v4 = (KSPIN_LOCK *)(a1 + 96);
  v5 = (*(_DWORD *)(a1 + 124) & 0x4000) == 0;
  *(_QWORD *)(a1 + 520) = 0LL;
  if ( v5 )
  {
    KeReleaseSpinLock(v4, v3);
    ndisMSetMiniportReadyForBinding(a1, 0, Reason_MiniportLowPower, RunSynchronous);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v7 = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 124) |= 0x4004u;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 120) = v7 & 0x7FFFFFFE | 0x80000000;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
    ndisMCommonHaltMiniport(a1, ~(unsigned __int8)(*(_DWORD *)(a1 + 120) >> 6) & 2 | 0x3C);
    _InterlockedOr((volatile signed __int32 *)(a1 + 4424), 0x10u);
    ndisMDeregisterBugCheckHandler(a1);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        45,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        a1);
  }
  else
  {
    KeReleaseSpinLock(v4, v3);
    ndisDereferencePackage((__int64)&ndisPkgs);
  }
}
