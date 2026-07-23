/*
 * XREFs of LdrpObtainLockedEnclave @ 0x1800142E8
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800CECB0 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CED30 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CEE1C (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 *     LdrpIssueEnclaveCall @ 0x1800CF7B0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 */

__int64 *__fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 *i; // rbx
  __int64 *v5; // r8

  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v5 = (__int64 *)LdrpEnclaveList;
    while ( v5 != &LdrpEnclaveList )
    {
      i = v5;
      if ( a2 )
      {
        if ( a1 == v5[8] )
          break;
      }
      else if ( a1 >= v5[8] && a1 - v5[8] < v5[9] )
      {
        break;
      }
      v5 = (__int64 *)*v5;
      i = 0LL;
    }
    if ( i )
      _InterlockedIncrement((volatile signed __int32 *)i + 14);
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    if ( !i )
      return 0LL;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
    if ( i[8] )
      break;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
  }
  return i;
}
