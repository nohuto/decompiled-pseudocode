/*
 * XREFs of VerifierEngAllocUserMem @ 0x1C0298120
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0297EAC (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierEngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngAllocUserMem(cjMemSize, ulTag);
}
