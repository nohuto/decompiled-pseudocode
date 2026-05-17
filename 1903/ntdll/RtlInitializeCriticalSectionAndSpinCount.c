/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x180064540
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionAndSpinCount(__int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  bool v5; // zf
  char v6; // al
  __int64 v7; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v9; // rcx
  _BYTE v11[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v12; // [rsp+26h] [rbp-42h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  v3 = 0LL;
  v4 = a2 & 0xFFFFFF;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( v4 )
      v3 = v4;
    else
      v3 = 33556432LL;
  }
  v5 = byte_180163EC0 == 0;
  *(_QWORD *)(a1 + 32) = v3;
  v6 = !v5;
  *(_QWORD *)a1 = -1LL;
  if ( v6 )
  {
    sub_180033A40(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v7 = 2147353474LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v14 = a1;
    v12 = 5923;
    v13 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    ZwTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v11);
  }
  return 0LL;
}
