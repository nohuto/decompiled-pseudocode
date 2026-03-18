/*
 * XREFs of EtwpCoverageValidateCP @ 0x14012A68C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14012A560 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x14030EF5C (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageRecord @ 0x1406B41FC (EtwpCoverageRecord.c)
 *     EtwpCoverageCheckCP @ 0x1408B68A8 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1408B6C28 (EtwpCoverageResetCP.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x14012A6E4 (TelemetryCoverageValidateName.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012A748 (TelemetryCoverageStringHashInternal.c)
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
