/*
 * XREFs of KeBugCheck @ 0x1401C4680
 * Callers:
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400A1700 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     PspSystemThreadStartup @ 0x140134020 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x14017B090 (KiLockServiceTable.c)
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     KxStartSystemThread @ 0x1401CBC80 (KxStartSystemThread.c)
 *     KeWriteProtectProcessorState @ 0x14059F378 (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1405A2010 (KiSetCacheInformation.c)
 *     PspThreadDelete @ 0x140610F10 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140761C88 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x140768980 (Phase1Initialization.c)
 *     EtwDeleteSiloState @ 0x1408F56E8 (EtwDeleteSiloState.c)
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 *     PspInitPhase1 @ 0x1409FEEE0 (PspInitPhase1.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x140A1A3F8 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A203D4 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
