/*
 * XREFs of PsCreateSystemThread @ 0x140672580
 * Callers:
 *     SmKmStoreHelperStart @ 0x1400D78A4 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400D7930 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x1400F8BB8 (MiZeroInParallel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14015C500 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopCreatePowerThread @ 0x140180498 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x14018AF08 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1401909A4 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x140190F14 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x140338770 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x14059C990 (PopFlushVolumes.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     MiInitializePartitionThreads @ 0x14088B0E4 (MiInitializePartitionThreads.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 *     VfPendingInitPhase1 @ 0x140972DB8 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x14097D548 (VfPoolInitPhase1.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A0937C (PopDirectedDripsInitializePhase3.c)
 *     SeRmInitPhase1 @ 0x140A18010 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140A1A880 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2084C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
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
