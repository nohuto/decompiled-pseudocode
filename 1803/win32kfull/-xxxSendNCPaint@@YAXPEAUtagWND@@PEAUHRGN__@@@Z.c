/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F2C68
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, __int64 a2)
{
  SetOrClrWF(0, (__int64)a1, 264, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0 )
  {
    SetOrClrWF(1, (__int64)a1, 64, 1);
    a2 = 1LL;
    SetOrClrWF(0, (__int64)a1, 257, 1);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 22LL) < 0 )
  {
    SetOrClrWF(0, (__int64)a1, 1664, 1);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage((ULONG_PTR)a1);
}
