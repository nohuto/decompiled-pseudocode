/*
 * XREFs of DpiFinishPnPTransitionCallback @ 0x1C017E470
 * Callers:
 *     <none>
 * Callees:
 *     DxgkFinishPnPTransition @ 0x1C017E4A0 (DxgkFinishPnPTransition.c)
 */

char __fastcall DpiFinishPnPTransitionCallback(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ecx

  if ( a2 == 1 )
  {
    v3 = a3;
    goto LABEL_5;
  }
  if ( a2 == 2 )
  {
    v3 = 0;
LABEL_5:
    DxgkFinishPnPTransition(v3);
  }
  return 1;
}
