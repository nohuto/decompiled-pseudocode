/*
 * XREFs of RtlStringCchCopyNW @ 0x1400F5114
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x140289608 (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x14067F7B8 (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     WmipBuildInstanceSet @ 0x140708B88 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x14070D630 (IopErrorLogThread.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     IopLogBlockedDriverEvent @ 0x14081B5F8 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140878C54 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C9124 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1400F516C (RtlStringCopyWorkerW_1.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v4; // r10d

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
LABEL_9:
    *pszDest = 0;
    return v4;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_9;
  }
  return RtlStringCopyWorkerW_1(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
