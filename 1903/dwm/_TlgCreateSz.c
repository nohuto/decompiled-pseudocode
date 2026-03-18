/*
 * XREFs of _TlgCreateSz @ 0x140008D78
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140008950 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
  pDesc->Reserved = 0;
  if ( !psz )
    psz = (LPCSTR)&word_14000BC26;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)psz;
}
