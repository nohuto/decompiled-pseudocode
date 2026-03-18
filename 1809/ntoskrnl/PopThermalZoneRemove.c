/*
 * XREFs of PopThermalZoneRemove @ 0x14086C660
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x1400FB134 (KeDisableTimer2.c)
 *     IoCancelIrp @ 0x140121E10 (IoCancelIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1401425D0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1401863F0 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x1402DC2D8 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x1402E1E54 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1402E2334 (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402E2A04 (PopTraceZoneCr3Mitigated.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1406DCE34 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x14074760C (PopResetCurrentPolicies.c)
 *     PopUpdateOverThrottledCount @ 0x14086C800 (PopUpdateOverThrottledCount.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  void *v2; // rcx

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 448), Executive, 0, 0, 0LL);
  PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
  PopTraceThermalZonePassiveHistogram(a1);
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), 0LL);
    PopAcquirePolicyLock();
    --dword_140417144;
    PopTraceZoneCr3Mitigated(dword_140417148, a1);
    if ( !dword_140417144 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(PopSystemThermalInfo) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(PopSystemThermalInfo) = 0;
      }
    }
    PopReleasePolicyLock();
  }
  if ( *(_BYTE *)(a1 + 73) )
    PopUpdateOverThrottledCount(a1);
  KeDisableTimer2(a1 + 296, 1, 1, 0LL);
  *(_BYTE *)(a1 + 65) |= 0x80u;
  if ( !--PopThermalZoneCount )
  {
    PopAcquirePolicyLock();
    if ( BYTE13(PopCapabilities) )
    {
      BYTE13(PopCapabilities) = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(0);
  v2 = *(void **)(a1 + 864);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
