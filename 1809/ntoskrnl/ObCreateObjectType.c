/*
 * XREFs of ObCreateObjectType @ 0x1407289C0
 * Callers:
 *     SepTokenInitialization @ 0x1409AE964 (SepTokenInitialization.c)
 *     DbgkpInitializePhase0 @ 0x1409AEA9C (DbgkpInitializePhase0.c)
 *     PspInitializeSiloStructures @ 0x1409B01B8 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x1409B0324 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x1409B0B98 (ExpWin32Initialization.c)
 *     IoCreateObjectTypes @ 0x1409B0D90 (IoCreateObjectTypes.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 *     MiSectionInitialization @ 0x1409BA060 (MiSectionInitialization.c)
 *     MiInitializeSessionIds @ 0x1409BA3DC (MiInitializeSessionIds.c)
 *     EtwpInitializeRegistration @ 0x1409D03BC (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x1409D04A0 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x1409D0554 (EtwpInitializeCoverageSampler.c)
 *     WmipInitializeSecurity @ 0x1409D4198 (WmipInitializeSecurity.c)
 *     PopEtInit @ 0x1409D8A28 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x1409D92E4 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x1409DA2F8 (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x1409DB558 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x1409DD794 (ExpWorkerFactoryInitialization.c)
 *     CmpCreateObjectTypes @ 0x1409DDE78 (CmpCreateObjectTypes.c)
 *     ExpMutantInitialization @ 0x1409DDF6C (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x1409DE2E0 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x1409DE944 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1409DE9DC (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x1407289DC (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
