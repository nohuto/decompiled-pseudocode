/*
 * XREFs of _SwapMouseButton @ 0x1C01B90F0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C00AA204 (CheckGrantedAccess.c)
 */

__int64 __fastcall SwapMouseButton(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  __int64 result; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 688), 0x12u);
  v6 = 0;
  if ( !v3 )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL, 0LL, v4, v5);
    return 0LL;
  }
  result = *(unsigned int *)(gpsi + 1988LL);
  *(_DWORD *)(gpsi + 1988LL) = v1;
  if ( v1 != (_DWORD)result )
  {
    LOBYTE(v6) = gbMouseButtonsRecentlySwapped == 0;
    gbMouseButtonsRecentlySwapped = v6;
  }
  return result;
}
