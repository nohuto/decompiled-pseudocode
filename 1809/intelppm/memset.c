/*
 * XREFs of memset @ 0x1C0004FC0
 * Callers:
 *     AcpiEval_OSC @ 0x1C0001A90 (AcpiEval_OSC.c)
 *     InitDevExts @ 0x1C0003328 (InitDevExts.c)
 *     RegisterKernelIdleStates @ 0x1C00035A0 (RegisterKernelIdleStates.c)
 *     GetProcessorStatusInfo @ 0x1C000A2F0 (GetProcessorStatusInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C000A450 (GetWmiBiosIdleStateInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C000A810 (GetWmiBiosThrottleStateInfo.c)
 *     Display_TSS @ 0x1C000B304 (Display_TSS.c)
 *     InitLegacyPccInternal @ 0x1C000CF5C (InitLegacyPccInternal.c)
 *     UpdateKernelPlatformStates @ 0x1C000D3CC (UpdateKernelPlatformStates.c)
 *     PepIdlePrepare @ 0x1C000DF00 (PepIdlePrepare.c)
 *     PepParkMask @ 0x1C000F2A0 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000F410 (PepParkPreference.c)
 *     PepQueryVetoList @ 0x1C001E414 (PepQueryVetoList.c)
 *     RegisterWmi @ 0x1C001E560 (RegisterWmi.c)
 *     EnumerateControlMethods @ 0x1C001E7F0 (EnumerateControlMethods.c)
 *     RegisterPepDevice @ 0x1C001EC68 (RegisterPepDevice.c)
 *     RegisterXsdDomain @ 0x1C002016C (RegisterXsdDomain.c)
 *     InitAcpi1ThrottleStates @ 0x1C0020BC4 (InitAcpi1ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C0020EF4 (AcquirePccInterface.c)
 *     AcpiEval_PSD_TSD @ 0x1C0021080 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C00212E4 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C002144C (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0021888 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0021B78 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0021F34 (AcpiEval_TSS.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0022300 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPerfStatesInternal @ 0x1C0022910 (InitPerfStatesInternal.c)
 *     EnableEnergyEstimation @ 0x1C00231AC (EnableEnergyEstimation.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0023418 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C0023498 (GetRegistryQwordValue.c)
 *     RegisterKernelIdleDomains @ 0x1C0023B34 (RegisterKernelIdleDomains.c)
 *     EvtDriverDeviceAdd @ 0x1C0024080 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C0024328 (ProcLibDeviceCreate.c)
 *     InitEnergyCounters @ 0x1C0024440 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x1C00247B4 (RetrieveModelParameters.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0028870 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0029980 (ProcLibTraceProcessorLpiRundown.c)
 *     WppTraceCallback @ 0x1C002A410 (WppTraceCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002AA24 (CpcHighestNotifyWorker.c)
 *     GetHvPackage @ 0x1C002C26C (GetHvPackage.c)
 *     RegisterHvCStates @ 0x1C002C5F8 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002C920 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C002CD60 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002D1E0 (RegisterHvPerfStates.c)
 *     RegisterVmIdleStates @ 0x1C002D6BC (RegisterVmIdleStates.c)
 *     RegisterSubspace @ 0x1C002D974 (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C002E250 (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C002E610 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C002EA30 (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C002F150 (AcpiParseProcessorContainer.c)
 *     InitAcpi1CStates @ 0x1C002F994 (InitAcpi1CStates.c)
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00311EC (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C003158C (RegisterIdleDomain.c)
 *     RegisterKernelPackage @ 0x1C0031CB0 (RegisterKernelPackage.c)
 *     RegisterKernelPepIdleStates @ 0x1C0031E60 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C00324B0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0032ABC (RegisterKernelPlatformStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003350C (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C003381C (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00339CC (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0033D84 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0033FAC (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0034330 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C00344BC (PepQueryName.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C00349CC (EnablePerformanceMonitoringCounters.c)
 *     InitPepPerfStates @ 0x1C0034B10 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003515C (PepNotifyQueryFeedbackCounters.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0035A9C (LpiTranslateCoordinatedIdleStates.c)
 *     PopulateEnergyEstimationModel @ 0x1C0036040 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0036130 (ReadEnergyEquation.c)
 *     ProcLibGlobalInit @ 0x1C00361EC (ProcLibGlobalInit.c)
 *     ReadPowerCurve @ 0x1C0036C30 (ReadPowerCurve.c)
 *     DriverEntry @ 0x1C0037274 (DriverEntry.c)
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
