/*
 * XREFs of KeBugCheck @ 0x1401C3B00
 * Callers:
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C1880 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x140133530 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x14017A9A0 (KiLockServiceTable.c)
 *     sub_1401AC160 @ 0x1401AC160 (sub_1401AC160.c)
 *     KxStartSystemThread @ 0x1401CB100 (KxStartSystemThread.c)
 *     KeWriteProtectProcessorState @ 0x14059F398 (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1405A2030 (KiSetCacheInformation.c)
 *     PspThreadDelete @ 0x14060F400 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     Phase1Initialization @ 0x1407573D0 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14075D508 (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x1408F5D78 (EtwDeleteSiloState.c)
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     PspInitPhase1 @ 0x1409FE9C4 (PspInitPhase1.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x140A1A268 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A201F4 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
