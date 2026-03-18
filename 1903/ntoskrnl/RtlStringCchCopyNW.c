/*
 * XREFs of RtlStringCchCopyNW @ 0x140153FE8
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14029F638 (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x14070B3EC (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     WmipBuildInstanceSet @ 0x140732824 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x140737B10 (IopErrorLogThread.c)
 *     IopLogBlockedDriverEvent @ 0x140854334 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408B4AC4 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x140905304 (EtwpCoverageSamplerQuery.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x140154040 (RtlStringCopyWorkerW_3.c)
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
  return RtlStringCopyWorkerW_3(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
