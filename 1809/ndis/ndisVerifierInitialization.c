/*
 * XREFs of ndisVerifierInitialization @ 0x1C001E69C
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C00B46E4 (ndisQueryStatisticsOids.c)
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     <none>
 */

char ndisVerifierInitialization()
{
  char v0; // bl
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
  {
    ndisVerifierWdmDispatch = (struct _VF_WDM_DISPATCH_TABLE *)VfQueryDispatchTable(0LL, 80LL);
    if ( ndisVerifierWdmDispatch )
    {
      ndisVerifierNdisDispatch = (struct _VF_NDIS_DISPATCH_TABLE *)VfQueryDispatchTable(2LL, 168LL);
      if ( ndisVerifierNdisDispatch )
      {
        ndisVerifierLevel = VerifierFlags;
        if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          ndisVerifierLevel = VerifierFlags | 4;
        if ( MmAddVerifierThunks(&off_1C0086860, 0x190u) >= 0 )
        {
          qword_1C00A2170 = (__int64)&ndisMiniportTrackAllocList;
          ndisMiniportTrackAllocList.Flink = &ndisMiniportTrackAllocList;
          qword_1C00A2180 = (__int64)&ndisDriverTrackAllocList;
          ndisDriverTrackAllocList.Flink = &ndisDriverTrackAllocList;
          KeInitializeSpinLock(&ndisTrackMemLock);
          return 1;
        }
      }
    }
  }
  return v0;
}
