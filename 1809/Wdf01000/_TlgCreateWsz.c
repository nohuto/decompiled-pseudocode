/*
 * XREFs of _TlgCreateWsz @ 0x1C004D978
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004DE80 (imp_WdfDriverErrorReportApiMissing.c)
 *     LogDriverInfoStream @ 0x1C006255C (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TlgCreateWsz(_EVENT_DATA_DESCRIPTOR *pDesc, const wchar_t *pwsz)
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
    pwsz = (const wchar_t *)&unk_1C009BDD0;
  pDesc->Ptr = (unsigned __int64)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
