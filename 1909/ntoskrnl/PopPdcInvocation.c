/*
 * XREFs of PopPdcInvocation @ 0x140786D50
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopPdcRegister @ 0x140786DA0 (PopPdcRegister.c)
 */

__int64 __fastcall PopPdcInvocation(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  if ( !(_DWORD)v2 )
    return PopPdcRegister(a1, a2, v2, a1);
  if ( (_DWORD)v2 != 1 )
    return 3221225485LL;
  result = 3221225474LL;
  if ( qword_14046BAD0 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_14046BAD0)(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1));
  return result;
}
