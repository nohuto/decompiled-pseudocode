/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B5D90
 * Callers:
 *     xxxDisownClipboard @ 0x1C00B5724 (xxxDisownClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C00B58F0 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1C00B6410 (xxxCloseClipboard.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     CountNumClipFormatForIL @ 0x1C00B6B70 (CountNumClipFormatForIL.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 i; // rdi
  __int64 v10; // rcx
  unsigned int v11; // eax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v3 = *((_QWORD *)a1 + 9);
    if ( v3 )
    {
      *((_QWORD *)a1 + 7) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v12[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v12;
      v12[1] = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v5 = (_QWORD *)*((_QWORD *)a1 + 10);
      if ( v5 )
        v5 = (_QWORD *)*v5;
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 9), 0x308u, (unsigned __int64)v5, 0LL, 1);
      ThreadUnlock1(v7, v6, v8);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 224) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(i + 16) + 416LL);
    if ( v10 )
      v10 = *(_QWORD *)(v10 + 872);
    v11 = CountNumClipFormatForIL(v10, a1);
    PostMessage((struct tagWND *)i, 0x31Du, v11, 0LL);
  }
}
