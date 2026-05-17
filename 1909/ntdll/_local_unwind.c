/*
 * XREFs of _local_unwind @ 0x18008DC10
 * Callers:
 *     EvtIntReportEventWorker @ 0x18005291C (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x18008C8A0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x18001AD60 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
