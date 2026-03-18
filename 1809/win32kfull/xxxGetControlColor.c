/*
 * XREFs of xxxGetControlColor @ 0x1C007B6E0
 * Callers:
 *     xxxPaintRect @ 0x1C007B3E4 (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C014C484 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C0214460 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi

  if ( PsGetCurrentProcessWin32Process(a1) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    return xxxDefWindowProc(a1);
  v2 = xxxSendMessage((ULONG_PTR)a1);
  v3 = v2;
  if ( !v2 || !(unsigned int)GreValidateServerHandle(v2, 16LL) )
    return xxxDefWindowProc(a1);
  return v3;
}
