/*
 * XREFs of LdrShutdownProcess @ 0x1800290F0
 * Callers:
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180025CC8 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     EtwEventUnregister @ 0x18004E970 (EtwEventUnregister.c)
 *     RtlProcessFlsData @ 0x180076280 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x180084CDC (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180084DF0 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v4; // r14
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r15
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  int v10; // [rsp+58h] [rbp-B0h]
  _BYTE v11[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-68h] BYREF
  int v13; // [rsp+A8h] [rbp-60h]
  _BYTE v14[56]; // [rsp+B0h] [rbp-58h] BYREF

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_180165408 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6117,
        (unsigned int)"LdrShutdownProcess",
        2,
        "Process 0x%p (%wZ) exiting\n",
        v0->ClientId.UniqueProcess,
        &CommandLine);
    qword_180165410 = (__int64)v0->ClientId.UniqueThread;
    byte_180165408 = 1;
    if ( g_ShimsEnabled )
      _guard_dispatch_icall_fptr();
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v4 = 0;
      v5 = (__int64 *)qword_1801653F8;
      while ( v5 != &qword_1801653F0 )
      {
        v6 = (__int64)(v5 - 4);
        v5 = (__int64 *)v5[1];
        v7 = *(_QWORD *)(v6 + 56);
        if ( v7 && (*(_DWORD *)(v6 + 104) & 0x80000) != 0 )
        {
          v9 = 72LL;
          v10 = 1;
          memset(v11, 0, sizeof(v11));
          RtlActivateActivationContextUnsafeFast((__int64)&v9, *(_QWORD *)(v6 + 136));
          if ( *(_WORD *)(v6 + 110) && v0->ThreadLocalStoragePointer )
            LdrpCallTlsInitializers(0, v6);
          LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v9);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v12 = 72LL;
        v13 = 1;
        memset(v14, 0, sizeof(v14));
        RtlActivateActivationContextUnsafeFast((__int64)&v12, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v12);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( NtCurrentPeb()->ProcessHeap && VSMEnclaveProvidersRegistered )
    {
      EtwEventUnregister(RegHandle);
      RegHandle = 0LL;
      dword_18015F590 = 0;
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
