/*
 * XREFs of PopUpdateSingleProcessHeteroPolicies @ 0x1408776A0
 * Callers:
 *     <none>
 * Callees:
 *     PsEnumProcessThreads @ 0x140727C0C (PsEnumProcessThreads.c)
 */

__int64 __fastcall PopUpdateSingleProcessHeteroPolicies(__int64 a1)
{
  PsEnumProcessThreads(a1, (__int64 (__fastcall *)(__int64, _QWORD *, __int64))PopUpdateSingleThreadHeteroPolicies, 0LL);
  return 0LL;
}
