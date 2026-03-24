/*
 * XREFs of MiQuerySystemBase @ 0x14013BABC
 * Callers:
 *     MiInitializeSpecialPool @ 0x1407155C8 (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x14072A69C (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_14043BA50[2 * a1];
}
