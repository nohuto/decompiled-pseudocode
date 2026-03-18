/*
 * XREFs of ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C006BE74
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x1C006BE30 (NtUserCreateEmptyCursorObject.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01D699C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _CreateEmptyCursorObject(char a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax

  LOBYTE(a3) = 3;
  v4 = 0LL;
  v7 = HMAllocObject(gptiCurrent, 0LL, a3, 152LL);
  if ( v7 )
  {
    if ( !a1 || (CurrentProcess = PsGetCurrentProcess(v6, v5, v8, v9), v6 = gpepCSRSS, CurrentProcess != gpepCSRSS) )
      v4 = *((_QWORD *)_GetCurrentLogicalCursorThread(v6, v5) + 53);
    *(_QWORD *)(v7 + 24) = v4;
    v4 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 80) = 2048;
    *(_QWORD *)(v7 + 48) = v7;
  }
  return v4;
}
