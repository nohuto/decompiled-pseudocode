/*
 * XREFs of WdiDispatchControl @ 0x1407186FC
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     EtwGetProviderIdFromHandle @ 0x14017386C (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x140718980 (WdipStartEndScenario.c)
 */

__int64 __fastcall WdiDispatchControl(unsigned int *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  result = EtwGetProviderIdFromHandle((PVOID *)*a1, 1, &v3);
  if ( (int)result >= 0 )
    return WdipStartEndScenario(&v3, a1 + 6, a1 + 2, a1[10]);
  return result;
}
