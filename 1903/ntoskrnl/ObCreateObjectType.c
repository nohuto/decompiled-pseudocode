/*
 * XREFs of ObCreateObjectType @ 0x140759A60
 * Callers:
 *     SepTokenInitialization @ 0x140A020F0 (SepTokenInitialization.c)
 *     DbgkpInitializePhase0 @ 0x140A02230 (DbgkpInitializePhase0.c)
 *     PspInitializeSiloStructures @ 0x140A03634 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140A037B8 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140A03FE8 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140A04328 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     CmpCreateObjectTypes @ 0x140A0AD0C (CmpCreateObjectTypes.c)
 *     EtwpInitializeRegistration @ 0x140A15764 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A15850 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140A160D0 (EtwpInitializeCoverageSampler.c)
 *     WmipInitializeSecurity @ 0x140A188FC (WmipInitializeSecurity.c)
 *     PopEtInit @ 0x140A1BC38 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140A1C68C (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A1DD44 (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140A1E584 (PopPowerRequestInit.c)
 *     MiSectionInitialization @ 0x140A1EFF8 (MiSectionInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2066C (ExpWorkerFactoryInitialization.c)
 *     MiInitializeSessionIds @ 0x140A20B9C (MiInitializeSessionIds.c)
 *     ExpMutantInitialization @ 0x140A21430 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A21728 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140A21EAC (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A21F54 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
