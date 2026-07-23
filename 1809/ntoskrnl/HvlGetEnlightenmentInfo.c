/*
 * XREFs of HvlGetEnlightenmentInfo @ 0x140273F70
 * Callers:
 *     <none>
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VslGetSecurePciEnabled @ 0x14027B5D0 (VslGetSecurePciEnabled.c)
 */

__int64 __fastcall HvlGetEnlightenmentInfo(_DWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  memset(a1, 0, 0x1E0uLL);
  *a1 = HvlEnlightenments;
  a1[1] = HvlHypervisorConnected != 0;
  a1[7] = HvlLongSpinCountMask;
  if ( (HvlEnlightenments & 0x40) != 0 )
    *((_QWORD *)a1 + 4) = HvlNotifyLongSpinWait;
  if ( (HvlEnlightenments & 0x100) != 0 )
    *((_QWORD *)a1 + 5) = HvlGetReferenceTimeUsingTscPage;
  if ( (HvlEnlightenments & 0x4000) != 0 )
    *((_QWORD *)a1 + 25) = HvlSendSyntheticClusterIpi;
  if ( (HvlEnlightenments & 0x10000) != 0 )
  {
    *((_QWORD *)a1 + 6) = HvlSetSystemSleepProperty;
    *((_QWORD *)a1 + 7) = HvlEnterSleepState;
    *((_QWORD *)a1 + 8) = HvlNotifyDebugDeviceAvailable;
  }
  *((_QWORD *)a1 + 26) = HvlHalVpStartEnabled;
  if ( (HvlEnlightenments & 0x8000) != 0 )
  {
    *((_QWORD *)a1 + 27) = HvlHalStartVirtualProcessor;
    *((_QWORD *)a1 + 28) = HvlHalGetVpIndexFromApicId;
  }
  if ( (HvlEnlightenments & 0x10) != 0 )
  {
    *((_QWORD *)a1 + 1) = HvlEndSystemInterrupt;
    *((_QWORD *)a1 + 2) = HvlWriteApicCommandRegister;
  }
  *((_QWORD *)a1 + 48) = HvlRegisterDeviceId;
  *((_QWORD *)a1 + 49) = HvlUnregisterDeviceId;
  *((_QWORD *)a1 + 50) = HvlDmaAllocateDeviceDomain;
  *((_QWORD *)a1 + 51) = HvlDmaAttachDeviceDomain;
  *((_QWORD *)a1 + 52) = HvlDmaDetachDeviceDomain;
  *((_QWORD *)a1 + 53) = HvlDmaDeleteDeviceDomain;
  *((_QWORD *)a1 + 58) = HvlDmaGetDmaGuardEnabled;
  *((_QWORD *)a1 + 31) = HvlSvmGetSystemCapabilities;
  *((_QWORD *)a1 + 32) = HvlSvmGetDeviceCapabilities;
  *((_QWORD *)a1 + 33) = HvlSvmCreatePasidSpace;
  *((_QWORD *)a1 + 34) = HvlSvmSetPasidAddressSpace;
  *((_QWORD *)a1 + 35) = HvlSvmFlushPasid;
  *((_QWORD *)a1 + 36) = HvlSvmAttachPasidSpace;
  *((_QWORD *)a1 + 37) = HvlSvmDetachPasidSpace;
  *((_QWORD *)a1 + 38) = HvlSvmEnablePasid;
  *((_QWORD *)a1 + 39) = HvlSvmDisablePasid;
  *((_QWORD *)a1 + 40) = HvlSvmAcknowledgePageRequest;
  *((_QWORD *)a1 + 41) = HvlSvmCreatePrQueue;
  *((_QWORD *)a1 + 42) = HvlSvmDeletePrQueue;
  *((_QWORD *)a1 + 43) = HvlSvmClearPrqStalled;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    *((_QWORD *)a1 + 44) = HvlSvmSetDeviceEnabled;
    *((_QWORD *)a1 + 45) = HvlHvDebuggerPowerHandler;
  }
  *((_QWORD *)a1 + 54) = HvlDmaMapDeviceLogicalRange;
  *((_QWORD *)a1 + 55) = HvlDmaUnmapDeviceLogicalRange;
  *((_QWORD *)a1 + 56) = HvlDmaMapDeviceSparsePages;
  *((_QWORD *)a1 + 57) = HvlDmaUnmapDeviceSparsePages;
  if ( (HvlpRootFlags & 0x80u) != 0 )
  {
    *((_QWORD *)a1 + 14) = &HvlQueryAssociatedProcessors;
    *((_QWORD *)a1 + 19) = HvlLpGetMachineCheckContext;
    *((_QWORD *)a1 + 20) = HvlSuspendPartition;
    *((_QWORD *)a1 + 21) = HvlResumePartition;
    *((_QWORD *)a1 + 22) = HvlSetSystemMachineCheckProperty;
    *((_QWORD *)a1 + 23) = HvlInvokeWheaErrorNotificationCallback;
    *((_QWORD *)a1 + 24) = HvlGetProcessorIndexFromVpIndex;
    *((_QWORD *)a1 + 15) = HvlLpReadMultipleMsr;
    *((_QWORD *)a1 + 16) = HvlLpWriteMultipleMsr;
    *((_QWORD *)a1 + 17) = HvlLpReadCpuid;
    *((_QWORD *)a1 + 18) = HvlLpWritebackInvalidate;
  }
  if ( (HvlpRootFlags & 0x100) != 0 )
  {
    *((_QWORD *)a1 + 9) = HvlMapDeviceInterrupt;
    *((_QWORD *)a1 + 10) = HvlUnmapDeviceInterrupt;
    *((_QWORD *)a1 + 11) = HvlRetargetDeviceInterrupt;
  }
  if ( (HvlpRootFlags & 1) != 0 )
  {
    *((_QWORD *)a1 + 12) = HvlSetHpetConfig;
    *((_QWORD *)a1 + 13) = HvlNotifyHpetEnabled;
    *((_QWORD *)a1 + 59) = HvlUpdateMicrocodeDatabase;
    if ( (HvlpRootFlags & 0x200) != 0 )
      *((_QWORD *)a1 + 46) = HvlSetQpcBias;
  }
  result = VslGetNestedPageProtectionFlags();
  if ( (result & 4) != 0 )
  {
    v3 = (unsigned __int64)VslAccessPciDevice & -(__int64)((unsigned __int8)VslGetSecurePciEnabled() != 0);
    result = (__int64)VslIumEfiRuntimeService;
    *((_QWORD *)a1 + 29) = v3;
    *((_QWORD *)a1 + 30) = VslIumEfiRuntimeService;
  }
  if ( (HvlpFlags & 0x4000) != 0 )
  {
    result = (__int64)HvlGetQpcBias;
    *((_QWORD *)a1 + 47) = HvlGetQpcBias;
  }
  return result;
}
