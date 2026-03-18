/*
 * XREFs of xxxGetControlColor @ 0x1C012C064
 * Callers:
 *     xxxPaintRect @ 0x1C012BDA4 (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C0155AC4 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C022BBC0 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(ULONG_PTR a1, HICON *a2, unsigned __int64 a3, unsigned int a4)
{
  HICON v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi

  v8 = 0LL;
  if ( PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
  {
    v9 = xxxSendMessage(a1);
    v10 = v9;
    if ( !v9 || !(unsigned int)GreValidateServerHandle(v9, 16LL) )
    {
      if ( a2 )
        v8 = *a2;
      return xxxDefWindowProc((struct tagWND *)a1, a4, a3, v8);
    }
    return v10;
  }
  else
  {
    if ( a2 )
      v8 = *a2;
    return xxxDefWindowProc((struct tagWND *)a1, a4, a3, v8);
  }
}
