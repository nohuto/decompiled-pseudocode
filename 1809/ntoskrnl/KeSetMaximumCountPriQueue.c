/*
 * XREFs of KeSetMaximumCountPriQueue @ 0x14029C0AC
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140740AC0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetMaximumCountPriQueue(__int64 a1, int a2)
{
  if ( !a2 )
    a2 = KeNumberProcessors_0;
  *(_DWORD *)(a1 + 664) = a2;
}
