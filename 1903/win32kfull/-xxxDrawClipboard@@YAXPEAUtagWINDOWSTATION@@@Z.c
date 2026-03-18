/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0011998
 * Callers:
 *     xxxSetClipboardViewer @ 0x1C00116B0 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1C00B78A0 (xxxCloseClipboard.c)
 *     xxxDisownClipboard @ 0x1C0125564 (xxxDisownClipboard.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     CountNumClipFormatForIL @ 0x1C00B7BA8 (CountNumClipFormatForIL.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 i; // rdi
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( v2 )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      *((_QWORD *)a1 + 7) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v11 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
      v12 = v2;
      HMLockObject(v2);
      v4 = (_QWORD *)*((_QWORD *)a1 + 10);
      if ( v4 )
        v4 = (_QWORD *)*v4;
      xxxSendNotifyMessage(*((_QWORD *)a1 + 9), 776LL, v4, 0LL, 1);
      ThreadUnlock1(v6, v5, v7);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 240) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(i + 16) + 416LL);
    if ( v9 )
      v9 = *(_QWORD *)(v9 + 872);
    v10 = CountNumClipFormatForIL(v9, a1);
    PostMessage(i, 797LL, v10, 0LL);
  }
}
