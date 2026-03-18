/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00DDA28
 * Callers:
 *     zzzDestroyCaret @ 0x1C00DD7F0 (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C00DD820 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C0226E04 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0226E2C (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned int ThreadId; // eax
  __int64 v7; // rcx
  __int64 v9; // rax

  v5 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v5 + 296)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
         v7 = *(unsigned int *)(v5 + 352),
         (_DWORD)v7 == ThreadId)
     || (v9 = PtiFromThreadId(v7)) != 0 && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(v9 + 424)) )
  {
    if ( !a1 || a1 == *(struct tagWND **)(v5 + 296) )
      return 1LL;
  }
  else
  {
    UserSetLastError(5LL, a2, a3, a4);
  }
  return 0LL;
}
