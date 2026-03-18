/*
 * XREFs of xxxLoadUserApiHook @ 0x1C00B4030
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 v6; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx

  v4 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || (unsigned int)PsGetWin32KFilterSet() == 5 )
    return 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 416LL);
  v9 = *(_DWORD *)(v8 + 404);
  if ( _bittest(&v9, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v8 + 12) & 0x80u) != 0 )
    v10 = gihmodUserApiHookWOW;
  else
    v10 = gihmodUserApiHook;
  LOBYTE(v4) = xxxLoadHmodIndex(v10, v8, (unsigned int)gihmodUserApiHook, v6) != 0;
  return v4;
}
