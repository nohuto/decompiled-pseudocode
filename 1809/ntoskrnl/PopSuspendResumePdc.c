/*
 * XREFs of PopSuspendResumePdc @ 0x1406E3AD0
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSuspendResumePdc(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_140441058;
  if ( qword_140441058 )
    return (__int64 (__fastcall *)(_QWORD))qword_140441058(a1);
  return result;
}
