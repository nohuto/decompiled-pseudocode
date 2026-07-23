/*
 * XREFs of LdrShutdownProcess @ 0x18006B220
 * Callers:
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18006B674 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     SbCleanupTrace @ 0x18006B7D0 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x18006B830 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _RTLP_FLS_CONTEXT *v0; // rcx
  struct _TEB *v1; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  struct _RTLP_FLS_DATA *FlsData; // rdx
  char v5; // si
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  struct _PEB *v9; // rax
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-A8h] BYREF
  int v12; // [rsp+58h] [rbp-A0h]
  _BYTE v13[56]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-58h] BYREF
  int v15; // [rsp+A8h] [rbp-50h]
  _BYTE v16[56]; // [rsp+B0h] [rbp-48h] BYREF

  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  if ( !byte_180165408 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6144,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v1->ClientId.UniqueProcess,
        &CommandLine);
    qword_180165410 = (__int64)v1->ClientId.UniqueThread;
    byte_180165408 = 1;
    if ( g_ShimsEnabled )
      _guard_dispatch_icall_fptr();
    FlsData = (struct _RTLP_FLS_DATA *)v1->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(v0, FlsData, 1u);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v5 = 0;
      v6 = (__int64 *)qword_1801653F8;
      while ( v6 != &qword_1801653F0 )
      {
        v7 = (__int64)(v6 - 4);
        v6 = (__int64 *)v6[1];
        v8 = *(_QWORD *)(v7 + 56);
        if ( v8 && (*(_DWORD *)(v7 + 104) & 0x80000) != 0 )
        {
          v11 = 72LL;
          v12 = 1;
          memset(v13, 0, sizeof(v13));
          RtlActivateActivationContextUnsafeFast((__int64)&v11, *(_QWORD *)(v7 + 136));
          if ( *(_WORD *)(v7 + 110) )
            LdrpCallTlsInitializers(0, v7);
          LdrpCallInitRoutine(v8, *(_QWORD *)(v7 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v11);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v14 = 72LL;
        v15 = 1;
        memset(v16, 0, sizeof(v16));
        RtlActivateActivationContextUnsafeFast((__int64)&v14, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
      }
    }
    else
    {
      v5 = 1;
    }
    v9 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v9->ProcessHeap )
    {
      EtwNotificationUnregister(RegHandle, 0LL);
      RegHandle = 0LL;
      dword_18015F4C0 = 0;
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v5 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
