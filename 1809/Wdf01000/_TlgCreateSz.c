/*
 * XREFs of _TlgCreateSz @ 0x1C004D940
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004DE80 (imp_WdfDriverErrorReportApiMissing.c)
 *     LogDriverInfoStream @ 0x1C006255C (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TlgCreateSz(_EVENT_DATA_DESCRIPTOR *pDesc, const char *psz)
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
    psz = a5;
  pDesc->Reserved = 0;
  pDesc->Ptr = (unsigned __int64)psz;
  pDesc->Size = v2 + 1;
}
