/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800CF7B0
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A4160 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800CEBA0 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A41D0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(LPVOID (__cdecl *a1)(LPVOID), ULONG a2, PVOID *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // r14
  unsigned int v8; // ebx

  v6 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
    LdrpDereferenceEnclave(v7);
    return (unsigned int)RtlCallEnclave(a1, 0LL, a2, a3);
  }
  else
  {
    *a3 = (PVOID)((__int64 (__fastcall *)(PVOID))a1)(*a3);
  }
  return v8;
}
