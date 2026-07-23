/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x14012A838
 * Callers:
 *     EtwpCoverageValidateCP @ 0x14012A77C (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14030F0A0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageProvEnableCallback @ 0x1406D1880 (EtwpCoverageProvEnableCallback.c)
 *     PsSetProcessFaultInformation @ 0x1406E3040 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1407466B8 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x1408B7CE8 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1408B7EC8 (EtwpCoverageResetCP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageStringHashInternal(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
