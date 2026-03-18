/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0100A58
 * Callers:
 *     xxxCloseClipboard @ 0x1C0058D90 (xxxCloseClipboard.c)
 *     xxxDisownClipboard @ 0x1C00FF454 (xxxDisownClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C0100960 (xxxSetClipboardViewer.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     CountNumClipFormatForIL @ 0x1C0059098 (CountNumClipFormatForIL.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 i; // rdi
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v4 = *((_QWORD *)a1 + 9);
    if ( v4 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      *((_QWORD *)a1 + 7) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gptiCurrent, a3);
      v13 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
      v14 = v4;
      HMLockObject(v4);
      v6 = (_QWORD *)*((_QWORD *)a1 + 10);
      if ( v6 )
        v6 = (_QWORD *)*v6;
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 9), 0x308u, (__int64)v6, 0LL, 1);
      ThreadUnlock1(v8, v7, v9);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 240) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(i + 16) + 416LL);
    if ( v11 )
      v11 = *(_QWORD *)(v11 + 872);
    v12 = CountNumClipFormatForIL(v11, (__int64)a1);
    PostMessage(i, 797LL, v12);
  }
}
