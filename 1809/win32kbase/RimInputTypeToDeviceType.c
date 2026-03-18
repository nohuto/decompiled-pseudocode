/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C0093E40
 * Callers:
 *     rimCompleteReads @ 0x1C00504E0 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0050690 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C00525A0 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01242A4 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 == 2 )
    return result;
  if ( (a1 & 0x3C) == 0 )
    return 0LL;
  return 2LL;
}
