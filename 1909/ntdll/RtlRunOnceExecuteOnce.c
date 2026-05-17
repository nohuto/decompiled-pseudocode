/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x18000AFD0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     RtlpLogCapabilityCheckLatency @ 0x180009B8C (RtlpLogCapabilityCheckLatency.c)
 *     RtlRandomEx @ 0x180009C90 (RtlRandomEx.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180009D9C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     LdrpResReportResourceAccessInternal @ 0x18000A590 (LdrpResReportResourceAccessInternal.c)
 *     EtwpRegisterProvider @ 0x18000A68C (EtwpRegisterProvider.c)
 *     RtlpHpMetadataHeapStart @ 0x18004D09C (RtlpHpMetadataHeapStart.c)
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x180084294 (LdrpLogCFGModuleInfoTelemetry.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180085658 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CFE34 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CFF40 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800D0244 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800D04B8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800D05E8 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800D06EC (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D07CC (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D08AC (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x1801025FC (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18000B240 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180083744 (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x1800F906C (RtlReportCriticalFailure.c)
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
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v4 & 3;
        if ( (v4 & 3) != 0 )
          break;
        v12 = v4;
        v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
        if ( v4 == v12 )
        {
          if ( a2(a1, a3, a4) )
          {
            v13 = RtlRunOnceComplete(a1, 0LL);
            if ( v13 >= 0 )
              return 0;
            v14[0] = 1;
          }
          else
          {
            v9 = -1073741823;
            v13 = RtlRunOnceComplete(a1, 4LL);
            if ( v13 >= 0 )
              return v9;
            v14[0] = 2;
          }
          goto LABEL_17;
        }
      }
      if ( v11 != 1 )
        break;
      v4 = RtlpRunOnceWaitForInit(v4, a1);
    }
    if ( v11 != 3 )
      goto LABEL_2;
    v13 = -1073741584;
    v14[0] = 0;
LABEL_17:
    RtlReportCriticalFailure((unsigned int)v13, v14, 1LL);
    return (unsigned int)v13;
  }
}
