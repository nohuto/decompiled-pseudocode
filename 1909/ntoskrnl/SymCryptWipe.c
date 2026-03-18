/*
 * XREFs of SymCryptWipe @ 0x1401BDF40
 * Callers:
 *     SymCryptSha256Result @ 0x1401BC430 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1401BDC50 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1401BDCE0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401BDD50 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1401BDF54 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401BE200 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1401BE5B0 (SymCryptWipeAsm.c)
 */

__int64 SymCryptWipe()
{
  return SymCryptWipeAsm();
}
