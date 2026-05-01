/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x18003CD74
 * Callers:
 *     CrmRegistrationCleanup @ 0x18003CCEC (CrmRegistrationCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  RtlAcquireSRWLockExclusive(&unk_1800ABF28);
  dword_1800ABF30 = GetCurrentThreadId();
  RtlRbRemoveNode(&xmmword_1800ABF38, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800ABF30 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800ABF28);
}
