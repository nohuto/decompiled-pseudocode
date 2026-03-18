/*
 * XREFs of ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0169AE8
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0169C40 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     RIMExtractPointerPropertyValues @ 0x1C013C920 (RIMExtractPointerPropertyValues.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        int *a7)
{
  unsigned int v8; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 i; // rcx

  v8 = a3;
  if ( *((_QWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    if ( *((_QWORD *)this + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  }
  if ( v8 && v8 <= *((_DWORD *)a2 + 14) )
  {
    for ( i = *((_QWORD *)a2 + 15); i && *(_DWORD *)(i + 4) != v8; i = *(_QWORD *)(i + 24) )
      ;
  }
  else
  {
    i = 0LL;
  }
  if ( i )
    return RIMExtractPointerPropertyValues(
             *((_QWORD *)a2 + 18),
             a4,
             *(_DWORD *)(i + 8),
             *(char **)(i + 16),
             a5,
             (__int64)a6,
             (__int64)a7);
  else
    return 0LL;
}
