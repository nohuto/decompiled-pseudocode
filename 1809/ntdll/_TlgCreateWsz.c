/*
 * XREFs of _TlgCreateWsz @ 0x1800D2490
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18005479C (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007DFF4 (LdrpResReportResourceAccessInternal.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = &word_18011CB50;
  pDesc->Ptr = (unsigned __int64)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
