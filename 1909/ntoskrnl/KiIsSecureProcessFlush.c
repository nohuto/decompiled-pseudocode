/*
 * XREFs of KiIsSecureProcessFlush @ 0x1400C5B48
 * Callers:
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140166B0C (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A96C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
}
