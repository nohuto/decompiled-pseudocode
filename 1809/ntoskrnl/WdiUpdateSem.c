/*
 * XREFs of WdiUpdateSem @ 0x14030DC34
 * Callers:
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1408B0BDC (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
