/*
 * XREFs of MmDeterminePoolType @ 0x1402B938C
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140945540 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x14094BD7C (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = MiDeterminePoolType(a1);
  result = 0LL;
  if ( v1 != 32 )
    return v1;
  return result;
}
