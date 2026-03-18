/*
 * XREFs of _TlgCreateSz @ 0x1C0001008
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C000830C (MicrosoftTelemetryAssertTriggeredWorker.c)
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
    psz = (LPCSTR)&unk_1C004DCB0;
  pDesc->Reserved = 0;
  pDesc->Ptr = (unsigned __int64)psz;
  pDesc->Size = v2 + 1;
}
