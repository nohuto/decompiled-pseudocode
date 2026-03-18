/*
 * XREFs of PsCreateSystemThread @ 0x1406B3FB0
 * Callers:
 *     SmKmStoreHelperStart @ 0x140106DFC (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140106E88 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x140123178 (MiZeroInParallel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14015BE60 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopCreatePowerThread @ 0x14017FDA8 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x14018A578 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x140190334 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1401908A4 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x140338D10 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x14059D110 (PopFlushVolumes.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     MiInitializePartitionThreads @ 0x14088B8C4 (MiInitializePartitionThreads.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 *     VfPendingInitPhase1 @ 0x140972DB8 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x14097D548 (VfPoolInitPhase1.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A08E50 (PopDirectedDripsInitializePhase3.c)
 *     SeRmInitPhase1 @ 0x140A17B50 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140A1A608 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2066C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406B4000 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext,
           0LL,
           0LL);
}
