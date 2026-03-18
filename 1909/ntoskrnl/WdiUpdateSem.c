/*
 * XREFs of WdiUpdateSem @ 0x14032B348
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14032B368 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1408ED96C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
