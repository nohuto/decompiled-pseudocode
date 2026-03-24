/*
 * XREFs of PfTGenerateTrace @ 0x140683A70
 * Callers:
 *     PfTLoggingWorker @ 0x14073F930 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x14064B8C0 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x140683AC0 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_14043BE70;
    qword_14043BC00 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
