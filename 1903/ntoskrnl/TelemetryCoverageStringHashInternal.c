/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x14012B1C4
 * Callers:
 *     EtwpCoverageValidateCP @ 0x14012B108 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14032CB40 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x14071E780 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageProvEnableCallback @ 0x14072DBD0 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x14075B0D8 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x140782228 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x1408F3374 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1408F3554 (EtwpCoverageResetCP.c)
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
