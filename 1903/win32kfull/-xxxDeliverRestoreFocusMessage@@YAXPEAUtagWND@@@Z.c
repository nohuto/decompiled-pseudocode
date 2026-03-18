/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00114C8
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0016970 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
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
          xxxSendMessage(v1, 763LL, 0LL, 0LL);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}
