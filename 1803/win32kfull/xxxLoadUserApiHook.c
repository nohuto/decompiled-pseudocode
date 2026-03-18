/*
 * XREFs of xxxLoadUserApiHook @ 0x1C003B220
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C00D86B0 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || (unsigned int)PsGetWin32KFilterSet() == 5 )
    return 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  v6 = *(_DWORD *)(v5 + 404);
  if ( _bittest(&v6, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 12) & 0x80u) != 0 )
    v7 = (unsigned int)gihmodUserApiHookWOW;
  else
    v7 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v2) = xxxLoadHmodIndex(v7) != 0;
  return v2;
}
