/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180035C80
 * Callers:
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18007CFCC @ 0x18007CFCC (sub_18007CFCC.c)
 *     sub_1800CD9D4 @ 0x1800CD9D4 (sub_1800CD9D4.c)
 *     sub_1800CDF80 @ 0x1800CDF80 (sub_1800CDF80.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     RtlTraceDatabaseCreate @ 0x1800FBF70 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  bool v6; // al
  __int64 v7; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v9; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) != 0 )
    return 0LL;
  v5 = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( (a3 & 0x2000000) == 0 && a2 )
      v5 = a2 & 0xFFFFFF;
    else
      v5 = 33556432LL;
  }
  *(_QWORD *)(a1 + 32) = v5 | a3 & 0x9000000;
  v6 = (a3 & 0x10000000) != 0 || byte_180163EC0;
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
    v13 = a1;
    v11 = 5923;
    v12 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9) )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    ZwTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v10);
  }
  return 0LL;
}
