/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1800213E0
 * Callers:
 *     EtwpRegisterProvider @ 0x180020B38 (EtwpRegisterProvider.c)
 *     RtlpLogCapabilityCheckLatency @ 0x18004B4B8 (RtlpLogCapabilityCheckLatency.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x18004CDD4 (LdrpLogCFGModuleInfoTelemetry.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BE4C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryResourcePolicy @ 0x180062630 (RtlQueryResourcePolicy.c)
 *     RtlpHpMetadataHeapStart @ 0x180064718 (RtlpHpMetadataHeapStart.c)
 *     RtlRandomEx @ 0x18007D260 (RtlRandomEx.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007DFE4 (LdrpResReportResourceAccessInternal.c)
 *     RtlSetHeapInformation @ 0x18007E690 (RtlSetHeapInformation.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088F14 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800D1664 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D1770 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800D1A74 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800D1CE8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800D1E18 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800D1F1C (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D1FFC (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D20DC (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180104F0C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180077F50 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180086DEC (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x1800FB3FC (RtlReportCriticalFailure.c)
 */

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  do
  {
    while ( 1 )
    {
      v11 = v4 & 3;
      if ( (v4 & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      v4 = RtlpRunOnceWaitForInit(v4, a1);
    }
    v12 = v4;
    v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
  }
  while ( v4 != v12 );
  if ( !a2(a1, a3, a4) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete(a1, 4LL, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( a4 )
    v13 = *a4;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete(a1, 0LL, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v14, v15, 1LL);
    return (unsigned int)v14;
  }
  return 0;
}
