/*
 * XREFs of KeBugCheck @ 0x1401BBD00
 * Callers:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KiDetachProcess @ 0x1400B9BE0 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9AE0 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x140132600 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x1401739E4 (KiLockServiceTable.c)
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     KxStartSystemThread @ 0x1401C4B20 (KxStartSystemThread.c)
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1405730C4 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x1405733B8 (KeWriteProtectProcessorState.c)
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140732FD0 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x14074C7A0 (Phase1Initialization.c)
 *     EtwDeleteSiloState @ 0x1408BA4E0 (EtwDeleteSiloState.c)
 *     PspInitPhase1 @ 0x1409AC320 (PspInitPhase1.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x1409D81A8 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x1409DC23C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
