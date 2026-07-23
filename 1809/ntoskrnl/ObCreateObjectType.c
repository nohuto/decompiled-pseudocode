/*
 * XREFs of ObCreateObjectType @ 0x140729BB0
 * Callers:
 *     SepTokenInitialization @ 0x1409AF964 (SepTokenInitialization.c)
 *     DbgkpInitializePhase0 @ 0x1409AFA9C (DbgkpInitializePhase0.c)
 *     PspInitializeSiloStructures @ 0x1409B11B8 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x1409B1324 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x1409B1B98 (ExpWin32Initialization.c)
 *     IoCreateObjectTypes @ 0x1409B1D90 (IoCreateObjectTypes.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     MiSectionInitialization @ 0x1409BB060 (MiSectionInitialization.c)
 *     MiInitializeSessionIds @ 0x1409BB3DC (MiInitializeSessionIds.c)
 *     EtwpInitializeRegistration @ 0x1409D13BC (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x1409D14A0 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x1409D1554 (EtwpInitializeCoverageSampler.c)
 *     WmipInitializeSecurity @ 0x1409D5198 (WmipInitializeSecurity.c)
 *     PopEtInit @ 0x1409D9A28 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x1409DA2E4 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x1409DB2F8 (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x1409DC558 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x1409DE794 (ExpWorkerFactoryInitialization.c)
 *     CmpCreateObjectTypes @ 0x1409DEE78 (CmpCreateObjectTypes.c)
 *     ExpMutantInitialization @ 0x1409DEF6C (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x1409DF2E0 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x1409DF944 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1409DF9DC (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
