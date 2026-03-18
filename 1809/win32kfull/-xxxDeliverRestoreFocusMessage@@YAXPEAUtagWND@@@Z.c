/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00CCD4C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00CEEB0 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rdi

  v1 = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) != 0 )
    v1 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1376LL);
  if ( v1 )
  {
    v2 = *((_QWORD *)v1 + 2);
    if ( *(_QWORD *)(v2 + 432) == gpqForeground )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v1) )
      {
        if ( v2 == gptiCurrent )
          xxxSendMessage((ULONG_PTR)v1);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}
