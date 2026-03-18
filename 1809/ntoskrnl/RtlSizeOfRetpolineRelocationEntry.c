/*
 * XREFs of RtlSizeOfRetpolineRelocationEntry @ 0x1402F7358
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x1402F6CC8 (RtlCreateRetpolineRelocationInformation.c)
 *     RtlValidateRetpolineRelocation @ 0x1402F7380 (RtlValidateRetpolineRelocation.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x1402F7C1C (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineRelocationEntry(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  if ( (unsigned __int64)(v1 - 1) < 2 )
    return 2LL;
  return 0xFFFFFFFFLL;
}
