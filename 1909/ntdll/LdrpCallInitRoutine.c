/*
 * XREFs of LdrpCallInitRoutine @ 0x180024FBC
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x18006B220 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006D950 (LdrpProcessDetachNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DA090 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x18007EA24 (LdrpLogError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(__int64 a1, int a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r8
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // r9d
  char v13; // [rsp+48h] [rbp-38h]

  v5 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v6 = 2147353476LL;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v7 = 2147353477LL;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v11 = 2147353477LL;
    if ( (*(_BYTE *)v11 & 0x20) != 0 )
    {
      LOBYTE(v10) = a3;
      LdrpLogEtwEvent(5283, a2, 0, v10, 0LL, 0LL);
    }
  }
  else
  {
    v7 = 2147353477LL;
  }
  v13 = _guard_dispatch_icall_fptr();
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v7 & 0x20) != 0 )
    {
      LOBYTE(v12) = -1;
      LOBYTE(v8) = -1;
      LdrpLogEtwEvent(5270, a2, v8, v12, 0LL, 0LL);
    }
  }
  if ( !v13 && a3 == 1 )
  {
    LOBYTE(v8) = 1;
    LdrpLogError(3221225794LL, 5270LL, v8, 0LL);
  }
  return v13;
}
