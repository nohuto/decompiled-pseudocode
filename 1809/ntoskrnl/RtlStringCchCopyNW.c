/*
 * XREFs of RtlStringCchCopyNW @ 0x1400F5074
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x140289318 (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x14067E618 (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     WmipBuildInstanceSet @ 0x140707908 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x14070C3B0 (IopErrorLogThread.c)
 *     SdbQueryDataExTagID @ 0x1407229A4 (SdbQueryDataExTagID.c)
 *     IopLogBlockedDriverEvent @ 0x14081A418 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140877A14 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C7E84 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1400F50CC (RtlStringCopyWorkerW_1.c)
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
