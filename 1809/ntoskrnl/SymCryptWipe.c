/*
 * XREFs of SymCryptWipe @ 0x1401B2744
 * Callers:
 *     SymCryptSha256Result @ 0x1401B0D00 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1401B2460 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1401B24F0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401B2560 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1401B2758 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401B2A04 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1401B2DB0 (SymCryptWipeAsm.c)
 */

__int64 SymCryptWipe()
{
  return SymCryptWipeAsm();
}
