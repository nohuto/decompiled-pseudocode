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

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx

  v5 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v6 = (__int64)v5;
  v7 = 0;
  if ( v5 )
  {
    RtlLeaveCriticalSection((__int64)(v5 + 2));
    LdrpDereferenceEnclave(v6);
    if ( *(_DWORD *)(v6 + 56) == 16 )
      return (unsigned int)RtlCallEnclave();
    else
      return (unsigned int)ZwCallEnclave();
  }
  else
  {
    *a3 = a1(*a3);
  }
  return v7;
}
