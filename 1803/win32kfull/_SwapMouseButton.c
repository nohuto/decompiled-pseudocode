/*
 * XREFs of _SwapMouseButton @ 0x1C01980F0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C005E558 (CheckGrantedAccess.c)
 */

__int64 __fastcall SwapMouseButton(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v3; // eax
  int v4; // edx
  __int64 result; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 680), 0x12u);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL, 0LL);
    return 0LL;
  }
  result = *(unsigned int *)(gpsi + 1988LL);
  *(_DWORD *)(gpsi + 1988LL) = v1;
  if ( v1 != (_DWORD)result )
  {
    LOBYTE(v4) = gbMouseButtonsRecentlySwapped == 0;
    gbMouseButtonsRecentlySwapped = v4;
  }
  return result;
}
