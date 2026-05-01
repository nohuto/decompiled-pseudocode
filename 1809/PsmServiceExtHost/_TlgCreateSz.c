/*
 * XREFs of _TlgCreateSz @ 0x180072C84
 * Callers:
 *     PdcpFireClientCallWatchdog @ 0x180072AD0 (PdcpFireClientCallWatchdog.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180072DB0 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = (LPCSTR)&word_180080BCB;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
