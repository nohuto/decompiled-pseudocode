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
 *     RtlProcessFlsData @ 0x180076270 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x180084CCC (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180084DE0 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

void LdrShutdownProcess()
{
  struct _TEB *v0; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v4; // r14
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+58h] [rbp-B0h]
  _BYTE v15[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-68h] BYREF
  int v17; // [rsp+A8h] [rbp-60h]
  _BYTE v18[56]; // [rsp+B0h] [rbp-58h] BYREF

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
          v13 = 72LL;
          v14 = 1;
          memset(v15, 0, sizeof(v15));
          RtlActivateActivationContextUnsafeFast((__int64)&v13, *(_QWORD *)(v6 + 136));
          if ( *(_WORD *)(v6 + 110) && v0->ThreadLocalStoragePointer )
            LdrpCallTlsInitializers(0, v6, v8, v9);
          LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v16 = 72LL;
        v17 = 1;
        memset(v18, 0, sizeof(v18));
        RtlActivateActivationContextUnsafeFast((__int64)&v16, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry, v10, v11);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( NtCurrentPeb()->ProcessHeap && VSMEnclaveProvidersRegistered )
    {
      EtwEventUnregister(qword_18015F5B0);
      qword_18015F5B0 = 0LL;
      dword_18015F590 = 0;
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
