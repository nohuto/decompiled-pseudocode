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

_UNKNOWN **__fastcall LdrShutdownProcess(__int64 a1)
{
  _UNKNOWN **result; // rax
  struct _TEB *v2; // rbx
  struct _PEB *ProcessEnvironmentBlock; // rdi
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rdx
  char v6; // si
  __int64 *v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  struct _PEB *v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  struct _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
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
    if ( (dword_18015FAB0 & 5) != 0 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6141,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v2->ClientId.UniqueProcess,
        &CommandLine);
    qword_180165410 = (__int64)v2->ClientId.UniqueThread;
    byte_180165408 = 1;
    if ( byte_180166014 )
      _guard_dispatch_icall_fptr();
    FlsData = v2->FlsData;
    if ( FlsData )
      sub_18006B424(a1, FlsData, 1LL);
    if ( (dword_180162714 & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (dword_18017A29C & 1) != 0 )
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
            sub_18002507C(0, v8, v10, v11);
          sub_180024FBC(v9, *(_QWORD *)(v8 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
        }
      }
      if ( *(_WORD *)(qword_180164FC8 + 110) )
      {
        v19 = 72LL;
        v20 = 1;
        memset(v21, 0, sizeof(v21));
        RtlActivateActivationContextUnsafeFast((__int64)&v19, *(_QWORD *)(qword_180164FC8 + 136));
        sub_18002507C(0, qword_180164FC8, v13, v14);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v19);
      }
    }
    else
    {
      v6 = 1;
    }
    v12 = NtCurrentPeb();
    if ( byte_1801664D8 && v12->ProcessHeap )
    {
      EtwNotificationUnregister(qword_18015F4E0, 0LL);
      qword_18015F4E0 = 0LL;
      dword_18015F4C0 = 0;
      byte_1801664D8 = 0;
    }
    if ( !v6 )
      RtlDetectHeapLeaks();
    return (_UNKNOWN **)sub_18006B580();
  }
  return result;
}
