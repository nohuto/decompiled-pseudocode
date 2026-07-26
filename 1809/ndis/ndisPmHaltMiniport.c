/*
 * XREFs of ndisPmHaltMiniport @ 0x1C0119C48
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 * Callees:
 *     NdisResetEvent @ 0x1C0008E20 (NdisResetEvent.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C007D640 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00F2D4C (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisPmHaltMiniport(__int64 BugCheckParameter2)
{
  KIRQL v2; // si
  KSPIN_LOCK *v3; // rcx
  bool v4; // zf
  KIRQL v5; // al
  int v6; // ecx

  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x2Cu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, BugCheckParameter2);
  NdisTraceLoggingDeviceRemoved();
  ndisReferencePackage((__int64)&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 1864) = 1705140;
  NdisResetEvent((PNDIS_EVENT)(BugCheckParameter2 + 3760));
  v3 = (KSPIN_LOCK *)(BugCheckParameter2 + 96);
  v4 = (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
  if ( v4 )
  {
    KeReleaseSpinLock(v3, v2);
    ndisMSetMiniportReadyForBinding(BugCheckParameter2, 0, Reason_MiniportLowPower, RunSynchronous);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    v6 = *(_DWORD *)(BugCheckParameter2 + 120);
    *(_DWORD *)(BugCheckParameter2 + 124) |= 0x4004u;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1864) = 0;
    *(_DWORD *)(BugCheckParameter2 + 120) = v6 & 0x7FFFFFFE | 0x80000000;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v5);
    ndisMCommonHaltMiniport(
      BugCheckParameter2,
      ~(unsigned __int8)(*(_DWORD *)(BugCheckParameter2 + 120) >> 6) & 2 | 0x3C);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 4464), 0x10u);
    ndisMDeregisterBugCheckHandler(BugCheckParameter2);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x2Du, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, BugCheckParameter2);
  }
  else
  {
    KeReleaseSpinLock(v3, v2);
    ndisDereferencePackage((__int64)&ndisPkgs);
  }
}
