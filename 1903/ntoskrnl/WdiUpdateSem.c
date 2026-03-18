/*
 * XREFs of WdiUpdateSem @ 0x14032B8F8
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1408EE05C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
