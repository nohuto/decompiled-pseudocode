/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800CE080
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A0D10 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800CD410 (LdrCallEnclave.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwCallEnclave @ 0x18009E060 (ZwCallEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A0D80 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CDC04 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(PENCLAVE_ROUTINE Routine, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 *v6; // rax
  __int64 *v7; // rdi
  unsigned int v8; // ebx

  v6 = LdrpObtainLockedEnclave((unsigned __int64)Routine, 0);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
    LdrpDereferenceEnclave(v7);
    if ( *((_DWORD *)v7 + 14) == 16 )
      return (unsigned int)RtlCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
    else
      return (unsigned int)ZwCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
  }
  else
  {
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(_QWORD))Routine)(*RoutineParamReturn);
  }
  return v8;
}
