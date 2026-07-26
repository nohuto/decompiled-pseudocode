/*
 * XREFs of NdisIfQueryBindingIfIndex @ 0x1C00D13E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BF3E8 (ndisIfQueryBindingMiniportIfIndex.c)
 */

NDIS_STATUS __stdcall NdisIfQueryBindingIfIndex(
        NDIS_HANDLE NdisBindingHandle,
        PNET_IFINDEX pBoundIfIndex,
        PNET_LUID pBoundIfNetLuid,
        PNET_IFINDEX pLowestIfIndex,
        PNET_LUID pLowestIfNetLuid)
{
  __int64 v5; // r14
  NDIS_STATUS BindingMiniportIfIndex; // edi

  v5 = *((_QWORD *)NdisBindingHandle + 2);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x28u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)NdisBindingHandle);
  BindingMiniportIfIndex = ndisIfQueryBindingMiniportIfIndex(
                             v5,
                             pBoundIfIndex,
                             pBoundIfNetLuid,
                             pLowestIfIndex,
                             pLowestIfNetLuid);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x29u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)NdisBindingHandle);
  return BindingMiniportIfIndex;
}
