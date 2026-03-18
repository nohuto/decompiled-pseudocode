/*
 * XREFs of EtwTraceWaitCursor @ 0x1C0083360
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00E5920 (-EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z.c)
 *     McTemplateK0qqqqq @ 0x1C00EAA04 (McTemplateK0qqqqq.c)
 */

void __fastcall EtwTraceWaitCursor(__int64 a1, struct tagCURSOR *a2)
{
  struct tagCURSOR *const v2; // r9
  unsigned int WaitCursorType; // eax
  int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rbx

  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
    && (qword_1C01C3310 & 0x8000000000040000uLL) != 0
    && (qword_1C01C3318 & 0x8000000000040000uLL) == qword_1C01C3318 )
  {
    EtwpGetWaitCursorType(a2);
    WaitCursorType = EtwpGetWaitCursorType(v2);
    v5 = WaitCursorType;
    if ( v4 == W32kEtwWaitCursorActiveType
      && v4
      && v4 != WaitCursorType
      && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - W32kEtwWaitCursorStartMs >= 0xC8
      && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
    {
      McTemplateK0qqqqq(
        MEMORY[0xFFFFF78000000320],
        (unsigned int)&WaitCursorEvent,
        v4,
        W32kEtwWaitCursorThreadId,
        W32kEtwWaitCursorProcessId,
        gSessionId,
        v4,
        ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
    W32kEtwWaitCursorActiveType = v5;
    if ( v5 )
      W32kEtwWaitCursorStartMs = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( gpqCursor )
    {
      v6 = *((_QWORD *)gpqCursor + 13);
      if ( v6 )
        v7 = *(_QWORD *)(v6 + 16);
      else
        v7 = *((_QWORD *)gpqCursor + 11);
      W32kEtwWaitCursorThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
      W32kEtwWaitCursorProcessId = *(_DWORD *)(*(_QWORD *)(v7 + 424) + 56LL);
    }
    else
    {
      W32kEtwWaitCursorThreadId = 0;
      W32kEtwWaitCursorProcessId = 0;
    }
  }
}
