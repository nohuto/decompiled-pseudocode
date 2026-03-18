/*
 * XREFs of PfTGenerateTrace @ 0x14066D010
 * Callers:
 *     PfTLoggingWorker @ 0x14075FE90 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x14066B1C0 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x14066D060 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140467630;
    qword_1404673C0 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
