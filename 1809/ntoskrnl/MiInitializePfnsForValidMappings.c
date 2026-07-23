/*
 * XREFs of MiInitializePfnsForValidMappings @ 0x1409C0BA0
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 *     MxCreatePfns @ 0x1409C108C (MxCreatePfns.c)
 *     MxZeroPageTablePfns @ 0x1409C185C (MxZeroPageTablePfns.c)
 */

__int64 __fastcall MiInitializePfnsForValidMappings(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi

  v2 = 0xFFFFF6C000000000uLL;
  v3 = 3LL;
  v4 = 0xFFFFF6FFFFFFFFF8uLL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v3;
  }
  while ( v3 );
  MxZeroPageTablePfns(v2, v4, 3LL, a1);
  MxCreatePfns(v2, v4, 3LL, a1);
  return KeFlushCurrentTbOnly(0LL);
}
