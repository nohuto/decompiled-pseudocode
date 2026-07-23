/*
 * XREFs of sub_180112140 @ 0x180112140
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 */

NTSTATUS __fastcall sub_180112140(void *a1, _QWORD *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 < 0x40 )
    return -1073741789;
  *a2 = 64LL;
  return ZwQueryInformationProcess(a1, ProcessBasicInformation, a2, 0x40u, ReturnLength);
}
