/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C001F6D8
 * Callers:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 * Callees:
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0073424 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 i; // rbx
  __int64 v3; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = gptiCurrent;
  v4[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v4;
  v4[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
  {
    v3 = *(_QWORD *)(i + 40);
    if ( !*(_QWORD *)(v3 + 136) && (*(_BYTE *)(v3 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v4);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(a1, v1);
}
