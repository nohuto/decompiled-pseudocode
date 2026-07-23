/*
 * XREFs of KeDebugReadEnclaveMemory @ 0x140844C18
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x14085B11C (MiDbgReadWriteEnclave.c)
 *     MiDbgReadWriteEnclaveUnaligned @ 0x14085B208 (MiDbgReadWriteEnclaveUnaligned.c)
 * Callees:
 *     KiEnclsDebugRead @ 0x1401BCE20 (KiEnclsDebugRead.c)
 */

__int64 __fastcall KeDebugReadEnclaveMemory(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  while ( a3 )
  {
    *a2 = KiEnclsDebugRead(4LL, 0LL);
    a1 += 8LL;
    ++a2;
    a3 -= 8LL;
    *a4 += 8LL;
  }
  return 0LL;
}
