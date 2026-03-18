/*
 * XREFs of SymCryptWipe @ 0x1401B25E4
 * Callers:
 *     SymCryptSha256Result @ 0x1401B0BA0 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1401B2300 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1401B2390 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401B2400 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1401B25F8 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401B28A4 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1401B2C50 (SymCryptWipeAsm.c)
 */

__int64 SymCryptWipe()
{
  return SymCryptWipeAsm();
}
