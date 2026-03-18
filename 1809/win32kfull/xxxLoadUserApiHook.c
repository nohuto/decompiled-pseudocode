/*
 * XREFs of xxxLoadUserApiHook @ 0x1C00B5140
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C00B5F5C (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx

  v4 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || (unsigned int)PsGetWin32KFilterSet(v7, v6, v8) == 5 )
    return 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 424LL);
  v11 = *(_DWORD *)(v10 + 412);
  if ( _bittest(&v11, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v10 + 12) & 0x80u) != 0 )
    v12 = (unsigned int)gihmodUserApiHookWOW;
  else
    v12 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v4) = xxxLoadHmodIndex(v12) != 0;
  return v4;
}
