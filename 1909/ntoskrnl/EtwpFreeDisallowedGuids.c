/*
 * XREFs of EtwpFreeDisallowedGuids @ 0x1406ACAF4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeDisallowedGuids(__int64 a1)
{
  if ( *(_WORD *)a1 )
  {
    *(_WORD *)a1 = 0;
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
