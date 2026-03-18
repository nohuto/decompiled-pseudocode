/*
 * XREFs of VrpCleanupBufferParameter @ 0x1408083E4
 * Callers:
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14080B260 (VrpPostQueryKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpCleanupBufferParameter(char a1, PVOID *a2)
{
  if ( a1 == 1 && *a2 )
  {
    ExFreePoolWithTag(*a2, 0x67655256u);
    *a2 = 0LL;
  }
  return 0LL;
}
