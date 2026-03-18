/*
 * XREFs of ?_SwapMouseButton@@YAHH@Z @ 0x1C01CC870
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 */

__int64 __fastcall _SwapMouseButton(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 680), 0x12u) )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL, v4, v6, v7);
    return 0LL;
  }
  LOBYTE(v5) = v2 != 0;
  return (unsigned __int8)SetSwapMouseButton(v5);
}
