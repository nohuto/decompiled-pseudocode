/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0073424
 * Callers:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C001F6D8 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, __int64 a2)
{
  SetOrClrWF(0, (__int64)a1, 0x108u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0 )
  {
    SetOrClrWF(1, (__int64)a1, 0x40u, 1);
    a2 = 1LL;
    SetOrClrWF(0, (__int64)a1, 0x101u, 1);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 22LL) < 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x680u, 1);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage((ULONG_PTR)a1);
}
