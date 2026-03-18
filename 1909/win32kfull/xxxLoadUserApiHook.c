/*
 * XREFs of xxxLoadUserApiHook @ 0x1C0054D80
 * Callers:
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C005383C (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx

  v4 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || (unsigned int)PsGetWin32KFilterSet() == 5 )
    return 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  v8 = *(_DWORD *)(v7 + 404);
  if ( _bittest(&v8, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 12) & 0x80u) != 0 )
    v9 = gihmodUserApiHookWOW;
  else
    v9 = gihmodUserApiHook;
  LOBYTE(v4) = xxxLoadHmodIndex(v9) != 0;
  return v4;
}
