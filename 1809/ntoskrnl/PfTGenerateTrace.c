/*
 * XREFs of PfTGenerateTrace @ 0x140684C30
 * Callers:
 *     PfTLoggingWorker @ 0x140740B20 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x14064CA80 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x140684C80 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_14043CF30;
    qword_14043CCC0 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
