/*
 * XREFs of PopSuspendResumePdc @ 0x1406E2830
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSuspendResumePdc(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_14043FF98;
  if ( qword_14043FF98 )
    return (__int64 (__fastcall *)(_QWORD))qword_14043FF98(a1);
  return result;
}
