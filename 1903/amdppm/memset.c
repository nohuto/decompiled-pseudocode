/*
 * XREFs of memset @ 0x1C000E300
 * Callers:
 *     GetProcessorStatusInfo @ 0x1C0003490 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0003600 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0003800 (GetWmiBiosIdleStateInfo.c)
 *     AcpiEval_OSC @ 0x1C0004BE4 (AcpiEval_OSC.c)
 *     Display_TSS @ 0x1C0005424 (Display_TSS.c)
 *     RegisterKernelIdleStates @ 0x1C0007F30 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00084EC (UpdateKernelPlatformStates.c)
 *     InitLegacyPccInternal @ 0x1C00089AC (InitLegacyPccInternal.c)
 *     PepIdlePrepare @ 0x1C000BAB0 (PepIdlePrepare.c)
 *     PepParkPreference @ 0x1C000CF70 (PepParkPreference.c)
 *     PepParkMask @ 0x1C000D210 (PepParkMask.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001C010 (InitEnergyCountersOnCurrentProcessor.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001C614 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C001C694 (GetRegistryQwordValue.c)
 *     ProcLibTraceControlCallback @ 0x1C001D140 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001DE10 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C001E0CC (ProcLibTraceCoordinatedLpiRundown.c)
 *     WppTraceCallback @ 0x1C001F730 (WppTraceCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C001FB10 (EvtDriverDeviceAdd.c)
 *     RegisterHvCStates @ 0x1C00203FC (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x1C00206A4 (RegisterHvLpiStates.c)
 *     RegisterHvPepContext @ 0x1C00208B0 (RegisterHvPepContext.c)
 *     RegisterHvPerfStates @ 0x1C0020950 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0020EB0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C0021370 (RegisterHvPackage.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0021720 (RegisterHvFeedbackCountersCallback.c)
 *     AcquirePccInterface @ 0x1C0021BA0 (AcquirePccInterface.c)
 *     RegisterSubspace @ 0x1C0021D50 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C0021F74 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C0022560 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C0022BC4 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0022F24 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00232F8 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C002387C (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0023CF0 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0024214 (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C0024878 (AcpiParseLpiObject.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0025070 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseProcessorContainer @ 0x1C00252B4 (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C00262F4 (EnumerateControlMethods.c)
 *     ProcLibDeviceCreate @ 0x1C00265C4 (ProcLibDeviceCreate.c)
 *     RegisterKernelPepIdleStates @ 0x1C00280EC (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002887C (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C0028E88 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0029228 (DeregisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C0029684 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0029F7C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002B860 (RegisterKernelPepPerf.c)
 *     RegisterKernelPackage @ 0x1C002BFC0 (RegisterKernelPackage.c)
 *     InitAcpi1ThrottleStates @ 0x1C002C870 (InitAcpi1ThrottleStates.c)
 *     RegisterXsdDomain @ 0x1C002D414 (RegisterXsdDomain.c)
 *     CpcHighestNotifyWorker @ 0x1C002E008 (CpcHighestNotifyWorker.c)
 *     InitAcpi1CStates @ 0x1C002E40C (InitAcpi1CStates.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F8F0 (ValidatePerfDomainSymmetry.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0030398 (ValidateCoordinatedDependencyOptions.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0030B4C (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C0030FF8 (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C0031140 (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00312A8 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003171C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C00319F0 (PepNotifyReportCStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0031EE0 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0032090 (PepNotifyCoordinatedLpiStates.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00324D8 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0032A80 (RetrieveEfficiencyClassInformation.c)
 *     InitPepPerfStates @ 0x1C0032C74 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003345C (PepNotifyQueryFeedbackCounters.c)
 *     InitPep @ 0x1C0033820 (InitPep.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0034934 (LpiTranslateCoordinatedIdleStates.c)
 *     DriverEntry @ 0x1C003526C (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationParameters @ 0x1C00360F0 (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C0036360 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00365C0 (ReadPowerCurve.c)
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
