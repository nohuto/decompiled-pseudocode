/*
 * XREFs of CrmGlobalsRegistrationsDeleteRoutine @ 0x1800703D4
 * Callers:
 *     CrmGlobalsRegistrationRemoveAll @ 0x1800702C4 (CrmGlobalsRegistrationRemoveAll.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x18007064C (CrmRegistrationCleanup.c)
 */

BOOLEAN __fastcall CrmGlobalsRegistrationsDeleteRoutine(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  CrmRegistrationCleanup(a1 - 32, 0LL);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
