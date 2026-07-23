/*
 * XREFs of WdiUpdateSem @ 0x14030DF24
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14030DF44 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1408B1E1C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
