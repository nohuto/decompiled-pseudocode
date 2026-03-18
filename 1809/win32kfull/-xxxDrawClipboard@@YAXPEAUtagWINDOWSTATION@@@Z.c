/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DC2C8
 * Callers:
 *     xxxCloseClipboard @ 0x1C00D9B50 (xxxCloseClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C00DE71C (xxxSetClipboardViewer.c)
 *     xxxDisownClipboard @ 0x1C00E021C (xxxDisownClipboard.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     CountNumClipFormatForIL @ 0x1C00DA0CC (CountNumClipFormatForIL.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rdi
  __int64 v9; // rcx
  unsigned int v10; // eax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v3 = *((_QWORD *)a1 + 9);
    if ( v3 )
    {
      *((_QWORD *)a1 + 7) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v11;
      v11[1] = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v5 = (_QWORD *)*((_QWORD *)a1 + 10);
      if ( v5 )
        v5 = (_QWORD *)*v5;
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 9), 0x308u, (__int64)v5, 0LL, 1);
      ThreadUnlock1(v7, v6);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 224) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(i + 16) + 424LL);
    if ( v9 )
      v9 = *(_QWORD *)(v9 + 880);
    v10 = CountNumClipFormatForIL(v9, (__int64)a1);
    PostMessage(i, 797LL, v10, 0LL);
  }
}
