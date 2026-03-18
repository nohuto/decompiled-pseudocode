/*
 * XREFs of ?TransitionForegroundPriority_DeBoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C01D6420
 * Callers:
 *     <none>
 * Callees:
 *     SetForegroundPriority @ 0x1C005FD30 (SetForegroundPriority.c)
 */

void __fastcall TransitionForegroundPriority_DeBoostWindowHelper(struct tagWND *a1)
{
  if ( a1 )
    SetForegroundPriority(*((_QWORD *)a1 + 2), 0);
}
