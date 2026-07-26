/*
 * XREFs of ndisUpdateAndIndicatePMCapabilities @ 0x1C004BB4C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisOidPrePMHaltOnSuspend @ 0x1C004B060 (ndisOidPrePMHaltOnSuspend.c)
 *     ndisAoAcInitDisconnectedStandby @ 0x1C004FB6C (ndisAoAcInitDisconnectedStandby.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 */

__int64 __fastcall ndisUpdateAndIndicatePMCapabilities(__int64 a1)
{
  _QWORD *PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  if ( PoolWithTag )
  {
    ndisReferenceMiniportNoCheck(a1, 0x10u);
    *PoolWithTag = a1;
    PoolWithTag[1] = ndisQueuedUpdatePMCapabilities;
    ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_(0x78u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    return 3221225626LL;
  }
}
