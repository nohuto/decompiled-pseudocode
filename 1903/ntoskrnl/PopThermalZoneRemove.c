/*
 * XREFs of PopThermalZoneRemove @ 0x1408A8FB0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x140113F5C (KeDisableTimer2.c)
 *     IoCancelIrp @ 0x1401279E0 (IoCancelIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140167438 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1401675B4 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14018B990 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x1402F7FCC (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x1402FEE40 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1402FF324 (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402FF828 (PopTraceZoneCr3Mitigated.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140727F50 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140746C58 (PopThermalUpdateActiveTimeTracking.c)
 *     PopChangeCapability @ 0x14074968C (PopChangeCapability.c)
 *     PopUpdateOverThrottledCount @ 0x1408A917C (PopUpdateOverThrottledCount.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  __int64 v2; // rdx
  void *v3; // rcx

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 448), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(a1 + 145) )
  {
    PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
    PopTraceThermalZonePassiveHistogram(a1);
  }
  if ( *(_BYTE *)(a1 + 505) )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 69);
    PopThermalUpdateActiveTimeTracking(a1 + 504, v2);
    PopTraceThermalZoneActiveActivity(a1);
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), 0LL);
    PopAcquirePolicyLock();
    --dword_140442A44;
    PopTraceZoneCr3Mitigated(dword_140442A48, a1);
    if ( !dword_140442A44 )
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
    PopChangeCapability((_BYTE *)&PopCapabilities + 13, 0LL);
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(0);
  v3 = *(void **)(a1 + 1048);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
