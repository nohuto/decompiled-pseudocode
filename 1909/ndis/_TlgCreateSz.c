/*
 * XREFs of _TlgCreateSz @ 0x1C00C9590
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00C9048 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
    psz = File;
  pDesc->Reserved = 0;
  pDesc->Ptr = (unsigned __int64)psz;
  pDesc->Size = v2 + 1;
}
