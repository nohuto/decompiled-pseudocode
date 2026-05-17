/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800CF7B0
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A4140 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800CEBA0 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A41B0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rax
  unsigned __int64 v6; // r14
  unsigned int v7; // ebx

  v5 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v6 = (unsigned __int64)v5;
  v7 = 0;
  if ( v5 )
  {
    RtlLeaveCriticalSection((__int64)(v5 + 2));
    LdrpDereferenceEnclave(v6);
    return (unsigned int)RtlCallEnclave();
  }
  else
  {
    *a3 = a1(*a3);
  }
  return v7;
}
