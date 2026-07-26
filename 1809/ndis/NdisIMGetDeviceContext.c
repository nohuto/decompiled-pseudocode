/*
 * XREFs of NdisIMGetDeviceContext @ 0x1C0115900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

NDIS_HANDLE __stdcall NdisIMGetDeviceContext(NDIS_HANDLE MiniportAdapterHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x2Eu, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qq(
        0x2Fu,
        &WPP_b87f241b44683114d5775ca3de93698d_Traceguids,
        MiniportAdapterHandle,
        *((_QWORD *)MiniportAdapterHandle + 248));
  }
  return (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 248);
}
