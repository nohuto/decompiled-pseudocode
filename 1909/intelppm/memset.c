/*
 * XREFs of memset @ 0x1C00046C0
 * Callers:
 *     InitDevExts @ 0x1C0001C98 (InitDevExts.c)
 *     AcpiEval_OSC @ 0x1C00037A4 (AcpiEval_OSC.c)
 *     RegisterKernelIdleStates @ 0x1C0003A60 (RegisterKernelIdleStates.c)
 *     ComputeProcessorEnergyMsrEx @ 0x1C0005C80 (ComputeProcessorEnergyMsrEx.c)
 *     GetProcessorStatusInfo @ 0x1C000A840 (GetProcessorStatusInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C000A9B0 (GetWmiBiosIdleStateInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C000AD70 (GetWmiBiosThrottleStateInfo.c)
 *     Display_TSS @ 0x1C000BA74 (Display_TSS.c)
 *     InitLegacyPccInternal @ 0x1C000D63C (InitLegacyPccInternal.c)
 *     UpdateKernelPlatformStates @ 0x1C000DC30 (UpdateKernelPlatformStates.c)
 *     PepIdlePrepare @ 0x1C000EA40 (PepIdlePrepare.c)
 *     PepParkMask @ 0x1C000FE60 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000FFE0 (PepParkPreference.c)
 *     RegisterHvLpiStates @ 0x1C001F008 (RegisterHvLpiStates.c)
 *     RegisterHvPepContext @ 0x1C001F214 (RegisterHvPepContext.c)
 *     PepQueryVetoList @ 0x1C001FADC (PepQueryVetoList.c)
 *     GetRegistryQwordValue @ 0x1C001FB3C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 *     RegisterWmi @ 0x1C001FDB4 (RegisterWmi.c)
 *     InitAcpi1ThrottleStates @ 0x1C00207DC (InitAcpi1ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C002174C (AcquirePccInterface.c)
 *     AcpiEval_PSD_TSD @ 0x1C00218D8 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C0021B3C (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0021CA4 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C00220E0 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00223D0 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0022790 (AcpiEval_TSS.c)
 *     RegisterXsdDomain @ 0x1C0022E00 (RegisterXsdDomain.c)
 *     RegisterPepDevice @ 0x1C002326C (RegisterPepDevice.c)
 *     EnumerateControlMethods @ 0x1C0023350 (EnumerateControlMethods.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0023620 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002370C (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00237EC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C0023A18 (InitPerfStatesInternal.c)
 *     EnableEnergyEstimation @ 0x1C0024100 (EnableEnergyEstimation.c)
 *     RegisterKernelIdleDomains @ 0x1C00244DC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0024984 (DeregisterKernelIdleDomains.c)
 *     EvtDriverDeviceAdd @ 0x1C0024B20 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C0024DEC (ProcLibDeviceCreate.c)
 *     InitEnergyCounters @ 0x1C0024F00 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x1C002529C (RetrieveModelParameters.c)
 *     ProcLibTraceControlCallback @ 0x1C00256F0 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C002A828 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C002B958 (ProcLibTraceProcessorLpiRundown.c)
 *     WppTraceCallback @ 0x1C002C410 (WppTraceCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002CAA0 (CpcHighestNotifyWorker.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C002D484 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C002DA8C (ValidateCoordinatedState.c)
 *     GetHvPackage @ 0x1C002E79C (GetHvPackage.c)
 *     RegisterHvCStates @ 0x1C002EB58 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002EEA0 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C002F370 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002F810 (RegisterHvPerfStates.c)
 *     RegisterSubspace @ 0x1C002FF34 (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C0030898 (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0030CAC (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C00310EC (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C00318E4 (AcpiParseProcessorContainer.c)
 *     InitAcpi1CStates @ 0x1C00321B0 (InitAcpi1CStates.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0033AB4 (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C0033F20 (RegisterIdleDomain.c)
 *     RegisterKernelPackage @ 0x1C0034680 (RegisterKernelPackage.c)
 *     RegisterKernelPepIdleStates @ 0x1C0034830 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0034EB0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C003550C (RegisterKernelPlatformStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003605C (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C003636C (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C003651C (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00368D4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0036BA8 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0036FF8 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C003718C (PepQueryName.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0037660 (EnablePerformanceMonitoringCounters.c)
 *     InitPepPerfStates @ 0x1C00377A4 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0037F9C (PepNotifyQueryFeedbackCounters.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003898C (LpiTranslateCoordinatedIdleStates.c)
 *     DriverEntry @ 0x1C003903C (DriverEntry.c)
 *     PopulateEnergyEstimationModel @ 0x1C003953C (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0039628 (ReadEnergyEquation.c)
 *     ProcLibGlobalInit @ 0x1C00396F4 (ProcLibGlobalInit.c)
 *     ReadPowerCurve @ 0x1C0039DB0 (ReadPowerCurve.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
