/*
 * XREFs of PsSetProcessPriorityByClass @ 0x14064CCF0
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x1400D7A5C (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14064CBCC (PspSetProcessForegroundBackgroundRequest.c)
 */

_QWORD *__fastcall PsSetProcessPriorityByClass(__int64 a1, int a2)
{
  if ( a2 == 2 )
    return (_QWORD *)PspSetProcessPriorityByClass(a1, 2);
  else
    return PspSetProcessForegroundBackgroundRequest(a1, a2 == 1, 0);
}
