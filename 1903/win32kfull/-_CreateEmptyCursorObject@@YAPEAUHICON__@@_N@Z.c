/*
 * XREFs of ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C002ED14
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x1C002ECD0 (NtUserCreateEmptyCursorObject.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015B8AC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0031B80 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _CreateEmptyCursorObject(char a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9

  LOBYTE(a3) = 3;
  v4 = 0LL;
  v7 = HMAllocObject(gptiCurrent, 0LL, a3);
  if ( v7 )
  {
    if ( !a1 || PsGetCurrentProcess(v6, v5, v8, v9) != gpepCSRSS )
      v4 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 52);
    *(_QWORD *)(v7 + 24) = v4;
    v4 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 80) = 2048;
    *(_QWORD *)(v7 + 48) = v7;
  }
  return v4;
}
