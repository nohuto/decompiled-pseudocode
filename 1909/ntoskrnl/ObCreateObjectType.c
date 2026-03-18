/*
 * XREFs of ObCreateObjectType @ 0x14075E2F0
 * Callers:
 *     SepTokenInitialization @ 0x140A0260C (SepTokenInitialization.c)
 *     DbgkpInitializePhase0 @ 0x140A0274C (DbgkpInitializePhase0.c)
 *     PspInitializeSiloStructures @ 0x140A03B50 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140A03CD4 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140A04504 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140A04844 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 *     CmpCreateObjectTypes @ 0x140A0B238 (CmpCreateObjectTypes.c)
 *     EtwpInitializeRegistration @ 0x140A15944 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A15A30 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140A162B0 (EtwpInitializeCoverageSampler.c)
 *     WmipInitializeSecurity @ 0x140A18DBC (WmipInitializeSecurity.c)
 *     PopEtInit @ 0x140A1BBB4 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140A1C868 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A1DF20 (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140A1E760 (PopPowerRequestInit.c)
 *     MiSectionInitialization @ 0x140A1F1D8 (MiSectionInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2084C (ExpWorkerFactoryInitialization.c)
 *     MiInitializeSessionIds @ 0x140A20D7C (MiInitializeSessionIds.c)
 *     ExpMutantInitialization @ 0x140A21514 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A2180C (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140A21F8C (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A22034 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
