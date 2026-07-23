/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x18002A4D0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpPrepareModuleForExecution @ 0x18002A958 (LdrpPrepareModuleForExecution.c)
 *     LdrpAllocateModuleEntry @ 0x18002AC94 (LdrpAllocateModuleEntry.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     RtlSetEnvironmentVar @ 0x18005CE70 (RtlSetEnvironmentVar.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180077348 (TppCallbackCheckThreadBeforeCallback.c)
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLockedByThread(PRTL_CRITICAL_SECTION CriticalSection)
{
  return CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
