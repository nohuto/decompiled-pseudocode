/*
 * XREFs of KiIsSecureProcessFlush @ 0x1400EDAF4
 * Callers:
 *     KeFlushSingleTb @ 0x1400ECDF4 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140156ED8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173C9C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
}
