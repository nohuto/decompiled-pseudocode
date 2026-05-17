/*
 * XREFs of RtlInitializeCriticalSection @ 0x1800636A0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  char v4; // al
  __int64 v5; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v7; // rcx
  _BYTE v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  v2 = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
    v2 = 33556432LL;
  v3 = byte_180163EC0 == 0;
  *(_QWORD *)(a1 + 32) = v2;
  v4 = !v3;
  *(_QWORD *)a1 = -1LL;
  if ( v4 )
  {
    sub_180033A40(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v5 = 2147353474LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
  else
    v7 = 2147353474LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v12 = a1;
    v10 = 5923;
    v11 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    ZwTraceEvent(*(unsigned __int8 *)v5, 66562LL, 16LL, v9);
  }
  return 0LL;
}
