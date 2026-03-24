/*
 * XREFs of KeBugCheck @ 0x1401BBBA0
 * Callers:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KiDetachProcess @ 0x1400B9CA0 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9A00 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x140132530 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x1401738E4 (KiLockServiceTable.c)
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     KxStartSystemThread @ 0x1401C49C0 (KxStartSystemThread.c)
 *     KiInitializeKernel @ 0x140571310 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1405720C4 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x1405723B8 (KeWriteProtectProcessorState.c)
 *     PspThreadDelete @ 0x1405FB0B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140731DE0 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x14074B5B0 (Phase1Initialization.c)
 *     EtwDeleteSiloState @ 0x1408B9220 (EtwDeleteSiloState.c)
 *     PspInitPhase1 @ 0x1409AB320 (PspInitPhase1.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x1409D71A8 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x1409DB23C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
