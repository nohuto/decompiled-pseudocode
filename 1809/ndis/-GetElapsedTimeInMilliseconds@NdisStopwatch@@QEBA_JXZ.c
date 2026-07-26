/*
 * XREFs of ?GetElapsedTimeInMilliseconds@NdisStopwatch@@QEBA_JXZ @ 0x1C001DC58
 * Callers:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C001CDC0 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall NdisStopwatch::GetElapsedTimeInMilliseconds(NdisStopwatch *this)
{
  _LARGE_INTEGER QpFrequency; // r9
  LONGLONG result; // rax
  _LARGE_INTEGER QpcLastStopTime; // rdx

  QpFrequency = this->QpFrequency;
  result = 0LL;
  if ( QpFrequency.QuadPart )
  {
    QpcLastStopTime = this->QpcLastStopTime;
    if ( QpcLastStopTime.QuadPart >= this->QpcStartTime.QuadPart )
      return 1000 * (QpcLastStopTime.QuadPart - this->QpcStartTime.QuadPart) / QpFrequency.QuadPart;
  }
  return result;
}
