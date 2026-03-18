/*
 * XREFs of PtrToUlong @ 0x1400E42A0
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall PtrToUlong(const void *p)
{
  return (unsigned int)p;
}
