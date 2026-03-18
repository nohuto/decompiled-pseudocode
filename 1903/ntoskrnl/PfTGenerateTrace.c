/*
 * XREFs of PfTGenerateTrace @ 0x14069BEB8
 * Callers:
 *     PfTLoggingWorker @ 0x14075B710 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x1406581A0 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x14069BF00 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140467930;
    qword_1404676C0 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
