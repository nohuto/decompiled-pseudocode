/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C019E8D0
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C0026B90 (DestroySMWP.c)
 *     HMUnlockObject @ 0x1C00DAD2C (HMUnlockObject.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax

  v3 = (_DWORD *)HMUnlockObject((__int64)a1, a2, a3);
  if ( v3 )
    DestroySMWP(v3);
}
