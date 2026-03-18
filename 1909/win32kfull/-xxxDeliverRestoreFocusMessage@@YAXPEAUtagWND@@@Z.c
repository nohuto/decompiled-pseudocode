/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C012FCE0 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rdi

  v1 = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) != 0 )
    v1 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1400LL);
  if ( v1 )
  {
    v2 = *((_QWORD *)v1 + 2);
    if ( *(_QWORD *)(v2 + 424) == gpqForeground )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v1) )
      {
        if ( v2 == gptiCurrent )
          xxxSendMessage((ULONG_PTR)v1);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, *(_QWORD *)(v2 + 424), 0x1Du, (__int64)v1, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}
