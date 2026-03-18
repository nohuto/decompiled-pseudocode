/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0051838
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C003AC74 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, __int64 a2)
{
  SetOrClrWF(0LL, a1, 264LL, 1LL);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0 )
  {
    SetOrClrWF(1LL, a1, 64LL, 1LL);
    a2 = 1LL;
    SetOrClrWF(0LL, a1, 257LL, 1LL);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 22LL) < 0 )
  {
    SetOrClrWF(0LL, a1, 1664LL, 1LL);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage((ULONG_PTR)a1);
}
