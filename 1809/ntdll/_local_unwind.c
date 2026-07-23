/*
 * XREFs of _local_unwind @ 0x180090C90
 * Callers:
 *     EvtIntReportEventWorker @ 0x18004D38C (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x18008F920 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x180003640 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
