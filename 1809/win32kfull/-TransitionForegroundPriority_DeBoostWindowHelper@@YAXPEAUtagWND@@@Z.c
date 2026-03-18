/*
 * XREFs of ?TransitionForegroundPriority_DeBoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C01FB0A0
 * Callers:
 *     <none>
 * Callees:
 *     SetForegroundPriority @ 0x1C00CF050 (SetForegroundPriority.c)
 */

void __fastcall TransitionForegroundPriority_DeBoostWindowHelper(struct tagWND *a1)
{
  if ( a1 )
    SetForegroundPriority(*((_QWORD *)a1 + 2), 0);
}
