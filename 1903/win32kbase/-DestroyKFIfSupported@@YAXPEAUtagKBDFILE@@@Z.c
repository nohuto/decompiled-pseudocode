/*
 * XREFs of ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C0104FD0
 * Callers:
 *     <none>
 * Callees:
 *     DestroyKF @ 0x1C00BA480 (DestroyKF.c)
 */

void __fastcall DestroyKFIfSupported(struct tagKBDFILE *a1, __int64 a2, __int64 a3)
{
  DestroyKF(a1, a2, a3);
}
