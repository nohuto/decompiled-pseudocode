/*
 * XREFs of ViMmValidateIrql @ 0x140984EB0
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140983B60 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140983D00 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140983DF0 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x1409841F0 (VerifierMmFreePagesFromMdl.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViMmValidateIrql(char a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 result; // rax

  if ( !a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && (MmVerifierData & 0x20000) != 0 )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x7EuLL, CurrentIrql, 2uLL, 0LL);
  }
  return result;
}
