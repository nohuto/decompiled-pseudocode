/*
 * XREFs of LdrpInitializeThread @ 0x180022CE8
 * Callers:
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     LdrpAllocateTls @ 0x180055E24 (LdrpAllocateTls.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x18006ECE4 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18009D510 (ZwDelayExecution.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrpInitializeThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // r10
  _PEB *ProcessEnvironmentBlock; // rsi
  __int64 v5; // r10
  __int64 result; // rax
  NTSTATUS Tls; // eax
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 i; // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+38h] [rbp-A0h]
  _BYTE v19[56]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+80h] [rbp-58h] BYREF
  int v21; // [rsp+88h] [rbp-50h]
  _BYTE v22[56]; // [rsp+90h] [rbp-48h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+E8h] [rbp+10h] BYREF

  v3 = NtCurrentTeb();
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( UseCOR && (v3->SameTebFlags & 0x400) != 0 )
  {
    a3 = MEMORY[0x7FFE0330];
    a2 = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ MEMORY[0x7FFE0330];
  }
  RtlpInitializeThreadActivationContextStack(v3, a2, a3, a1);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0
    || (result = (__int64)NtCurrentTeb(), (*(_BYTE *)(result + 6126) & 0x20) != 0) )
  {
    result = 0x2000LL;
    if ( (*(_WORD *)(v5 + 6126) & 0x2000) == 0 )
    {
      while ( 1 )
      {
        Tls = LdrpAllocateTls();
        v8 = Tls;
        if ( Tls != -1073741801 )
          break;
        DelayInterval.QuadPart = -3000000LL;
        ZwDelayExecution(0, &DelayInterval);
      }
      if ( Tls < 0 )
      {
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, Tls);
        RtlRaiseStatus(v8);
      }
      LdrpDrainWorkQueue(0LL);
      LdrpAcquireLoaderLock();
      for ( i = qword_1801653D0; (__int64 *)i != &qword_1801653D0; i = *(_QWORD *)i )
      {
        if ( *(int *)(*(_QWORD *)(i + 152) + 56LL) >= 9
          && ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(i + 48) )
        {
          v11 = *(_DWORD *)(i + 104);
          if ( (v11 & 0x40000) == 0 )
          {
            v12 = *(_QWORD *)(i + 56);
            if ( v12 )
            {
              if ( (v11 & 0x80004) == 0x80004 )
              {
                if ( byte_180165408 )
                  goto LABEL_22;
                v17 = 72LL;
                v18 = 1;
                memset(v19, 0, sizeof(v19));
                RtlActivateActivationContextUnsafeFast(&v17, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  LdrpCallTlsInitializers(2LL, i);
                LdrpCallInitRoutine(v12, *(_QWORD *)(i + 48), 2LL);
                RtlDeactivateActivationContextUnsafeFast(&v17);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_180165408 )
      {
        v20 = 72LL;
        v21 = 1;
        memset(v22, 0, sizeof(v22));
        RtlActivateActivationContextUnsafeFast(&v20, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(2LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(&v20);
      }
LABEL_22:
      LdrpReleaseLoaderLock(v9, 21LL);
      return LdrpDropLastInProgressCount(v14, v13, v15, v16);
    }
  }
  return result;
}
