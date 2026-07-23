/*
 * XREFs of PsCreateSystemThread @ 0x14066BC30
 * Callers:
 *     SmKmStoreHelperStart @ 0x1400E3AF4 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400E3B80 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x14013C644 (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x140176528 (PopCreatePowerThread.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14017737C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     DisplayBootBitmap @ 0x14018189C (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x14018A6F0 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x14018AC58 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x14031A180 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x14056E750 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140934774 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140939034 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x1409C71C4 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x1409D897C (FsRtlInitializeWorkerThread.c)
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
 *     ExpWorkerFactoryInitialization @ 0x1409DE794 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
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
