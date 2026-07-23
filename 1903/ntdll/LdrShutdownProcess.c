/*
 * XREFs of LdrShutdownProcess @ 0x18006AFD0
 * Callers:
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     sub_18006B424 @ 0x18006B424 (sub_18006B424.c)
 *     sub_18006B580 @ 0x18006B580 (sub_18006B580.c)
 *     RtlDetectHeapLeaks @ 0x18006B5E0 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  __int64 v0; // rcx
  struct _TEB *v1; // rbx
  PPEB ProcessEnvironmentBlock; // rdi
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rax
  PVOID FlsData; // rdx
  char v5; // si
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  struct _PEB *v9; // rax
  UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
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
      CommandLine.Buffer = (PWCH)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (dword_18015FAB0 & 5) != 0 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6141,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v1->ClientId.UniqueProcess,
        &CommandLine);
    qword_180165410 = (__int64)v1->ClientId.UniqueThread;
    byte_180165408 = 1;
    if ( byte_180166014 )
      _guard_dispatch_icall_fptr();
    FlsData = v1->FlsData;
    if ( FlsData )
      sub_18006B424(v0, FlsData, 1LL);
    if ( (dword_180162714 & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (dword_18017A29C & 1) != 0 )
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
            sub_18002507C(0, v7);
          sub_180024FBC(v8, *(_QWORD *)(v7 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v11);
        }
      }
      if ( *(_WORD *)(qword_180164FC8 + 110) )
      {
        v14 = 72LL;
        v15 = 1;
        memset(v16, 0, sizeof(v16));
        RtlActivateActivationContextUnsafeFast((__int64)&v14, *(_QWORD *)(qword_180164FC8 + 136));
        sub_18002507C(0, qword_180164FC8);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
      }
    }
    else
    {
      v5 = 1;
    }
    v9 = NtCurrentPeb();
    if ( byte_1801664D8 && v9->ProcessHeap )
    {
      EtwNotificationUnregister(qword_18015F4E0, 0LL);
      qword_18015F4E0 = 0LL;
      dword_18015F4C0 = 0;
      byte_1801664D8 = 0;
    }
    if ( !v5 )
      RtlDetectHeapLeaks();
    sub_18006B580();
  }
}
