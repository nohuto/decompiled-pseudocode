/*
 * XREFs of EtwpCoverageValidateCP @ 0x14012BB28
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14015CE30 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x14032C748 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageRecord @ 0x1406D6164 (EtwpCoverageRecord.c)
 *     EtwpCoverageCheckCP @ 0x1408F2B40 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1408F2EC0 (EtwpCoverageResetCP.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x14012BB80 (TelemetryCoverageValidateName.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012BBE4 (TelemetryCoverageStringHashInternal.c)
 */

__int64 __fastcall EtwpCoverageValidateCP(_QWORD *a1, _DWORD *a2)
{
  __int64 v2; // rbx
  int v4; // eax
  __int64 v5; // r11
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = TelemetryCoverageStringHashInternal(*a1, &v7);
  if ( v4 == *(_DWORD *)(v5 + 8) && (unsigned int)TelemetryCoverageValidateName(v2) )
  {
    *a2 = v7;
    return 1LL;
  }
  else
  {
    *(_DWORD *)(v5 + 12) = -1;
    return 0LL;
  }
}
