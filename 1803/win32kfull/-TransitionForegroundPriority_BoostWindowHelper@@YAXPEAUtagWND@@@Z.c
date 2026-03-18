/*
 * XREFs of ?TransitionForegroundPriority_BoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C00624B0
 * Callers:
 *     ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C005E690 (-TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C005FD30 (SetForegroundPriority.c)
 */

void __fastcall TransitionForegroundPriority_BoostWindowHelper(struct tagWND *a1)
{
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) == 0 )
      SetForegroundPriority(*((_QWORD *)a1 + 2), 1);
  }
}
