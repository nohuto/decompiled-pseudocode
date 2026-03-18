/*
 * XREFs of _CreateEmptyCursorObject @ 0x1C00146DC
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x1C00146A0 (NtUserCreateEmptyCursorObject.c)
 *     _DuplicateCursor @ 0x1C0109EE8 (_DuplicateCursor.c)
 * Callees:
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 */

__int64 __fastcall CreateEmptyCursorObject(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi

  LOBYTE(a3) = 3;
  v4 = 0LL;
  v7 = HMAllocObject(gptiCurrent, 0LL, a3, 152LL);
  if ( v7 )
  {
    if ( !a1 || PsGetCurrentProcess(v6, v5) != gpepCSRSS )
      v4 = *(_QWORD *)(GetCurrentLogicalCursorThread() + 416);
    *(_QWORD *)(v7 + 24) = v4;
    v4 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 80) = 2048;
    *(_QWORD *)(v7 + 48) = v7;
  }
  return v4;
}
