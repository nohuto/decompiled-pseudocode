/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01BFE20
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C0038DB0 (DestroySMWP.c)
 *     HMUnlockObject @ 0x1C00DF140 (HMUnlockObject.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMUnlockObject((__int64)a1);
  if ( v1 )
    DestroySMWP(v1);
}
