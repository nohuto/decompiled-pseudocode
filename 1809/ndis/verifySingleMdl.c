/*
 * XREFs of verifySingleMdl @ 0x1C006ADD4
 * Callers:
 *     verifySingleNb @ 0x1C006AE34 (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C006A7C4 (datapathVerifierReportProblem.c)
 */

PVOID __fastcall verifySingleMdl(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  PVOID result; // rax
  unsigned __int64 v5; // rcx

  if ( *(_WORD *)(BugCheckParameter4 + 8) < 0x30u )
    result = (PVOID)datapathVerifierReportProblem(0x60uLL, BugCheckParameter3, BugCheckParameter4);
  v5 = *(_QWORD *)(BugCheckParameter4 + 24);
  if ( v5 || (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
  {
    result = MmSystemRangeStart;
    if ( v5 < (unsigned __int64)MmSystemRangeStart )
      return (PVOID)datapathVerifierReportProblem(0x71uLL, BugCheckParameter3, BugCheckParameter4);
  }
  return result;
}
