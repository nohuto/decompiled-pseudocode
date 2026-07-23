/*
 * XREFs of RtlUpdateClonedCriticalSection @ 0x18006B360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  CriticalSection->OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
  CriticalSection->LockCount = -2;
  CriticalSection->RecursionCount = 1;
  CriticalSection->LockSemaphore = 0LL;
}
