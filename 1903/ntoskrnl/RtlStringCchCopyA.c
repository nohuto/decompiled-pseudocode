/*
 * XREFs of RtlStringCchCopyA @ 0x14012B250
 * Callers:
 *     EtwpCoverageAddToStringBuffer @ 0x14012B204 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x14032CCF8 (EtwpCoverageRecordAtHighIrql.c)
 *     WheaReportHwErrorDeviceDriver @ 0x140340A70 (WheaReportHwErrorDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x140341124 (WheapCreateRecordFromGenericErrorData.c)
 *     AslpFileQueryExportName @ 0x14092B2AC (AslpFileQueryExportName.c)
 *     EmpParseStrings @ 0x1409FAD14 (EmpParseStrings.c)
 * Callees:
 *     RtlStringCopyWorkerA_0 @ 0x14012B298 (RtlStringCopyWorkerA_0.c)
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
