/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C003AC74
 * Callers:
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 * Callees:
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0051838 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00F9B60 (ThreadLockExchangeAlways.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v3 = gptiCurrent;
  v6 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v6;
  v7 = 0LL;
  for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
  {
    v5 = *(_QWORD *)(i + 40);
    if ( !*(_QWORD *)(v5 + 136) && (*(_BYTE *)(v5 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, &v6);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(a1, v3, a3);
}
