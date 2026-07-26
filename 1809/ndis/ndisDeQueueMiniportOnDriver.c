/*
 * XREFs of ndisDeQueueMiniportOnDriver @ 0x1C01159F0
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00F1380 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00F51C8 (ndisWdfPostReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 */

void __fastcall ndisDeQueueMiniportOnDriver(__int64 a1, __int64 a2)
{
  KIRQL v4; // r8
  __int64 *i; // rdx
  __int64 v6; // rcx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x15u, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 392));
  for ( i = (__int64 *)(a2 + 16); ; i = (__int64 *)(v6 + 8) )
  {
    v6 = *i;
    if ( !*i )
      break;
    if ( v6 == a1 )
    {
      *i = *(_QWORD *)(a1 + 8);
      break;
    }
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 392), v4);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x16u, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1, a2);
}
