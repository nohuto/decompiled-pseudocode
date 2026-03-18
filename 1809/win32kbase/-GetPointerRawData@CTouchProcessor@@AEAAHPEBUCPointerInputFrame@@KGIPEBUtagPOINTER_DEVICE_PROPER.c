/*
 * XREFs of ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C013D294
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D3F0 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     RIMExtractPointerPropertyValues @ 0x1C0116740 (RIMExtractPointerPropertyValues.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C01342A8 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        int *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 i; // rcx

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  if ( a3 && a3 <= *((_DWORD *)a2 + 14) )
  {
    for ( i = *((_QWORD *)a2 + 12); i && *(_DWORD *)(i + 4) != a3; i = *(_QWORD *)(i + 24) )
      ;
  }
  else
  {
    i = 0LL;
  }
  if ( i )
    return RIMExtractPointerPropertyValues(
             *((_QWORD *)a2 + 15),
             a4,
             *(_DWORD *)(i + 8),
             *(char **)(i + 16),
             a5,
             (__int64)a6,
             (__int64)a7);
  else
    return 0LL;
}
