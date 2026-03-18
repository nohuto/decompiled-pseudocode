/*
 * XREFs of EtwpFreeSoftRestartContext @ 0x1406ACAC4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     EtwpCancelMemoryPreservation @ 0x140906D10 (EtwpCancelMemoryPreservation.c)
 */

void __fastcall EtwpFreeSoftRestartContext(__int64 a1)
{
  UNICODE_STRING *v1; // rdi

  v1 = *(UNICODE_STRING **)(a1 + 1072);
  if ( v1 )
  {
    EtwpCancelMemoryPreservation();
    RtlFreeAnsiString(v1 + 1);
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
}
