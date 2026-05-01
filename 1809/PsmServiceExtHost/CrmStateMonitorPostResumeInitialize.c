/*
 * XREFs of CrmStateMonitorPostResumeInitialize @ 0x180045EC8
 * Callers:
 *     CrmStateMonitorInitialize @ 0x180045C48 (CrmStateMonitorInitialize.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

_QWORD *__fastcall CrmStateMonitorPostResumeInitialize(_QWORD *a1)
{
  _QWORD *result; // rax

  memset_0(a1 + 7, 0, 0x88uLL);
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[10] = a1 + 9;
  a1[9] = a1 + 9;
  a1[8] = CrmStateMonitorPostResumeSuspendCallback;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[14] = a1 + 13;
  a1[13] = a1 + 13;
  a1[12] = CrmStateMonitorPostResumeUsageCallback;
  a1[16] = 0LL;
  a1[17] = 0LL;
  result = a1 + 16;
  a1[17] = a1 + 16;
  a1[16] = a1 + 16;
  a1[15] = CrmStateMonitorPostResumeUsageCallback;
  return result;
}
