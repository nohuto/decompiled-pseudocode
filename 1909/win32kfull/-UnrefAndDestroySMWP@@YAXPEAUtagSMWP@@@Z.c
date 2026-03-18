/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01D39D0
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C0070CC0 (DestroySMWP.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMUnlockObject(a1);
  if ( v1 )
    DestroySMWP(v1);
}
