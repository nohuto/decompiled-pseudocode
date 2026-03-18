/*
 * XREFs of RtlSizeOfRetpolineRelocationEntry @ 0x140097A50
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x1400976CC (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x1400979A0 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlValidateRetpolineRelocation @ 0x14012A824 (RtlValidateRetpolineRelocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineRelocationEntry(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  if ( (unsigned __int64)(v1 - 1) > 1 )
    return 0xFFFFFFFFLL;
  return 2LL;
}
