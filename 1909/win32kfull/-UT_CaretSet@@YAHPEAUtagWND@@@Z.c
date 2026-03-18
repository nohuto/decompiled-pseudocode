/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00285A8
 * Callers:
 *     NtUserShowCaret @ 0x1C00284B0 (NtUserShowCaret.c)
 *     NtUserHideCaret @ 0x1C0028530 (NtUserHideCaret.c)
 *     zzzSetCaretPos @ 0x1C00E9CE0 (zzzSetCaretPos.c)
 *     zzzDestroyCaret @ 0x1C00F5DE0 (zzzDestroyCaret.c)
 *     zzzHideCaret @ 0x1C023E494 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C023E4BC (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

_BOOL8 __fastcall UT_CaretSet(struct tagWND *a1)
{
  __int64 v2; // rbx
  unsigned int ThreadId; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !*(_QWORD *)(v2 + 304)
    || (ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
        v5 = *(unsigned int *)(v2 + 360),
        (_DWORD)v5 != ThreadId)
    && ((v6 = PtiFromThreadId(v5)) == 0 || *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(v6 + 416)) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return !a1 || a1 == *(struct tagWND **)(v2 + 304);
}
