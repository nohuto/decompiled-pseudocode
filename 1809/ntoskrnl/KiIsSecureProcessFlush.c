/*
 * XREFs of KiIsSecureProcessFlush @ 0x1400EDAD4
 * Callers:
 *     KeFlushSingleTb @ 0x1400ECDD4 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140156EB8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173C7C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
}
