/*
 * XREFs of NdisLWMStartNetworkInterface @ 0x1C00F1980
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall NdisLWMStartNetworkInterface(int *BugCheckParameter3)
{
  unsigned int v2; // edi
  int started; // eax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x90u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)BugCheckParameter3);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (BugCheckParameter3[30] & 0x100) == 0 )
    ndisBugCheckEx(0x29uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( ndisReferenceMiniport((__int64)BugCheckParameter3) )
  {
    started = ndisStartDeviceSynchronous(BugCheckParameter3);
    v2 = NdisConvertNtStatusToNdisStatus(started);
    if ( !v2 )
      ndisMSetMiniportReadyForBinding((__int64)BugCheckParameter3, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
    ndisDereferenceMiniport((__int64)BugCheckParameter3, 0x69u);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(0x91u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)BugCheckParameter3);
    v2 = -1073676286;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x92u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)BugCheckParameter3, v2);
  return v2;
}
