/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C0102A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  if ( (int)IsFreeDdeXactSupported() >= 0 )
    FreeDdeXact(a1);
}
