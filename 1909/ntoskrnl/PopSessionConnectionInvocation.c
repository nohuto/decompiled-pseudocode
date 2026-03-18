/*
 * XREFs of PopSessionConnectionInvocation @ 0x140749CB0
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSessionConnectionInvocation(
        __int64 a1,
        _BYTE *a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_14046BAE0;
  if ( qword_14046BAE0 )
  {
    LOBYTE(a3) = *a2;
    LOBYTE(a2) = a2[1];
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14046BAE0(a1, a2, a3);
  }
  return result;
}
