/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x18007026C
 * Callers:
 *     CrmRegistrationCleanup @ 0x18007064C (CrmRegistrationCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  RtlAcquireSRWLockExclusive(&unk_18009BC58);
  dword_18009BC60 = GetCurrentThreadId();
  RtlRbRemoveNode(&xmmword_18009BC68, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_18009BC60 = 0;
  return RtlReleaseSRWLockExclusive(&unk_18009BC58);
}
