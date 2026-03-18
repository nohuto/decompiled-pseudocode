/*
 * XREFs of MmDeterminePoolType @ 0x14013C9EC
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140983F10 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x14098A778 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x140061B00 (MiDeterminePoolType.c)
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = MiDeterminePoolType(a1);
  result = 0LL;
  if ( v1 != 32 )
    return v1;
  return result;
}
