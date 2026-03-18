/*
 * XREFs of PsCreateSystemThread @ 0x14066AA90
 * Callers:
 *     SmKmStoreHelperStart @ 0x1400E3A54 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400E3AE0 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x14013C524 (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x140176408 (PopCreatePowerThread.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14017725C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     DisplayBootBitmap @ 0x14018173C (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x14018A590 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x14018AAF8 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x140319E90 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x14056D750 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140933774 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140938034 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x1409C61C4 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x1409D797C (FsRtlInitializeWorkerThread.c)
 *     PopInitializeDirectedDrips @ 0x1409DC6E0 (PopInitializeDirectedDrips.c)
 *     ExpWorkerFactoryInitialization @ 0x1409DD794 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x14066AAE0 (PsCreateSystemThreadEx.c)
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
