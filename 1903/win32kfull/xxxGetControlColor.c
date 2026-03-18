/*
 * XREFs of xxxGetControlColor @ 0x1C008DB14
 * Callers:
 *     xxxPaintRect @ 0x1C008D854 (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C0154D04 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C022C1E0 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1, __int64 *a2, HWND a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi

  v8 = 0LL;
  if ( PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
  {
    v9 = 0LL;
    if ( a2 )
      v9 = *a2;
    v10 = xxxSendMessage(a1, a4, a3, v9);
    v11 = v10;
    if ( !v10 || !(unsigned int)GreValidateServerHandle(v10, 16LL) )
    {
      if ( a2 )
        v8 = *a2;
      return xxxDefWindowProc(a1, a4, a3, v8);
    }
    return v11;
  }
  else
  {
    if ( a2 )
      v8 = *a2;
    return xxxDefWindowProc(a1, a4, a3, v8);
  }
}
