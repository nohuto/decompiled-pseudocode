/*
 * XREFs of MiQuerySystemBase @ 0x14013BBBC
 * Callers:
 *     MiInitializeSpecialPool @ 0x140716868 (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x14072B88C (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_14043CB10[2 * a1];
}
