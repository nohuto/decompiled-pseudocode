/*
 * XREFs of FCallerOk @ 0x1C01009BC
 * Callers:
 *     xxxSetWindowLong @ 0x1C01007C4 (xxxSetWindowLong.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C01592BC (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  HANDLE v14; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v4 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v14 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v4 = gpidLogon;
    if ( v14 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v9 = 0;
  if ( (unsigned __int8)Enforced(v4) )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v12 = *(_QWORD *)(gptiCurrent + 416LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
  if ( *(_DWORD *)(v12 + 772) == *(_DWORD *)(v13 + 772) )
    return *(_DWORD *)(v12 + 776) == *(_DWORD *)(v13 + 776);
  return v9;
}
