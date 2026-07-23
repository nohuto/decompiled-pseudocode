/*
 * XREFs of sub_180024FBC @ 0x180024FBC
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 *     sub_1800D9FD0 @ 0x1800D9FD0 (sub_1800D9FD0.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

char __fastcall sub_180024FBC(__int64 a1, int a2, int a3)
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
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v6 = 2147353476LL;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v7 = 2147353477LL;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    else
      v11 = 2147353477LL;
    if ( (*(_BYTE *)v11 & 0x20) != 0 )
    {
      LOBYTE(v10) = a3;
      sub_1800CFA48(5283, a2, 0, v10, 0LL, 0LL);
    }
  }
  else
  {
    v7 = 2147353477LL;
  }
  v13 = _guard_dispatch_icall_fptr();
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  if ( *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    if ( (*(_BYTE *)v7 & 0x20) != 0 )
    {
      LOBYTE(v12) = -1;
      LOBYTE(v8) = -1;
      sub_1800CFA48(5270, a2, v8, v12, 0LL, 0LL);
    }
  }
  if ( !v13 && a3 == 1 )
  {
    LOBYTE(v8) = 1;
    sub_18007E384(3221225794LL, 5270LL, v8, 0LL);
  }
  return v13;
}
