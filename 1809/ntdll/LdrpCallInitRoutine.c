/*
 * XREFs of LdrpCallInitRoutine @ 0x180025CC8
 * Callers:
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x180055D48 (LdrpProcessDetachNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x18007168C (LdrpLogError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(__int64 a1, int a2, int a3)
{
  _DWORD *SharedData; // r10
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // r9d
  char v15; // [rsp+48h] [rbp-38h]

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
    v6 = 2147353476LL;
  }
  else
  {
    v6 = 2147353476LL;
    v7 = 2147353476LL;
  }
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = 2147353477LL;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v13 = 2147353477LL;
    if ( (*(_BYTE *)v13 & 0x20) != 0 )
    {
      LOBYTE(v12) = a3;
      LdrpLogEtwEvent(5283, a2, 0, v12, 0LL, 0LL);
    }
  }
  else
  {
    v8 = 2147353477LL;
  }
  v15 = _guard_dispatch_icall_fptr();
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && *v10 )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v8 & 0x20) != 0 )
    {
      LOBYTE(v14) = -1;
      LOBYTE(v9) = -1;
      LdrpLogEtwEvent(5270, a2, v9, v14, 0LL, 0LL);
    }
  }
  if ( !v15 && a3 == 1 )
  {
    LOBYTE(v9) = 1;
    LdrpLogError(3221225794LL, 5270LL, v9, 0LL);
  }
  return v15;
}
