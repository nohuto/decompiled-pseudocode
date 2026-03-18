/*
 * XREFs of zzzSetCaretPos @ 0x1C00DD820
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0229458 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007AC3C (-UT_InvertCaret@@YAXXZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00DC6E4 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00DDA28 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00DDDB4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     GreTransformPoints @ 0x1C00F6EBC (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // eax
  HDC DC; // rbx
  int v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v7 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( *(_DWORD *)(v7 + 316) != a1 || *(_DWORD *)(v7 + 320) != a2 )
    {
      v8 = *(_QWORD *)(v7 + 296);
      if ( v8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 112) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v12 = a1 + *(_DWORD *)(v7 + 328);
        v13 = a2 + *(_DWORD *)(v7 + 324);
        DC = (HDC)_GetDC();
        GreTransformPoints(DC, 1);
        _ReleaseDC(DC);
        *(_DWORD *)(v7 + 356) = a1;
        *(_DWORD *)(v7 + 364) = v12 - a1;
        *(_DWORD *)(v7 + 360) = a2;
        *(_DWORD *)(v7 + 368) = v13 - a2;
      }
      if ( (*(_DWORD *)(v7 + 304) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v7 + 316) = a1;
      *(_DWORD *)(v7 + 320) = a2;
      if ( *(_QWORD *)(v7 + 344) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v7 + 296), (struct tagQ *)v7);
        CreateCaretTimer(*(struct tagWND **)(v7 + 296), (struct tagQ *)v7);
      }
      v9 = *(_DWORD *)(v7 + 304) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v7 + 304) = v9;
      if ( !*(_DWORD *)(v7 + 308) )
      {
        *(_DWORD *)(v7 + 304) = v9 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(_QWORD *)(v7 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v4, v5, v6);
    return 0LL;
  }
}
