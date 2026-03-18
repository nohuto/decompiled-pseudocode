/*
 * XREFs of PtrToUlong @ 0x1400ADD50
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall PtrToUlong(const void *p)
{
  return (unsigned int)p;
}
