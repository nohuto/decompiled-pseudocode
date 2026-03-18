/*
 * XREFs of FCallerOk @ 0x1C0132038
 * Callers:
 *     xxxSetWindowWord @ 0x1C0131ED4 (xxxSetWindowWord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  HANDLE v8; // rax
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v5 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v8 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v5 = gpidLogon;
    if ( v8 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v6 = 0;
  if ( gbEnforceUIPI )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v10 = *(_QWORD *)(gptiCurrent + 416LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
  if ( *(_DWORD *)(v10 + 772) == *(_DWORD *)(v11 + 772) )
    return *(_DWORD *)(v10 + 776) == *(_DWORD *)(v11 + 776);
  return v6;
}
