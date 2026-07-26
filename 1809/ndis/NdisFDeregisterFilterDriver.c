/*
 * XREFs of NdisFDeregisterFilterDriver @ 0x1C005A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     ndisCloseRef @ 0x1C00258F8 (ndisCloseRef.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00CD980 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __stdcall NdisFDeregisterFilterDriver(NDIS_HANDLE NdisFilterDriverHandle)
{
  enum CallRunMode v2; // r8d

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x17u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)NdisFilterDriverHandle);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(*((NDIS_BIND_FILTER_DRIVER **)NdisFilterDriverHandle + 43), 0LL, v2);
  if ( ndisCloseRef((PKSPIN_LOCK)NdisFilterDriverHandle + 9) )
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisFilterDriverHandle);
  KeReleaseMutex(&ndisPnPMutex, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x18u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)NdisFilterDriverHandle);
}
