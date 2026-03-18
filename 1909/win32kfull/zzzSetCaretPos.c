/*
 * XREFs of zzzSetCaretPos @ 0x1C00E9CE0
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C02418E4 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00285A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     GreTransformPoints @ 0x1C00D963C (GreTransformPoints.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA244 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA3E4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C012B6F0 (-UT_InvertCaret@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(LONG a1, LONG a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v11; // edx
  int v12; // edx
  __int64 DC; // rbx
  LONG y; // edx
  int v15; // eax
  int v16; // eax
  struct _POINTL v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+3Ch] [rbp-2Ch]

  if ( UT_CaretSet(0LL) )
  {
    v7 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_DWORD *)(v7 + 324) != a1 || *(_DWORD *)(v7 + 328) != a2 )
    {
      v8 = *(_QWORD *)(v7 + 304);
      if ( v8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 136) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v11 = a1 + *(_DWORD *)(v7 + 336);
        v17.x = a1;
        v18 = v11;
        v12 = a2 + *(_DWORD *)(v7 + 332);
        v17.y = a2;
        v19 = v12;
        DC = _GetDC();
        GreTransformPoints(DC, &v17, &v17, 2, 1);
        _ReleaseDC(DC);
        y = v17.y;
        v15 = v18 - v17.x;
        *(_DWORD *)(v7 + 364) = v17.x;
        *(_DWORD *)(v7 + 372) = v15;
        v16 = v19 - y;
        *(_DWORD *)(v7 + 368) = y;
        *(_DWORD *)(v7 + 376) = v16;
      }
      if ( (*(_DWORD *)(v7 + 312) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v7 + 324) = a1;
      *(_DWORD *)(v7 + 328) = a2;
      if ( *(_QWORD *)(v7 + 352) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v7 + 304), (struct tagQ *)v7);
        CreateCaretTimer(*(struct tagWND **)(v7 + 304), (struct tagQ *)v7);
      }
      v9 = *(_DWORD *)(v7 + 312) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v7 + 312) = v9;
      if ( !*(_DWORD *)(v7 + 316) )
      {
        *(_DWORD *)(v7 + 312) = v9 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(struct tagWND **)(v7 + 304), 4294967288LL, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v4, v5, v6);
    return 0LL;
  }
}
