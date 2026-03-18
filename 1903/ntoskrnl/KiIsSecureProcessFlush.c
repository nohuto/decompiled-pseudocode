/*
 * XREFs of KiIsSecureProcessFlush @ 0x14009FA08
 * Callers:
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1401670BC (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A27C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
}
