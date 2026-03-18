/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C0105450
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
