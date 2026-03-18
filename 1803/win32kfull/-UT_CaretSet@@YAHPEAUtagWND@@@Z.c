/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0063A78
 * Callers:
 *     zzzDestroyCaret @ 0x1C0063850 (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C0063880 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C01FE0AC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C01FE0D4 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  unsigned int ThreadId; // eax
  __int64 v6; // rcx
  __int64 v8; // rax

  v2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v4 + 296)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
         v6 = *(unsigned int *)(v4 + 352),
         (_DWORD)v6 == ThreadId)
     || (v8 = PtiFromThreadId(v6)) != 0 && *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(v8 + 416)) )
  {
    if ( a1 )
    {
      LOBYTE(v2) = a1 == *(struct tagWND **)(v4 + 296);
      return v2;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL, a2);
    return 0LL;
  }
}
