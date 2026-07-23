/*
 * XREFs of RtlStringCchCopyA @ 0x14012A8C4
 * Callers:
 *     EtwpCoverageAddToStringBuffer @ 0x14012A878 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x14030F24C (EtwpCoverageRecordAtHighIrql.c)
 *     AslpFileQueryExportName @ 0x1408EEB34 (AslpFileQueryExportName.c)
 *     EmpParseStrings @ 0x1409BFDC8 (EmpParseStrings.c)
 * Callees:
 *     RtlStringCopyWorkerA_0 @ 0x14012A90C (RtlStringCopyWorkerA_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA_0(pszDest, cchDest, (size_t *)pszSrc, pszSrc, 0x7FFFFFFEuLL);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
