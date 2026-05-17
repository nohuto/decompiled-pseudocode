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

_UNKNOWN **__fastcall LdrShutdownProcess(struct _RTLP_FLS_CONTEXT *a1)
{
  _UNKNOWN **result; // rax
  struct _TEB *v2; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  struct _RTLP_FLS_DATA *FlsData; // rdx
  char v6; // si
  __int64 *v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  struct _PEB *v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-A8h] BYREF
  int v17; // [rsp+58h] [rbp-A0h]
  _BYTE v18[56]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-58h] BYREF
  int v20; // [rsp+A8h] [rbp-50h]
  _BYTE v21[56]; // [rsp+B0h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = NtCurrentTeb();
  ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
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
        v2->ClientId.UniqueProcess,
        &CommandLine);
    qword_180165410 = (__int64)v2->ClientId.UniqueThread;
    byte_180165408 = 1;
    if ( g_ShimsEnabled )
      _guard_dispatch_icall_fptr();
    FlsData = (struct _RTLP_FLS_DATA *)v2->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(a1, FlsData, 1u);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v6 = 0;
      v7 = (__int64 *)qword_1801653F8;
      while ( v7 != &qword_1801653F0 )
      {
        v8 = (unsigned __int64)(v7 - 4);
        v7 = (__int64 *)v7[1];
        v9 = *(_QWORD *)(v8 + 56);
        if ( v9 && (*(_DWORD *)(v8 + 104) & 0x80000) != 0 )
        {
          v16 = 72LL;
          v17 = 1;
          memset(v18, 0, sizeof(v18));
          RtlActivateActivationContextUnsafeFast((__int64)&v16, *(_QWORD *)(v8 + 136));
          if ( *(_WORD *)(v8 + 110) )
            LdrpCallTlsInitializers(0, v8, v10, v11);
          LdrpCallInitRoutine(v9, *(_QWORD *)(v8 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v19 = 72LL;
        v20 = 1;
        memset(v21, 0, sizeof(v21));
        RtlActivateActivationContextUnsafeFast((__int64)&v19, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry, v13, v14);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v19);
      }
    }
    else
    {
      v6 = 1;
    }
    v12 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v12->ProcessHeap )
    {
      EtwNotificationUnregister(qword_18015F4E0, 0LL);
      qword_18015F4E0 = 0LL;
      dword_18015F4C0 = 0;
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v6 )
      RtlDetectHeapLeaks();
    return (_UNKNOWN **)SbCleanupTrace();
  }
  return result;
}
