/*
 * XREFs of SymCryptWipe @ 0x1401BD820
 * Callers:
 *     SymCryptSha256Result @ 0x1401BBD10 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1401BD530 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1401BD5C0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401BD630 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1401BD834 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401BDAE0 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1401BDE90 (SymCryptWipeAsm.c)
 */

__int64 SymCryptWipe()
{
  return SymCryptWipeAsm();
}
