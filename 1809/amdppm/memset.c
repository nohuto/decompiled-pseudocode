/*
 * XREFs of memset @ 0x1C000CEC0
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001EB0 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00023F0 (UpdateKernelPlatformStates.c)
 *     InitLegacyPccInternal @ 0x1C000287C (InitLegacyPccInternal.c)
 *     GetProcessorStatusInfo @ 0x1C00053D0 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0005530 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0005730 (GetWmiBiosIdleStateInfo.c)
 *     AcpiEval_OSC @ 0x1C00069C0 (AcpiEval_OSC.c)
 *     Display_TSS @ 0x1C00070D8 (Display_TSS.c)
 *     PepParkPreference @ 0x1C00097A0 (PepParkPreference.c)
 *     PepParkMask @ 0x1C0009A10 (PepParkMask.c)
 *     PepIdlePrepare @ 0x1C000A4F0 (PepIdlePrepare.c)
 *     RegisterHvCStates @ 0x1C001A4DC (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C001A770 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001ACA0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C001B110 (RegisterHvPackage.c)
 *     RegisterVmIdleStates @ 0x1C001B368 (RegisterVmIdleStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001B550 (RegisterHvFeedbackCountersCallback.c)
 *     WppTraceCallback @ 0x1C001BAE0 (WppTraceCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C001BEA0 (EvtDriverDeviceAdd.c)
 *     RegisterKernelPepIdleStates @ 0x1C001CA2C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C001D178 (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C001D704 (RegisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C001DE98 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E73C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FF60 (RegisterKernelPepPerf.c)
 *     RegisterKernelPackage @ 0x1C0020660 (RegisterKernelPackage.c)
 *     InitAcpi1ThrottleStates @ 0x1C0020E78 (InitAcpi1ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C00214C0 (AcquirePccInterface.c)
 *     RegisterSubspace @ 0x1C0021724 (RegisterSubspace.c)
 *     RegisterXsdDomain @ 0x1C0021D98 (RegisterXsdDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00220FC (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C002217C (GetRegistryQwordValue.c)
 *     CpcHighestNotifyWorker @ 0x1C00229EC (CpcHighestNotifyWorker.c)
 *     InitAcpi1CStates @ 0x1C0022D90 (InitAcpi1CStates.c)
 *     RegisterWmi @ 0x1C00231A4 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C0023740 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C0023D1C (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C002404C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00243CC (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C00248C4 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0024CD4 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C00251A0 (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C00257C0 (AcpiParseLpiObject.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0025EE0 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseProcessorContainer @ 0x1C0026118 (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C002706C (EnumerateControlMethods.c)
 *     ProcLibDeviceCreate @ 0x1C0027348 (ProcLibDeviceCreate.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0029DE8 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C002A0A0 (ProcLibTraceCoordinatedLpiRundown.c)
 *     InitPep @ 0x1C002B58C (InitPep.c)
 *     InitPepPerfStates @ 0x1C002BD0C (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002C384 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C002C8F8 (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C002CD80 (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C002CEC8 (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002D030 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002D3D4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C002D5FC (PepNotifyReportCStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C002DAE0 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C002DC90 (PepNotifyCoordinatedLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002E834 (LpiTranslateCoordinatedIdleStates.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0030974 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     DriverEntry @ 0x1C0032168 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C003241C (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0032F2C (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C003319C (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00333FC (ReadPowerCurve.c)
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
