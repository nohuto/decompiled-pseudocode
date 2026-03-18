/*
 * XREFs of zzzSetCaretPos @ 0x1C0063880
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0200A20 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0063A78 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88 (-UT_InvertCaret@@YAXXZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C006470C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00648A4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     GreTransformPoints @ 0x1C00E552C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // eax
  HDC DC; // rbx
  int v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v5 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_DWORD *)(v5 + 316) != a1 || *(_DWORD *)(v5 + 320) != a2 )
    {
      v6 = *(_QWORD *)(v5 + 296);
      if ( v6 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 112) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v10 = a1 + *(_DWORD *)(v5 + 328);
        v11 = a2 + *(_DWORD *)(v5 + 324);
        DC = (HDC)_GetDC();
        GreTransformPoints(DC, 1);
        _ReleaseDC(DC);
        *(_DWORD *)(v5 + 356) = a1;
        *(_DWORD *)(v5 + 364) = v10 - a1;
        *(_DWORD *)(v5 + 360) = a2;
        *(_DWORD *)(v5 + 368) = v11 - a2;
      }
      if ( (*(_DWORD *)(v5 + 304) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v5 + 316) = a1;
      *(_DWORD *)(v5 + 320) = a2;
      if ( *(_QWORD *)(v5 + 344) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v5 + 296), (struct tagQ *)v5);
        CreateCaretTimer(*(struct tagWND **)(v5 + 296), (struct tagQ *)v5);
      }
      v7 = *(_DWORD *)(v5 + 304) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v5 + 304) = v7;
      if ( !*(_DWORD *)(v5 + 308) )
      {
        *(_DWORD *)(v5 + 304) = v7 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(_QWORD *)(v5 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v4);
    return 0LL;
  }
}
